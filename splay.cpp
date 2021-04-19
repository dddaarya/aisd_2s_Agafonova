#include <string>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

/*
Представим что есть некая социальная сеть, где публикуются посты.
Постов очень много.

Эта программа демонстрирует применение splay-дерева
для поиска поста с определённым id среди огромного их массива постов
*/          

// описание класса поста
class Post {
    public:
        string id;
        string text;

        Post(string id, string text) {
            this->id = id;
            this->text = text;
        }
};

// описание класса узла
class Node {
    public:
        // ссылка на пост
        Post *post;

        // ссылка на левый и правый узлы
        Node *left, *right;
};

// описание класса дерева
class PostsTree {
    private:
        Node *rootNode = nullptr;

        void splay(Node * node) {
            // нужно описать этот метод. Без этого метода это обычное бинарное дерево.
        }

    public:
        static Pos
        tsTree build(std::vector<Post*> *posts) { //функция build принимает список постов
            Po+stsTree tree; //переменная tree хранит в себе instance класса PostsTree(декларация)

            for (auto post : *posts) { //перебираем посты
                tree.insert(post);
            }

            return tree;
        }

        Post *findById(string idToFind) {
            // заглушка
            return new Post("asd", "hello");
        }

        void insert(Post *post) {
            newNode = new Node;

            newNode->post = post;

            if (rootNode == nullptr) {
                rootNode = newNode;
                return;
            }

            Node *parentNode = rootNode;
            while(true) {
                if (parentNode->post->id < post->id) {
                    if (parentNode->left) {
                        parentNode = parentNode->left;
                    } else {
                        parentNode->left = newNode;
                        break;
                    }
                } else {
                    if (parentNode->right) {
                        parentNode = parentNode->right;
                    } else {
                        parentNode->right = newNode;
                        break;
                    }
                }
            }

            this->splay(newNode);
        }


};

int main() {
    //открываем папку тест файл, смотрим сколько там файлов(получить имена всех файлов)
    //запускаем цикл, который перебирает эти имена
    //все что ниже будет внутри цикла
    //для каждого имени нужно взять это имя и открыть файл с этим именем
    //из открытого файла считываем строчку за строчкой
    //полученную строчку разделяем, то что до запятой это id. то что после это text

    // 1. подготавливаем демо-данные
    std::vector<Post*> posts = {
        new Post("asd", "hello"),
        new Post("ghb", "lalala"),
        new Post("adbasksdjhk", "my text"),
        new Post("1ejn1jnasdad", "hahahahahah"),
        new Post("1ejn1jnasdad", "hahahahahah")
    };
    //результат запи

    // 2. Строим дерево
    PostsTree myTree = PostsTree::build(&posts); //построить дерево используя список постов

    // 3. пробуем что-то найти в дереве
    string idToFind;

    // 3.1. спрашиваем у пользователя пост с каким id он хочет посмотреть
    cin >> idToFind;

    // 3.2. запускаем поиск
    Post *post = myTree.findById(idToFind);

    // 3.3. выводим текст найденного поста
    cout << post->text << "\n";
}



