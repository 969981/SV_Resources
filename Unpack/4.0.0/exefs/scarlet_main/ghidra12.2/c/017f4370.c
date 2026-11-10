/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f4370; name: FUN_017f4370
 */


int FUN_017f4370(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((iVar3 == 0) ||
      (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 == 0))
     || (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 == 0)
     ) {
LAB_017f4470:
    iVar3 = -10;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((0x3c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) == 0)) {
      uVar1 = *(ushort *)(param_1 + 0xb6);
      if (uVar1 < 0x7e) {
        if ((uVar1 == 0x1d) || (uVar1 == 0x49)) goto LAB_017f4470;
      }
      else {
        if (uVar1 == 0x7e) {
          iVar3 = -0xc;
          goto LAB_017f4474;
        }
        if (uVar1 == 0x9c) goto LAB_017f4470;
      }
      if ((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) {
        if (uVar1 == 0xa6) {
          return -10;
        }
        iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
        if (iVar3 == 1) {
          iVar3 = -10;
          if (*(short *)(param_1 + 0xc2) != 0xa6) {
            iVar3 = 0;
          }
          goto LAB_017f4474;
        }
      }
    }
    iVar3 = 0;
  }
LAB_017f4474:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar4 & 1) != 0) {
    if (*(short *)(param_1 + 0x9e) != 0x97) {
      iVar3 = iVar3 + -10;
    }
  }
  return iVar3;
}


