/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0954c; name: FUN_00c0954c
 */


ulong FUN_00c0954c(ulong *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  pbVar2 = (byte *)*param_1;
  if (((int)(byte *)param_1[1] - (int)pbVar2 < 10) && ((byte *)param_1[1] <= pbVar2)) {
    auVar9 = FUN_00c09268();
    uVar4 = auVar9._0_4_;
    if ((auVar9._8_8_ & 1) == 0 || auVar9._0_8_ >> 0x1f != 0) {
      uVar4 = 0xffffffff;
    }
    uVar5 = (ulong)uVar4;
    goto LAB_00c096c4;
  }
  pbVar7 = pbVar2 + 1;
  bVar3 = *pbVar2;
  uVar4 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar4 = ((uint)bVar3 + (uint)pbVar2[1] * 0x80) - 0x80;
    if (-1 < (char)pbVar2[1]) {
      uVar6 = 0;
      uVar8 = 0;
      pbVar7 = pbVar2 + 2;
      goto LAB_00c096a0;
    }
    uVar4 = (uVar4 + (uint)pbVar2[2] * 0x4000) - 0x4000;
    if (-1 < (char)pbVar2[2]) {
      uVar6 = 0;
      uVar8 = 0;
      pbVar7 = pbVar2 + 3;
      goto LAB_00c096a0;
    }
    iVar1 = uVar4 + (uint)pbVar2[3] * 0x200000;
    uVar4 = iVar1 - 0x200000;
    if (-1 < (char)pbVar2[3]) {
      uVar6 = 0;
      uVar8 = 0;
      pbVar7 = pbVar2 + 4;
      goto LAB_00c096a0;
    }
    uVar4 = iVar1 + 0xefe00000;
    bVar3 = pbVar2[4];
    uVar6 = (uint)bVar3;
    if (-1 < (char)bVar3) {
      uVar8 = 0;
      pbVar7 = pbVar2 + 5;
      goto LAB_00c096a0;
    }
    uVar6 = ((uint)bVar3 + (uint)pbVar2[5] * 0x80) - 0x80;
    if (-1 < (char)pbVar2[5]) {
      uVar8 = 0;
      pbVar7 = pbVar2 + 6;
      goto LAB_00c096a0;
    }
    uVar6 = (uVar6 + (uint)pbVar2[6] * 0x4000) - 0x4000;
    if (-1 < (char)pbVar2[6]) {
      uVar8 = 0;
      pbVar7 = pbVar2 + 7;
      goto LAB_00c096a0;
    }
    iVar1 = uVar6 + (uint)pbVar2[7] * 0x200000;
    uVar6 = iVar1 - 0x200000;
    if (-1 < (char)pbVar2[7]) {
      uVar8 = 0;
      pbVar7 = pbVar2 + 8;
      goto LAB_00c096a0;
    }
    bVar3 = pbVar2[8];
    uVar8 = (ulong)bVar3;
    uVar6 = iVar1 + 0xefe00000;
    if (-1 < (char)bVar3) {
      pbVar7 = pbVar2 + 9;
      goto LAB_00c096a0;
    }
    if (-1 < (char)pbVar2[9]) {
      pbVar7 = pbVar2 + 10;
      uVar8 = (ulong)(((uint)bVar3 + (uint)pbVar2[9] * 0x80) - 0x80);
      goto LAB_00c096a0;
    }
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
LAB_00c096a0:
    uVar5 = (ulong)uVar4 | (ulong)uVar6 << 0x1c;
    if ((uVar5 | uVar8 << 0x38) >> 0x1f == 0) {
      *param_1 = (ulong)pbVar7;
      goto LAB_00c096c4;
    }
  }
  uVar5 = 0xffffffff;
LAB_00c096c4:
  return uVar5 & 0xffffffff;
}


