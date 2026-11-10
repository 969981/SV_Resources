/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fc5c8; name: FUN_028fc5c8
 */


void FUN_028fc5c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    lVar1 = lVar2 + -0x40;
    lVar2 = lVar2 + -0x80;
    FUN_028fd75c(lVar1);
    FUN_00db239c(lVar2);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


