/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2078; name: FUN_017f2078
 */


int FUN_017f2078(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = -10;
  if (iVar3 != 0) {
    iVar4 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((uVar1 == 0x80) || (uVar1 == 0xac)) {
    iVar4 = iVar4 + -8;
  }
  iVar3 = iVar4;
  if (*(short *)(param_1 + 0x9e) != 0x97) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar5 & 1) != 0) goto LAB_017f2198;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3);
    iVar3 = iVar4 + -10;
    if ((uVar5 & 1) == 0) {
      iVar3 = iVar4;
    }
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0)) {
      return iVar3;
    }
    uVar1 = *(ushort *)(param_1 + 0xb6);
  }
  if (uVar1 < 0x49) {
    if (uVar1 == 0x1d) goto LAB_017f2198;
  }
  else {
    if (uVar1 == 0x49) goto LAB_017f2198;
    if ((uVar1 == 0x7e) || (uVar1 == 0x9c)) {
      return iVar3 + -0xc;
    }
  }
  if ((*(char *)(param_1 + 0xb8) != '\v') && (*(char *)(param_1 + 0xb9) != '\v')) {
    return iVar3;
  }
  if (uVar1 != 0xa6) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
    if (iVar4 != 1) {
      return iVar3;
    }
    if (*(short *)(param_1 + 0xc2) == 0xa6) {
      return iVar3 + -10;
    }
    return iVar3;
  }
LAB_017f2198:
  return iVar3 + -10;
}


