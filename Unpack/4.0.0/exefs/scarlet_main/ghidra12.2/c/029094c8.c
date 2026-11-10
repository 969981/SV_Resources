/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029094c8; name: FUN_029094c8
 */


int FUN_029094c8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x107);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55),
     (uVar3 & 1) == 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar3 & 1) == 0) {
      if (iVar1 < 0x46) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        return -(uVar2 & 1);
      }
    }
    else if (0x14 < iVar1) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      iVar1 = 3;
      if ((uVar3 & 1) == 0) {
        iVar1 = 0;
      }
      return iVar1;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}


