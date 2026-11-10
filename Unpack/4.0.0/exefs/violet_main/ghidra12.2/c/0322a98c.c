/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322a98c; name: FUN_0322a98c
 */


long FUN_0322a98c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  param_1[5] = param_1[5] + (long)iVar1;
  if ((param_3 != 0) && (iVar1 == 0)) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return (long)iVar1;
}


