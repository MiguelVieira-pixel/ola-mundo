from sqlalchemy import create_engine, Integer, String, Column, ForeignKey
from sqlalchemy.orm import declarative_base, sessionmaker, Relationship

engine = create_engine('sqlite:///dados.db')
Base = declarative_base()
_Session = sessionmaker(engine)

class User(Base):
    __tablename__ = 'Users'

    id = Column(Integer, primary_key=True)
    name = Column(String(40), unique=True)
    age = Column(Integer)

    def __repr__(self):
        return f"<{self.name}>"
    
    
class Book(Base):
    __tablename__ = 'Books'

    id = Column(Integer, primary_key=True)
    name = Column(String(70))
    year = Column(Integer)
    author_id = Column(Integer, ForeignKey('Authors.id'))
    author = Relationship('Author', backref='books', lazy='subquery')

class Author(Base):
    __tablename__ = 'Authors'

    id = Column(Integer, primary_key=True)
    name = Column(String(50))

Base.metadata.create_all(engine)


with _Session() as session:
    autor = session.query(Author).filter_by(id=2).first()
    print(autor.books)
