/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290db94; name: FUN_0290db94
 */


void FUN_0290db94(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  uVar1 = 0x50e0a09 >> (ulong)((iVar2 - 1U & 3) << 3);
  if (3 < (iVar2 - 1U & 0xff)) {
    uVar1 = 0;
  }
  FUN_02914fb8(param_1,uVar1);
  return;
}


