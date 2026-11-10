/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fbeb8; name: FUN_028fbeb8
 */


long FUN_028fbeb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_028fc3d8(param_1 + 0x18,uVar1);
    lVar2 = uVar1 + 0x80;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    FUN_028fc4d8(param_1,param_2);
    lVar2 = *(long *)(param_1 + 8);
  }
  return lVar2 + -0x80;
}


