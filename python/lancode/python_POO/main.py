# Na classe Video, crie a propriedade data_publicação, que armazena a data em que o vídeo foi publicado.
# °    Essa data deve ser exibida no método informacoes() em um formato legível (ex: 25/09/2025).
# Crie uma nova classe chamada Playlist, que será usada para organizar vídeos dentro do canal.
# °    Cada Playlist deve ter um título e conter vários vídeos.
# °    A playlist deve ter um método que exibe todos os seus vídeos com informações.     


class Canal:
    def __init__(self, nome, descricao, inscritos):
        self.nome = nome
        self.descricao = descricao
        self.inscritos = inscritos
        self.videos = []

    @property
    def inscrever(self):
        self.inscritos += 1

    def postar(self, video):
        if video not in self.videos:
            self.videos.append(video)
        else: 
            print(f'O vídeo {video} já existe!')
    

class CanalEmpresarial(Canal):
    def __init__(self, nome, descricao, inscritos):
        super().__init__(nome, descricao, inscritos)
        self._equipe = []

    @property
    def equipe(self):
        return self._equipe
    
    def adicionar_membro_equipe(self, membro):
        if membro not in self._equipe:
            self.equipe.append(membro)
        else:
            print(f'O membro {membro} já esta na sua equipe!')

    def remover_membro_equipe(self, membro):
        if membro in self._equipe:
            self.equipe.remove(membro)
        else:
            print(f'Não existe {membro} na sua equipe!')

class Video:
    def __init__(self, titulo, descricao):
        self.titulo = titulo
        self.descricao = descricao
        self.visualizacoes = 0
        self.likes = 0
        self.deslikes = 0
        self.comentarios = []
        # self.data_publicação = 

    def __repr__(self):
        return f'<{self.titulo}>'

    @property
    def assistir(self):
        self.visualizacoes += 1

    @property
    def gostei(self):
        self.likes += 1

    @property
    def nao_gostei(self):
        self.deslikes += 1

    def comentar(self, comentario):
        self.comentarios.append(comentario)

    @property
    def info(self):
        print(f'Nome do vídeo: {self.titulo}')
        print(f'Descrição do vídeo: {self.descricao}')
        print(f'Visualizacoes: {self.visualizacoes}')
        print(f'Likes: {self.likes}')
        print(f'Deslikes: {self.deslikes}')
        print(f'Comentarios: {self.comentarios}')
        # print(f'Data de publicação: {data_publicacao}')

class Playlist(Video):
    def __init__(self, nome_playlist):
        self.nome_playlist = nome_playlist
        self.playlist = []

    @property
    def add_playlist(self, video):
        if video not in self.playlist:  
            self.playlist.append(video)
        else:
            print(f'O {video} já existe')
    
    def info_playlist(self, video):
        print(f'Playlist: {self.nome_playlist}')
        for video in self.playlist:
            print(f' - {video.titulo}')

canal_lancode = Canal('Lan Code', 'Códigos e gatos', 34000)
canal_pycodebr = Canal('pycodeBR', 'pyxão por ensinar', 25000)
canal_duolingo = CanalEmpresarial('Duolingo','ingres', 500000)

video_poo = Video('python objetos', 'python programação orientada a objetos')
apschedule = Video('aprenda apschedule', 'da pycodeBR')
video_poo2 = Video('python objetos2', 'python programação orientada a objetos2')
canal_lancode.postar(video_poo)
canal_pycodebr.postar(apschedule)
canal_lancode.postar(video_poo2)
aula_POO = Playlist('aula POO')
aula_POO.add_playlist(video_poo)
aula_POO.add_playlist(video_poo2)
print(canal_lancode.videos)
print(canal_pycodebr.videos)
print(aula_POO.info_playlist)
# print(video_poo.info)
# video_poo.gostei
# print(video_poo.likes)

# canal_duolingo.equipe.append('Ana')
# canal_duolingo.equipe.append('Pedro')
# canal_duolingo.equipe.append('Ana')


# print(canal_lancode.nome)
# print(canal_pycodebr.nome)
# print(f'Quantidade de inscritos atuais: {canal_lancode.inscritos}')
# canal_lancode.inscrever()
# print(f'Quantidade de inscritos atuais: {canal_lancode.inscritos}')
# print(f'Membro atuais: {canal_duolingo.equipe}')
# canal_duolingo.adicionar_membro_equipe('Ana')
# canal_duolingo.adicionar_membro_equipe('Pedro')
# print(f'Membro atuais: {canal_duolingo.equipe}')
# canal_duolingo.remover_membro_equipe('Pedro')
# print(f'Membro atuais: {canal_duolingo.equipe}')