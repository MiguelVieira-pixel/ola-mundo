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
        print(f'Nome do vídeo: {video_poo.titulo}')
        print(f'Descrição do vídeo: {video_poo.descricao}')
        print(f'Visualizacoes: {video_poo.visualizacoes}')
        print(f'Likes: {video_poo.likes}')
        print(f'Deslikes: {video_poo.deslikes}')
        print(f'Comentarios: {video_poo.comentarios}')

canal_lancode = Canal('Lan Code', 'Códigos e gatos', 34000)
canal_pycodebr = Canal('pycodeBR', 'pyxão por ensinar', 25000)
canal_duolingo = CanalEmpresarial('Duolingo','ingres', 500000)

video_poo = Video('python objetos', 'python programação orientada a objetos')
apschedule = Video('aprenda apschedule', 'da pycodeBR')
canal_lancode.postar(video_poo)
canal_pycodebr.postar(apschedule)
print(canal_lancode.videos)
print(canal_pycodebr.videos)
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