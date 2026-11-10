/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291951c; name: FUN_0291951c
 */


int FUN_0291951c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),4);
  if ((uVar2 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar3 = 2;
    if ((uVar2 & 1) == 0) {
      iVar3 = 0;
    }
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),4);
  if ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar3 = iVar3 - (uVar1 & 1);
  }
  return iVar3;
}


