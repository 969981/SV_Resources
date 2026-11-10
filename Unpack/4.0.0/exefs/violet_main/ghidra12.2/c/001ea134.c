/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ea134; name: FUN_001ea134
 */


void FUN_001ea134(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_001ce394(param_2,3,&DAT_03c0815f,*(undefined1 *)(param_1 + lVar1));
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 2;
  } while (lVar1 != 0x10);
  return;
}


