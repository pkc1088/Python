from tkinter import*
from tkinter import messagebox
from tkinter.simpledialog import*

def clickButton():
    messagebox.showinfo('��ư', 'Ŭ�� �΢a~')
def func_exit():
    window.quit()
    window.destroy()


window = Tk()
window.title("������â ����")
window.geometry("700x600")
window.resizable(width=FALSE, height=FALSE)


mainMenu = Menu(window)
window.config(menu=mainMenu)
fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label="file", menu=fileMenu)
fileMenu.add_command(label="open")
fileMenu.add_separator()
fileMenu.add_command(label="terminate", command=func_exit)

                     
label1 = Label(window, text="this is mysql",bg="magenta", font=("consolas",20), fg="white")
label2 = Label(window, text="������", font=("consolas",20), fg="blue")
label3 = Label(window, text="�Էµ� ��", font=("consolas",20), fg="RED")
label1.pack()
label2.pack()
label3.pack()
value = askinteger("Ȯ����", "�ֻ��� ���ڸ� �Է�", minvalue=1, maxvalue=6)
label3.configure(text=str(value))


button1 = Button(window, text='���� ����', fg="red", bg="yellow", command=clickButton)
button2 = Button(window, text="buttonL")
button3 = Button(window, text="buttonR")
button1.pack(expand = 1)
button2.pack(side=LEFT, fill=X, padx=20, pady=20)
button3.pack(side=RIGHT, fill=X, padx=20, pady=20)

canvas = Canvas(window, height=300, width=300)
canvas.pack()
canvas.create_line([[0,0],[70,70],[30,170]], fill="blue", width=3)
canvas.create_polygon([[100,100],[100,150],[150,150],[150,100]], fill="black")
canvas.create_text([200,200], text="Here's a CANVAS", font=("consolas",15))


window.mainloop()
