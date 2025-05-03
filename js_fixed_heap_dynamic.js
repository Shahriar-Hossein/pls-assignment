function fixedHeapDynamic() {
    // although declaring with fixed length,
    // js still allows resizing.
    const arr = new Array(5); 
    for (let i = 0; i < 5; i++) arr[i] = i;
    console.log(arr);
}

fixedHeapDynamic();