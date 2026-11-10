/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e71950; name: FUN_01e71950
 */


bool FUN_01e71950(long param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  void *__src;
  undefined1 auStack_2a00 [10686];
  undefined2 uStack_42;
  
  __src = *(void **)(param_1 + 0x40);
  if (__src == (void *)0x0) {
    bVar2 = false;
  }
  else {
    sVar1 = *(short *)((long)__src + 0x29be);
    memcpy(auStack_2a00,__src,0x29c0);
    uStack_42 = 0;
    sVar3 = FUN_01e719d0(0xffff,auStack_2a00,0x29c0);
    bVar2 = sVar1 == sVar3;
  }
  return bVar2;
}


