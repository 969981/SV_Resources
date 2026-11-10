/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d04c; name: FUN_0298d04c
 */


void FUN_0298d04c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 5) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)param_2 * 0x38 + 0x28;
  }
  FUN_02923358(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),lVar1,param_2);
  return;
}


