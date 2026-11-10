/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9004; name: FUN_001c9004
 */


undefined8 FUN_001c9004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    uVar1 = FUN_001cb3a4(2,*(long *)(param_1 + 0x20) + 4,param_2,param_3);
    return uVar1;
  }
  return 0;
}


