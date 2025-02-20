# 📌 Como Instalar o 42 Header no Vim  

Este tutorial explica como instalar e configurar o **42 Header** no Vim para usá-lo facilmente nos seus projetos da 42.  

## 📥 1. Clonar o Repositório  

Abra o terminal e execute o seguinte comando para clonar o repositório oficial do **42 Header**:  

```bash
git clone https://github.com/42Paris/42header.git ~/42header
```

Isso criará a pasta `42header` no seu diretório pessoal (`~`).  

---

## 📂 2. Instalar o Plugin  

Agora, copie o plugin do 42 Header para a pasta correta do Vim:  

```bash
mkdir -p ~/.vim/plugin
cp ~/42header/plugin/stdheader.vim ~/.vim/plugin/
```

### O que esses comandos fazem?  
✅ **Cria a pasta de plugins do Vim** (caso ela ainda não exista).  
✅ **Copia o script do header para essa pasta**, permitindo que ele seja executado dentro do Vim.  

---

## 🛠️ 3. Configurar seu Nome e E-mail  

Abra o arquivo de configuração do Vim (`.vimrc`):  

```bash
vim ~/.vimrc
```

Adicione as seguintes linhas no final do arquivo:  

```vim
let g:user42 = 'seu_login_42'
let g:mail42 = 'seu_email@42.fr'
```

📌 **Substitua**:  
- `'seu_login_42'` → Pelo seu login da 42 (o mesmo da intra).  
- `'seu_email@42.fr'` → Pelo seu e-mail da 42.  

Salve e saia do Vim pressionando `ESC`, depois `:wq` e `Enter`.  

---

## ✅ 4. Testar o 42 Header  

Agora, abra qualquer arquivo `.c` ou `.h` no Vim e digite:  

```vim
:Stdheader
```

Se tudo foi configurado corretamente, o **header padrão da 42** será inserido automaticamente no topo do arquivo.  

---

## 🔄 5. (Opcional) Inserção Automática do Header  

Se quiser que o **42 Header** seja adicionado automaticamente sempre que criar um novo arquivo `.c` ou `.h`, edite novamente o `.vimrc` e adicione:  

```vim
autocmd BufNewFile *.c,*.h :Stdheader
```

Agora, ao criar um novo arquivo `.c` ou `.h`, o **header** será gerado automaticamente! 🎉  

---

## 🎯 Conclusão  

Agora você tem o **42 Header** configurado no Vim, pronto para ser usado nos seus projetos! Se encontrar problemas, certifique-se de que todas as etapas foram seguidas corretamente. 🚀  