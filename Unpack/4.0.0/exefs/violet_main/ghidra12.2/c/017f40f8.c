/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f40f8; name: FUN_017f40f8
 */


int FUN_017f40f8(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if (*(short *)(param_1 + 0xb6) == 0xf) {
    return -10;
  }
  uVar3 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((0x3c < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x1800000000000001U) == 0) &&
     (*(short *)(param_1 + 0xb6) == 0x9c)) {
    return -0xc;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar5 & 1) != 0) && (*(short *)(param_1 + 0x9e) != 0x97)) {
    return -10;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((uVar1 == 0xb0) || (uVar1 == 0x79)) {
    iVar4 = -10;
  }
  else {
    iVar4 = 0;
  }
  uVar2 = *(ushort *)(param_1 + 0xb4);
  if (uVar2 < 0x1ed) {
    if (uVar2 == 0x84) goto LAB_017f41f8;
    if ((uVar2 == 0x121) || (uVar2 == 0x1e6)) goto LAB_017f41c8;
  }
  else if (uVar2 < 0x23b) {
    if (uVar2 == 0x1ed) {
LAB_017f41f8:
      return iVar4 + -10;
    }
    if (uVar2 == 0x237) goto LAB_017f41c8;
  }
  else if ((uVar2 == 0x2a9) || (uVar2 == 0x23b)) goto LAB_017f41f8;
  uVar3 = uVar1 - 0x70;
  if (((0x2d < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x200000020001U) == 0)) && (uVar1 != 0x36))
  {
    return iVar4;
  }
LAB_017f41c8:
  return iVar4 + -0xc;
}


