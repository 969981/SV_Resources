/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fd258; name: FUN_004fd258
 */


undefined8 FUN_004fd258(byte *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  bVar1 = *pbVar6;
  if (bVar1 == 0x30) {
    if ((pbVar6[1] | 0x20) == 0x78) {
      pbVar6 = pbVar6 + 2;
      bVar1 = *pbVar6;
      uVar4 = 0x10;
      goto joined_r0x004fd298;
    }
    uVar5 = 0x30;
    uVar4 = 8;
  }
  else {
    uVar4 = 10;
joined_r0x004fd298:
    uVar5 = (uint)bVar1;
    if (bVar1 == 0) {
      uVar8 = 0;
      goto LAB_004fd31c;
    }
  }
  uVar8 = 0;
  do {
    pbVar6 = pbVar6 + 1;
    uVar2 = uVar5 - 0x37;
    if (0x19 < uVar5 - 0x41) {
      uVar2 = 0xffffffff;
    }
    if (uVar5 - 0x61 < 0x1a) {
      uVar2 = uVar5 - 0x57;
    }
    if ((uVar5 - 0x30 & 0xff) < 10) {
      uVar2 = uVar5 - 0x30;
    }
    if (((uint)uVar4 <= uVar2) || (uVar7 = (ulong)uVar2, param_2 < uVar7)) {
      return 0;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (param_2 - uVar7) / uVar4;
    }
    if (uVar3 < uVar8) {
      return 0;
    }
    uVar8 = uVar7 + uVar8 * uVar4;
    uVar5 = (uint)*pbVar6;
  } while (uVar5 != 0);
LAB_004fd31c:
  *param_3 = uVar8;
  return 1;
}


