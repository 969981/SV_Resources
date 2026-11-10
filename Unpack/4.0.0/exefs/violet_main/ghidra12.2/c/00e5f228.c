/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5f228; name: FUN_00e5f228
 */


undefined8 FUN_00e5f228(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    return 0xfd;
  }
  uVar1 = FUN_00e5f3b4(lVar2 + -0x28);
  return uVar1;
}


