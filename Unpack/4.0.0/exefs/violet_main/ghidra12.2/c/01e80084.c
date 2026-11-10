/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e80084; name: thunk_FUN_01e80088
 */


void thunk_FUN_01e80088(long *param_1)

{
  long lVar1;
  undefined1 auStack_8 [8];
  
  lVar1 = *param_1;
  FUN_01e7ed84(auStack_8,param_1 + 1);
  FUN_01e7ee44(lVar1 + 0x50,auStack_8);
  FUN_01e7ee80(auStack_8);
  return;
}


