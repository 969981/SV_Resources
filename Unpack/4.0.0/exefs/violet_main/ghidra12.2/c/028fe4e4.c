/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fe4e4; name: FUN_028fe4e4
 */


long FUN_028fe4e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_028fe6a0(param_1 + 0x18,uVar1);
    lVar2 = uVar1 + 0x40;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    FUN_028fe7a0(param_1);
    lVar2 = *(long *)(param_1 + 8);
  }
  return lVar2 + -0x40;
}


