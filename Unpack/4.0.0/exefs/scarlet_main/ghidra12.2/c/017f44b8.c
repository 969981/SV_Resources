/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f44b8; name: FUN_017f44b8
 */


int FUN_017f44b8(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = -0xc;
  if ((*(short *)(param_1 + 0xb6) == 0x80) || (*(short *)(param_1 + 0xb6) == 0xac))
  goto LAB_017f44e0;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((iVar3 == 0) ||
     (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 == 0)) {
    iVar3 = -10;
    goto LAB_017f44e0;
  }
  uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((0x3c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) == 0)) {
    uVar1 = *(ushort *)(param_1 + 0xb6);
    iVar3 = -10;
    if (0x7d < uVar1) {
      if (uVar1 != 0x9c) {
        if (uVar1 == 0x91) goto LAB_017f44e0;
        if (uVar1 != 0x7e) goto LAB_017f45d0;
      }
      iVar3 = -0xc;
      goto LAB_017f44e0;
    }
    uVar2 = uVar1 - 0x1d;
    if ((uVar2 < 0x2d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x100000800001U) != 0)) goto LAB_017f44e0;
LAB_017f45d0:
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
        goto LAB_017f44e0;
      }
    }
  }
  iVar3 = 0;
LAB_017f44e0:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar4 & 1) != 0) {
    if (*(short *)(param_1 + 0x9e) != 0x97) {
      iVar3 = iVar3 + -10;
    }
  }
  return iVar3;
}


