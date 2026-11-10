/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d04b10; name: FUN_00d04b10
 */


undefined1  [16]
FUN_00d04b10(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long *param_6,
            long param_7)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *local_50;
  long *local_48;
  
  auVar14._8_8_ = param_4;
  auVar14._0_8_ = param_3;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  local_48 = param_3;
  if (param_5 == 2) {
    lVar9 = *param_2;
    *param_2 = *param_4;
    *param_4 = lVar9;
  }
  else if (param_5 == 3) {
    local_50 = param_1;
    plVar3 = param_2 + 1;
    if ((long)plVar3 - *param_1 == 0x1000) {
      local_50 = param_1 + 1;
      plVar3 = (long *)param_1[1];
    }
    lVar9 = *plVar3;
    if (((*(long *)(lVar9 + 0x10) == 0) || (*(long *)(lVar9 + 0x40) != *(long *)(lVar9 + 0x10))) &&
       (*(long *)(lVar9 + 0x18) != 0)) {
      *plVar3 = *param_4;
      pplVar8 = &local_50;
      *param_4 = lVar9;
      param_4 = plVar3;
    }
    else {
      lVar10 = *param_2;
      *param_2 = lVar9;
      pplVar8 = &local_48;
      *plVar3 = lVar10;
      param_2 = plVar3;
    }
    lVar9 = *param_2;
    *param_2 = *param_4;
    *param_4 = lVar9;
    auVar14._8_8_ = param_4;
    auVar14._0_8_ = *pplVar8;
  }
  else if (param_7 < param_5) {
    lVar9 = param_5;
    if (param_5 < 0) {
      lVar9 = param_5 + 1;
    }
    lVar9 = lVar9 >> 1;
    plVar4 = param_1;
    plVar3 = param_2;
    if (2 < param_5 + 1U) {
      uVar1 = lVar9 + ((long)param_2 - *param_1 >> 3);
      if ((long)uVar1 < 1) {
        uVar5 = 0x1ff - uVar1;
        uVar1 = 0x3fe - uVar1;
        if (-1 < (long)uVar5) {
          uVar1 = uVar5;
        }
        plVar4 = param_1 + -((long)uVar1 >> 9);
        plVar3 = (long *)(*plVar4 + ((uVar1 & 0x1ffffffffffffe00) - uVar5) * 8 + 0xff8);
      }
      else {
        plVar4 = (long *)((long)param_1 + (uVar1 >> 6 & 0x3fffffffffffff8));
        plVar3 = (long *)(*plVar4 + (uVar1 & 0x1ff) * 8);
      }
    }
    plVar6 = plVar3;
    lVar10 = lVar9;
    plVar7 = plVar4;
    while( true ) {
      if ((long *)*plVar7 == plVar6) {
        plVar7 = plVar7 + -1;
        plVar6 = (long *)(*plVar7 + 0x1000);
      }
      plVar6 = plVar6 + -1;
      lVar11 = *plVar6;
      if (((*(long *)(lVar11 + 0x10) != 0) && (*(long *)(lVar11 + 0x40) == *(long *)(lVar11 + 0x10))
          ) || (*(long *)(lVar11 + 0x18) == 0)) break;
      if (plVar6 == param_2) goto LAB_00d04d60;
      lVar10 = lVar10 + -1;
    }
    auVar12 = FUN_00d04b10(param_1,param_2,plVar7,plVar6,lVar10);
LAB_00d04d60:
    plVar6 = param_4 + 1;
    if ((long)plVar6 - *param_3 == 0x1000) {
      plVar7 = param_3 + 1;
      plVar6 = (long *)*plVar7;
    }
    else {
      plVar7 = param_3;
    }
    auVar13._8_8_ = plVar6;
    auVar13._0_8_ = plVar7;
    param_5 = param_5 - lVar9;
    plVar7 = plVar4;
    plVar6 = plVar3;
    while( true ) {
      lVar9 = *plVar6;
      if (((*(long *)(lVar9 + 0x10) == 0) || (*(long *)(lVar9 + 0x40) != *(long *)(lVar9 + 0x10)))
         && (*(long *)(lVar9 + 0x18) != 0)) break;
      plVar6 = plVar6 + 1;
      if ((long)plVar6 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        plVar6 = (long *)*plVar7;
      }
      if (plVar6 == param_4) goto LAB_00d04dfc;
      param_5 = param_5 + -1;
    }
    auVar13 = FUN_00d04b10(plVar7,plVar6,param_3,param_4,param_5,param_6,param_7);
LAB_00d04dfc:
    auVar14 = FUN_00d063d0(auVar12._0_8_,auVar12._8_8_,plVar4,plVar3,auVar13._0_8_,auVar13._8_8_);
  }
  else {
    *param_6 = *param_2;
    plVar3 = param_2;
    plVar4 = param_6 + 1;
    plVar6 = param_1;
    while( true ) {
      param_2 = param_2 + 1;
      if ((long)param_2 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        param_2 = (long *)*plVar6;
      }
      if (param_4 == param_2) break;
      lVar9 = *param_2;
      if ((*(long *)(lVar9 + 0x10) == 0) || (*(long *)(lVar9 + 0x40) != *(long *)(lVar9 + 0x10))) {
        lVar10 = *param_2;
        if (*(long *)(lVar9 + 0x18) == 0) goto LAB_00d04bac;
        *plVar4 = lVar10;
        plVar4 = plVar4 + 1;
      }
      else {
        lVar10 = *param_2;
LAB_00d04bac:
        plVar7 = plVar3 + 1;
        *plVar3 = lVar10;
        plVar3 = plVar7;
        if ((long)plVar7 - *param_1 == 0x1000) {
          param_1 = param_1 + 1;
          plVar3 = (long *)*param_1;
        }
      }
    }
    plVar6 = plVar3 + 1;
    *plVar3 = *param_2;
    if ((long)plVar6 - *param_1 == 0x1000) {
      param_1 = param_1 + 1;
      plVar6 = (long *)*param_1;
    }
    auVar2._8_8_ = plVar6;
    auVar2._0_8_ = param_1;
    auVar14._8_8_ = plVar6;
    auVar14._0_8_ = param_1;
    if (param_6 < plVar4) {
      do {
        plVar3 = param_6 + 1;
        plVar7 = plVar6 + 1;
        *plVar6 = *param_6;
        if ((long)plVar7 - *param_1 == 0x1000) {
          param_1 = param_1 + 1;
          plVar7 = (long *)*param_1;
        }
        param_6 = plVar3;
        plVar6 = plVar7;
        auVar14 = auVar2;
      } while (plVar3 < plVar4);
    }
  }
  return auVar14;
}


