/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022840c0; name: FUN_022840c0
 */


undefined8 FUN_022840c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 0;
  }
  uVar1 = FUN_00d80f14(DAT_0485a0e8,param_1 + 0x24);
  return uVar1;
}


