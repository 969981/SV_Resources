/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142fef4; name: FUN_0142fef4
 */


ulong FUN_0142fef4(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_4 & 0xff) == 0x12) {
    uVar9 = 7;
  }
  else {
    uVar3 = (**(code **)(*param_3 + 0x2f8))(param_3);
    uVar8 = uVar3 & 0x1f;
    uVar4 = FUN_01430100(param_1,param_2,param_3,param_4,uVar8,param_5 & 1);
    uVar9 = uVar4 & 0xffffffff;
    if ((uVar3 & 0x7c00) != 0x4800 || ((uVar3 ^ uVar3 >> 5) & 0x1f) != 0) {
      uVar6 = uVar3 >> 5 & 0x1f;
      if (uVar6 != 0x12 && uVar6 != uVar8) {
        bVar2 = FUN_01430100(param_1,param_2,param_3,param_4,uVar6,param_5 & 1);
        uVar7 = (uint)((&DAT_03d629b0)[bVar2] * (&DAT_03d629b0)[uVar4 & 0xff]) >> 6;
        if (0xfff < uVar7) {
          uVar7 = 0x1000;
        }
        uVar1 = 0xffffffff;
        if ((uVar7 == 0 && (uVar4 & 0xff) != 0) && bVar2 != 0) {
          uVar7 = 1;
        }
        do {
          uVar5 = uVar1;
          if (uVar5 == 0x1f) {
            uVar9 = 0;
            goto LAB_01430040;
          }
          uVar1 = uVar5 + 1;
        } while ((uVar7 >> (ulong)(uVar1 & 0x1f) & 1) == 0);
        if (uVar1 < 0xc) {
          uVar9 = (ulong)(uVar5 + 2);
        }
        else {
          uVar9 = 0xd;
        }
      }
LAB_01430040:
      uVar3 = uVar3 >> 10 & 0x1f;
      if (((uVar3 != uVar6) && (uVar3 != 0x12)) && (uVar3 != uVar8)) {
        bVar2 = FUN_01430100(param_1,param_2,param_3,param_4,uVar3,param_5 & 1);
        uVar8 = (uint)((&DAT_03d629b0)[bVar2] * (&DAT_03d629b0)[uVar9 & 0xff]) >> 6;
        if (0xfff < uVar8) {
          uVar8 = 0x1000;
        }
        uVar3 = 0xffffffff;
        if ((uVar8 == 0 && (uVar9 & 0xff) != 0) && bVar2 != 0) {
          uVar8 = 1;
        }
        do {
          uVar6 = uVar3;
          if (uVar6 == 0x1f) {
            return 0;
          }
          uVar3 = uVar6 + 1;
        } while ((uVar8 >> (ulong)(uVar3 & 0x1f) & 1) == 0);
        if (uVar3 < 0xc) {
          uVar9 = (ulong)(uVar6 + 2);
        }
        else {
          uVar9 = 0xd;
        }
      }
    }
  }
  return uVar9;
}


