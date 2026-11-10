/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005169b0; name: FUN_005169b0
 */


byte * FUN_005169b0(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 extraout_x1;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long *local_58;
  long lStack_50;
  undefined8 local_48;
  
  lVar2 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  if (*(char *)(*(long *)(lVar2 + 0x20) + 0x48) == '\0') {
    do {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar7 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar7._0_8_;
        if ((auVar7._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar3 = param_2 + 1;
      bVar1 = *param_2;
      uVar6 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar6 = (ulong)(((uint)bVar1 + (uint)*pbVar3 * 0x80) - 0x80);
        if (-1 < (char)*pbVar3) {
          pbVar3 = param_2 + 2;
          goto LAB_00516a78;
        }
        auVar7 = FUN_0052e560(param_2,uVar6);
        pbVar3 = auVar7._0_8_;
        if (pbVar3 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (auVar7._8_4_ == 0) {
          uVar5 = 0;
          goto LAB_00516b30;
        }
      }
      else {
LAB_00516a78:
        auVar7._8_8_ = uVar6;
        auVar7._0_8_ = pbVar3;
        uVar5 = 0;
        if ((int)uVar6 == 0) goto LAB_00516b30;
      }
      pbVar3 = auVar7._0_8_;
      uVar5 = auVar7._8_4_;
      if ((uVar5 & 7) == 4) {
LAB_00516b30:
        *(uint *)(param_3 + 10) = uVar5 - 1;
        return pbVar3;
      }
      uVar5 = uVar5 >> 3;
      lVar4 = FUN_004a5180(lVar2,uVar5);
      if (lVar4 == 0) {
        lVar4 = FUN_004a5c48(lVar2,uVar5);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else if (param_3[0xc] == 0) {
          lVar4 = FUN_004f8e64(extraout_x1,uVar5);
        }
        else {
          lVar4 = FUN_004a49dc(param_3[0xc],lVar2,uVar5);
        }
      }
      param_2 = (byte *)FUN_00516cf8(param_1,pbVar3,param_3,auVar7._8_8_ & 0xffffffff,extraout_x1,
                                     lVar4);
    } while (param_2 != (byte *)0x0);
    pbVar3 = (byte *)0x0;
  }
  else {
    local_58 = param_1;
    lStack_50 = lVar2;
    local_48 = extraout_x1;
    pbVar3 = (byte *)FUN_00516b5c(&local_58,param_2,param_3);
  }
  return pbVar3;
}


