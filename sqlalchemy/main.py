from sqlalchemy import create_engine, Integer, String, Column
from sqlalchemy.orm import declarative_base, sessionmaker

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

Base.metadata.create_all(engine)



with _Session() as session:
    usuario = User(name='Leugim', age=17)
    session.add(usuario)
    session.

#    usuarios = session.query(User).all()
#    for usuario in usuarios:
#        print(usuario.name)
