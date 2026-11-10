/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3fc0; name: FUN_017f3fc0
 */


int FUN_017f3fc0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar5 = -10;
  if (iVar3 != 0) {
    iVar5 = 0;
  }
  if ((*(short *)(param_1 + 0xb6) == 0xac) || (*(short *)(param_1 + 0xb6) == 0x80)) {
    iVar5 = iVar5 + -0xc;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar4 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0)) {
      return iVar5;
    }
  }
  else if (*(ushort *)(param_1 + 0x9e) != 0x97) goto LAB_017f4058;
  uVar1 = *(ushort *)(param_1 + 0xb6);
  uVar2 = uVar1 - 0x1d;
  if ((0x2c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x100000800001U) == 0)) {
    if ((uVar1 == 0x7e) || (uVar1 == 0x9c)) {
      return iVar5 + -0xc;
    }
    if ((*(char *)(param_1 + 0xb8) != '\v') && (*(char *)(param_1 + 0xb9) != '\v')) {
      return iVar5;
    }
    if (uVar1 != 0xa6) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if (iVar3 != 1) {
        return iVar5;
      }
      if (*(short *)(param_1 + 0xc2) == 0xa6) {
        return iVar5 + -10;
      }
      return iVar5;
    }
  }
LAB_017f4058:
  return iVar5 + -10;
}


