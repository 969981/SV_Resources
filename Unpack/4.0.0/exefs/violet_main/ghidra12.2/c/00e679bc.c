/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e679bc; name: FUN_00e679bc
 */


undefined8 FUN_00e679bc(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*(long *)(param_1 + 0x70) + 0x19) != '\0') && ((param_2 & 1) != 0)) {
    FUN_00e679f0(*(long *)(param_1 + 0x70));
    uVar1 = 1;
  }
  return uVar1;
}


