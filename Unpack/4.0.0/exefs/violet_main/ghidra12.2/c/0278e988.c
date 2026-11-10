/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278e988; name: FUN_0278e988
 */


uint FUN_0278e988(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  return iVar1 - 0x28U & ((int)(iVar1 - 0x28U) >> 0x1f ^ 0xffffffffU);
}


