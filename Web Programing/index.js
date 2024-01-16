const whitebox = document.getElementsByClassName('whitebox');
const imgbox = document.querySelector('.imgbox');

imgbox.addEventListener('dragstart', (e) => {
  console.log('Dragstart');
  console.log('DragStart has been triggered');
    e.target.className += ' hold';
    setTimeout(() => {
        e.target.className = 'hide';
    }, 0);
});

imgbox.addEventListener('dragend', (e) => {
  console.log('DragEnd has been triggered');
  e.target.className = 'imgBox';
});

for (whitebox of whiteboxes) {
  w.addEventListener('dragover', (e) => {
    console.log('Dragover');
    e.preventDefault();
  });

  w.addEventListener('dragenter', () => {
    console.log('Dragenter');
  });

  w.addEventListener('dragleave', () => {
    console.log('Dragleave');
  });

  w.addEventListener('drop', (e) => {
    console.log('Drop');
    e.target.append(imgbox);
  });
}
