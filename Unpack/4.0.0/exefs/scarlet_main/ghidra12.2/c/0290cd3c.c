/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290cd3c; name: FUN_0290cd3c
 */


uint FUN_0290cd3c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02915dc0();
  if (iVar1 == 1) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


