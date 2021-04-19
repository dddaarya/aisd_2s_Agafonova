for (int n = 1000; n <= 100000; n += 1000)
{
double totalTime = 0;

for (int j = 0; j < 10; j++)
{
SplayTree* tree = new SplayTree;

double startTime = clock();

for (int i = 0; i < n; i++)
tree->insert(rand());

double endTime = clock();
totalTime += endTime - startTime;
}

totalTime /= 10;

fout « (int)totalTime « endl;
}

fout.close();