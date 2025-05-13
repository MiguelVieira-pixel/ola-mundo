from sqlalchemy import create_engine, Integer, String, Column
from sqlalchemy.orm import declarative_base, sessionmaker

engine = create_engine('sqlite:///dados.db')
Base = declarative_base()
_Session = sessionmaker(engine)

class User(Base):
    __tablename__ = 'Users'

    id = Column(Integer, primary_key=True)
    name = Column(String(40))

Base.metadata.create_all(engine)

with _Session as session:
    Usuario = User(name="leugim")
    session.add(Usuario)
    session.commit()
