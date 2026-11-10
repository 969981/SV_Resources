/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


