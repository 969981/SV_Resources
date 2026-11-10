/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f3e88; name: FUN_017f3e88
 */


int FUN_017f3e88(long param_1)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((uint)*(ushort *)(param_1 + 0x9e) == (uint)*(ushort *)(param_1 + 0xb6)) {
    return -10;
  }
  uVar4 = *(ushort *)(param_1 + 0x9e) - 0x68;
  iVar6 = -10;
  if (*(ushort *)(param_1 + 0xb6) != 0x9c) {
    iVar6 = 0;
  }
  iVar1 = 0;
  if (0x3c < uVar4 || (1L << ((ulong)uVar4 & 0x3f) & 0x1800000000000001U) == 0) {
    iVar1 = iVar6;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((((uVar5 & 1) != 0) && (*(short *)(param_1 + 0x9e) != 0x97)) ||
      (sVar2 = *(short *)(param_1 + 0xb6), sVar2 == 0xa1)) || (sVar2 == 0x24)) goto LAB_017f3f20;
  uVar3 = *(ushort *)(param_1 + 0xb4);
  if (uVar3 < 0x1e6) {
    if (uVar3 < 0x124) {
      if (uVar3 == 0x84) goto LAB_017f3f20;
      if (uVar3 == 0x121) goto LAB_017f3fb8;
    }
    else if (((uVar3 == 0x124) || (uVar3 == 0x15f)) || (uVar3 == 0x1a5)) {
LAB_017f3f20:
      return iVar1 + -10;
    }
  }
  else if (uVar3 < 0x237) {
    if (uVar3 == 0x1e6) goto LAB_017f3fb8;
    if (uVar3 == 0x1ed) goto LAB_017f3f20;
  }
  else {
    if (uVar3 == 0x237) goto LAB_017f3fb8;
    if ((uVar3 == 0x2a9) || (uVar3 == 0x23b)) goto LAB_017f3f20;
  }
  if (((sVar2 != 0x36) && (sVar2 != 0x81)) && (sVar2 != 0x70)) {
    return iVar1;
  }
LAB_017f3fb8:
  return iVar1 + -0xc;
}


