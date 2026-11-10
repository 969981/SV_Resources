/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d5d80; name: FUN_026d5d80
 */


undefined8 FUN_026d5d80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x120) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x120) + 0x10), lVar2 == 0)) {
    return 0;
  }
  uVar1 = FUN_026d5da0(lVar2 + -0x28);
  return uVar1;
}


