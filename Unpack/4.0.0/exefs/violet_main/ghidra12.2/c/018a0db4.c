/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a0db4; name: FUN_018a0db4
 */


undefined8 FUN_018a0db4(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x704) == '\0') ||
     (uVar2 = FUN_018a0dec(param_2), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


