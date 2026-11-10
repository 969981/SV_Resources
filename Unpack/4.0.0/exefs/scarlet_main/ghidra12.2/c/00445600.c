/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445600; name: FUN_00445600
 */


bool FUN_00445600(long *param_1,void *param_2,uint param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  byte local_f0;
  byte local_ef;
  byte local_ee;
  byte local_ed;
  byte local_ec;
  byte local_eb;
  byte local_ea;
  byte local_e9;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  byte local_e5;
  byte local_e4;
  byte local_e3;
  byte local_e2;
  byte local_e1;
  uint local_d4;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  lVar4 = *param_1;
  if (param_4 == 0) {
    if (lVar4 == 0) {
      return false;
    }
  }
  else {
    if (lVar4 != param_4) {
      if (param_2 == (void *)0x0) {
        return false;
      }
      if ((int)param_3 < 0) {
        return false;
      }
    }
    *param_1 = param_4;
    lVar4 = param_4;
  }
  uVar2 = FUN_0043b760(lVar4);
  if ((uVar2 >> 1 & 1) != 0) {
    return false;
  }
  if (param_2 == (void *)0x0) {
    bVar5 = true;
LAB_004456c4:
    iVar3 = FUN_0042bfb0(param_1[1],param_1[2]);
    bVar1 = iVar3 != 0;
    if (bVar5) {
      return bVar1;
    }
  }
  else {
    iVar3 = FUN_0043b700(lVar4);
    if (0x90 < iVar3) {
      return false;
    }
    if (iVar3 < (int)param_3) {
      iVar3 = FUN_0042bc40(param_1[1],lVar4,param_5);
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = FUN_0042bd60(param_1[1],param_2,(long)(int)param_3);
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = FUN_0042be20(param_1[1],&local_170,&local_d4);
      if (iVar3 == 0) {
        return false;
      }
    }
    else {
      if ((int)param_3 < 0) {
        return false;
      }
      memcpy(&local_170,param_2,(ulong)param_3);
      local_d4 = param_3;
    }
    if (local_d4 != 0x90) {
      memset((void *)((long)&local_170 + (ulong)local_d4),0,(ulong)(0x90 - local_d4));
    }
    local_50 = local_f0 ^ 0x36;
    local_4f = local_ef ^ 0x36;
    local_4e = local_ee ^ 0x36;
    local_4d = local_ed ^ 0x36;
    local_4c = local_ec ^ 0x36;
    local_4b = local_eb ^ 0x36;
    local_4a = local_ea ^ 0x36;
    local_49 = local_e9 ^ 0x36;
    local_d0 = local_170 ^ 0x3636363636363636;
    uStack_c8 = uStack_168 ^ 0x3636363636363636;
    uStack_c0 = uStack_160 ^ 0x3636363636363636;
    uStack_b8 = uStack_158 ^ 0x3636363636363636;
    local_b0 = local_150 ^ 0x3636363636363636;
    uStack_a8 = uStack_148 ^ 0x3636363636363636;
    uStack_a0 = uStack_140 ^ 0x3636363636363636;
    uStack_98 = uStack_138 ^ 0x3636363636363636;
    local_48 = local_e8 ^ 0x36;
    local_47 = local_e7 ^ 0x36;
    local_46 = local_e6 ^ 0x36;
    local_45 = local_e5 ^ 0x36;
    local_90 = local_130 ^ 0x3636363636363636;
    uStack_88 = uStack_128 ^ 0x3636363636363636;
    uStack_80 = uStack_120 ^ 0x3636363636363636;
    uStack_78 = uStack_118 ^ 0x3636363636363636;
    local_44 = local_e4 ^ 0x36;
    local_70 = local_110 ^ 0x3636363636363636;
    uStack_68 = uStack_108 ^ 0x3636363636363636;
    local_43 = local_e3 ^ 0x36;
    local_42 = local_e2 ^ 0x36;
    local_41 = local_e1 ^ 0x36;
    uStack_58 = uStack_f8 ^ 0x3636363636363636;
    uStack_60 = uStack_100 ^ 0x3636363636363636;
    iVar3 = FUN_0042bc40(param_1[2],lVar4,param_5);
    if (iVar3 != 0) {
      lVar6 = param_1[2];
      iVar3 = FUN_0043b700(lVar4);
      iVar3 = FUN_0042bd60(lVar6,&local_d0,(long)iVar3);
      if (iVar3 != 0) {
        local_50 = local_f0 ^ 0x5c;
        local_4f = local_ef ^ 0x5c;
        local_4e = local_ee ^ 0x5c;
        local_4d = local_ed ^ 0x5c;
        local_4c = local_ec ^ 0x5c;
        local_4b = local_eb ^ 0x5c;
        local_4a = local_ea ^ 0x5c;
        local_49 = local_e9 ^ 0x5c;
        local_d0 = local_170 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_c8 = uStack_168 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_c0 = uStack_160 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_b8 = uStack_158 ^ 0x5c5c5c5c5c5c5c5c;
        local_b0 = local_150 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_a8 = uStack_148 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_a0 = uStack_140 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_98 = uStack_138 ^ 0x5c5c5c5c5c5c5c5c;
        local_48 = local_e8 ^ 0x5c;
        local_47 = local_e7 ^ 0x5c;
        local_46 = local_e6 ^ 0x5c;
        local_45 = local_e5 ^ 0x5c;
        local_90 = local_130 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_88 = uStack_128 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_80 = uStack_120 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_78 = uStack_118 ^ 0x5c5c5c5c5c5c5c5c;
        local_44 = local_e4 ^ 0x5c;
        local_70 = local_110 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_68 = uStack_108 ^ 0x5c5c5c5c5c5c5c5c;
        local_43 = local_e3 ^ 0x5c;
        local_42 = local_e2 ^ 0x5c;
        local_41 = local_e1 ^ 0x5c;
        uStack_58 = uStack_f8 ^ 0x5c5c5c5c5c5c5c5c;
        uStack_60 = uStack_100 ^ 0x5c5c5c5c5c5c5c5c;
        iVar3 = FUN_0042bc40(param_1[3],lVar4,param_5);
        if (iVar3 != 0) {
          lVar6 = param_1[3];
          iVar3 = FUN_0043b700(lVar4);
          iVar3 = FUN_0042bd60(lVar6,&local_d0,(long)iVar3);
          bVar5 = false;
          if (iVar3 != 0) goto LAB_004456c4;
        }
      }
    }
    bVar1 = false;
  }
  FUN_00453300(&local_170,0x90);
  FUN_00453300(&local_d0,0x90);
  return bVar1;
}


