/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2800; name: FUN_017f2800
 */


int FUN_017f2800(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar6 = -10;
  if (iVar3 != 0) {
    iVar6 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((uVar1 == 0xac) || (uVar1 == 0x80)) {
    iVar6 = iVar6 + -0xc;
  }
  iVar3 = iVar6;
  if (*(short *)(param_1 + 0x9e) != 0x97) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar5 & 1) != 0) goto LAB_017f2890;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3);
    iVar3 = iVar6 + -10;
    if ((uVar5 & 1) == 0) {
      iVar3 = iVar6;
    }
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0)) {
      return iVar3;
    }
    uVar1 = *(ushort *)(param_1 + 0xb6);
  }
  if (uVar1 < 0x7e) {
    if ((uVar1 == 0x1d) || (uVar1 == 0x49)) {
LAB_017f2908:
      iVar3 = iVar3 + -10;
      goto LAB_017f290c;
    }
  }
  else {
    if ((uVar1 == 0x7e) || (uVar1 == 0x9c)) {
      iVar3 = iVar3 + -0xc;
      goto LAB_017f290c;
    }
    if (uVar1 == 0x91) goto LAB_017f2908;
  }
  iVar6 = iVar3;
  if (*(char *)(param_1 + 0xb8) == '\v') {
    if (uVar1 == 0xa6) {
LAB_017f2890:
      return iVar6 + -10;
    }
  }
  else if ((uVar1 == 0xa6) && (*(char *)(param_1 + 0xb9) == '\v')) goto LAB_017f2890;
LAB_017f290c:
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  iVar6 = iVar3;
  if ((iVar4 == 1) && (iVar6 = iVar3 + -10, *(short *)(param_1 + 0xc2) != 0xa6)) {
    iVar6 = iVar3;
  }
  return iVar6;
}


