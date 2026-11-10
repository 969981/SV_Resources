/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2b98; name: FUN_017f2b98
 */


int FUN_017f2b98(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar3 = -10;
  if (iVar2 != 0) {
    iVar3 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if (uVar1 == 99) {
LAB_017f2cc0:
    iVar3 = iVar3 + -10;
  }
  else if ((uVar1 == 0xac) || (uVar1 == 0x80)) {
    iVar3 = iVar3 + -8;
  }
  else if (*(short *)(param_1 + 0x9e) == 99) goto LAB_017f2cc0;
  iVar2 = iVar3;
  if (*(short *)(param_1 + 0x9e) != 0x97) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar4 & 1) != 0) goto LAB_017f2c1c;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3);
    iVar2 = iVar3 + -10;
    if ((uVar4 & 1) == 0) {
      iVar2 = iVar3;
    }
    uVar5 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar5 < 0x3d) && ((1L << ((ulong)uVar5 & 0x3f) & 0x1800000000000001U) != 0)) {
      return iVar2;
    }
    uVar1 = *(ushort *)(param_1 + 0xb6);
  }
  uVar5 = (uint)uVar1;
  iVar3 = iVar2;
  if ((0x2c < uVar5 - 0x1d) || ((1L << ((ulong)(uVar5 - 0x1d) & 0x3f) & 0x100000400001U) == 0)) {
    if ((uVar5 == 0x7e) || (uVar5 == 0x9c)) {
      return iVar2 + -0xc;
    }
    if ((*(char *)(param_1 + 0xb8) != '\v') && (*(char *)(param_1 + 0xb9) != '\v')) {
      return iVar2;
    }
    if (uVar5 != 0xa6) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if (iVar3 != 1) {
        return iVar2;
      }
      if (*(short *)(param_1 + 0xc2) == 0xa6) {
        return iVar2 + -10;
      }
      return iVar2;
    }
  }
LAB_017f2c1c:
  return iVar3 + -10;
}


