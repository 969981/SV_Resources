/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc51c; name: FUN_01dcc51c
 */


void FUN_01dcc51c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00e965dc(lVar1,0);
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[7] = 1;
  }
  return;
}


