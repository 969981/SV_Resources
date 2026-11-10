/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e05830; name: FUN_02e05830
 */


int FUN_02e05830(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((0x46 < iVar1) &&
     ((((((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x15b),
          (uVar4 & 1) != 0 ||
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x153),
          (uVar4 & 1) != 0)) ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x85),
         (uVar4 & 1) != 0)) ||
        ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x14e),
         (uVar4 & 1) != 0 ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xe),
         (uVar4 & 1) != 0)))) ||
       ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x6b),
        (uVar4 & 1) != 0 ||
        ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x70),
         (uVar4 & 1) != 0 ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x97),
         (uVar4 & 1) != 0)))))) ||
      (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1a1),
      (uVar4 & 1) != 0)))) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar2 < iVar1) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
      iVar1 = 3;
      if ((uVar4 & 1) == 0) {
        iVar1 = 0;
      }
      goto LAB_02e059b4;
    }
  }
  iVar1 = 0;
LAB_02e059b4:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x1f);
  return iVar1 + (uVar3 & 1);
}


