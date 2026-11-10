/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290bfe8; name: FUN_0290bfe8
 */


uint FUN_0290bfe8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x280))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 == 3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


