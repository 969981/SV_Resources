/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f10a4; name: FUN_007f10a4
 */


void FUN_007f10a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ErrorResultVariant *this;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 local_638;
  ulong local_630;
  undefined8 local_628;
  undefined *local_620;
  undefined8 local_618;
  byte local_610;
  uint local_60c;
  undefined1 auStack_608 [1440];
  ulong local_68 [2];
  undefined4 local_58 [2];
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((int)param_2[0x14] == 0) {
    local_638._0_4_ = 0x10408;
    local_68[0] = local_68[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_638 | 4),(Result *)local_68);
    puVar6 = &local_638;
  }
  else {
    local_620 = PTR_DAT_047d1498 + 0x10;
    memset(&local_60c,0,4);
    local_618 = 0;
    local_610 = 0;
    memset(&local_60c,0,4);
    local_638._0_4_ = (uint)local_638._2_2_ << 0x10;
    local_68[0] = 0;
    FUN_007935cc(local_68);
    local_618 = 0;
    local_610 = 0;
    local_630 = local_68[0];
    local_628 = 0;
    memset(&local_60c,0,4);
    uVar4 = local_618;
    local_618 = CONCAT71(local_618._1_7_,0x40);
    uVar5 = local_618;
    local_618._6_2_ = SUB82(uVar4,6);
    local_618._0_6_ = CONCAT24(0xffff,(int)uVar5);
    local_618._0_2_ = CONCAT11(*(undefined1 *)((long)param_2 + 0x36),0x40);
    uVar2 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    if (uVar2 != 0) {
      lVar8 = param_2[8];
      uVar9 = (uint)uVar2;
      uVar7 = 0;
      if (uVar2 < 2) {
        uVar9 = 1;
      }
      do {
        if (*(long *)(lVar8 + uVar7 * 8) != 0) {
          uVar10 = uVar7 >> 5 & 0x7ffffff;
          uVar3 = 1 << (ulong)((uint)uVar7 & 0x1f);
          if ((*(uint *)((long)param_2 + uVar10 * 4 + 0xa0) & uVar3) != 0) {
            lVar1 = uVar10 * 4;
            *(uint *)(auStack_608 + lVar1 + -4) = *(uint *)(auStack_608 + lVar1 + -4) | uVar3;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar9 != uVar7);
    }
    local_610 = (**(code **)(*param_2 + 0x38))(param_2);
    local_58[0] = 0;
    FUN_007e8324(local_68,&local_620,auStack_608,local_58,0x5a0);
    uVar9 = (local_610 + 0x1f >> 3 & 0x3c) + 9;
    local_628 = CONCAT44(local_628._4_4_,uVar9);
    if (param_5 < uVar9) {
      local_68[0] = CONCAT44(local_68[0]._4_4_,0x4c0d);
      this = (ErrorResultVariant *)((ulong)local_68 | 4);
    }
    else {
      memset(local_68,0,4);
      memset(local_68,0xff,4);
      local_68[0] = local_68[0] & 0xffffffff00ffffff;
      uVar7 = (**(code **)(*param_2 + 0x50))(param_2,local_68,param_3,&local_638,0);
      if ((uVar7 & 1) == 0) {
        local_68[0] = CONCAT44(local_68[0]._4_4_,0x4c0d);
        this = (ErrorResultVariant *)((ulong)local_68 | 4);
      }
      else {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = (undefined4)local_628;
        }
        local_68[0] = 0;
        FUN_007935cc(local_68);
        this = (ErrorResultVariant *)((ulong)local_68 | 4);
        param_2[0x13] = local_68[0];
        local_68[0] = local_68[0] & 0xffffffff00000000;
      }
    }
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_58);
    puVar6 = local_68;
  }
  FUN_00cbd7c0(param_1,puVar6);
  return;
}


