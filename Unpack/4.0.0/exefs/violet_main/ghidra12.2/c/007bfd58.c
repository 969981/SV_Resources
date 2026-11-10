/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfd58; name: FUN_007bfd58
 */


void FUN_007bfd58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_1[1];
  }
  if ((long *)param_1[1] != (long *)0x0) {
    *(long *)param_1[1] = lVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


