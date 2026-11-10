/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f09dc; name: FUN_017f09dc
 */


int FUN_017f09dc(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar5 = -10;
  if (iVar2 != 0) {
    iVar5 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((uVar1 == 0xac) || (uVar1 == 0x80)) {
    iVar5 = iVar5 + -0xc;
  }
  iVar2 = iVar5;
  if (*(short *)(param_1 + 0x9e) != 0x97) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar4 & 1) != 0) goto LAB_017f0aa0;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3);
    iVar2 = iVar5 + -10;
    if ((uVar4 & 1) == 0) {
      iVar2 = iVar5;
    }
    uVar6 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar6 < 0x3d) && ((1L << ((ulong)uVar6 & 0x3f) & 0x1800000000000001U) != 0)) {
      return iVar2;
    }
    uVar1 = *(ushort *)(param_1 + 0xb6);
  }
  uVar6 = (uint)uVar1;
  if ((uVar6 - 0x1d < 0x2d) && ((1L << ((ulong)(uVar6 - 0x1d) & 0x3f) & 0x100000800001U) != 0)) {
    iVar2 = iVar2 + -10;
  }
  else if ((uVar6 == 0x7e) || (uVar6 == 0x9c)) {
    iVar2 = iVar2 + -0xc;
  }
  else if (*(char *)(param_1 + 0xb8) == '\v') {
    if (uVar6 == 0xa6) {
LAB_017f0aa0:
      return iVar2 + -10;
    }
  }
  else if ((uVar6 == 0xa6) && (*(char *)(param_1 + 0xb9) == '\v')) goto LAB_017f0aa0;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  iVar5 = iVar2;
  if ((iVar3 == 1) && (iVar5 = iVar2 + -10, *(short *)(param_1 + 0xc2) != 0xa6)) {
    iVar5 = iVar2;
  }
  return iVar5;
}


