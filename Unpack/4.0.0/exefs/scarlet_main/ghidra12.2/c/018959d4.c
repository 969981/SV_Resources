/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018959d4; name: FUN_018959d4
 */


void FUN_018959d4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  plVar13 = (long *)param_3[1];
  lVar15 = *(long *)(param_1 + 0x20);
  uVar3 = *(ushort *)(param_3 + 2);
  plVar1 = param_3 + 3;
  uVar7 = (**(code **)(*plVar13 + 0x98))(plVar13);
  (**(code **)(*plVar13 + 0x368))(plVar13,uVar3,plVar1);
  FUN_0184ae20(*(undefined8 *)(lVar15 + 0x18),uVar7,uVar3,plVar1);
  if (uVar3 < 6) {
    FUN_0129aff0(*(undefined8 *)(lVar15 + 0x18),0x90,uVar7,uVar3);
  }
  if ((char)param_3[5] != '\0') {
    sVar4 = (short)param_3[2];
    plVar13 = (long *)param_3[1];
    uVar11 = 0x2b;
    switch(sVar4) {
    case 1:
      uVar11 = 0x2e;
      break;
    case 2:
      uVar11 = 0x2a;
      break;
    case 3:
      uVar11 = 0x2d;
      break;
    case 4:
      uVar11 = 0x2c;
      break;
    case 5:
      break;
    case 6:
      uVar11 = 0x2f;
      break;
    case 7:
      uVar11 = 0x30;
      break;
    default:
      goto switchD_01895a98_default;
    }
    FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar13,uVar11);
  }
  plVar13 = (long *)param_3[1];
  sVar4 = (short)param_3[2];
switchD_01895a98_default:
  plVar10 = (long *)*param_3;
  cVar2 = *(char *)((long)param_3 + 0x29);
  puVar14 = (undefined8 *)param_3[6];
  if (plVar10 == (long *)0x0) {
    if (plVar13 != (long *)0x0) {
      lVar15 = *plVar13;
      plVar10 = plVar13;
      goto LAB_01895b00;
    }
    uVar7 = 0;
LAB_01895b54:
    if (puVar14 == (undefined8 *)0x0) goto LAB_01895c68;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    lVar15 = *plVar10;
LAB_01895b00:
    uVar7 = (**(code **)(lVar15 + 0x98))(plVar10);
    if ((plVar13 == (long *)0x0) || (cVar2 == '\0')) goto LAB_01895b54;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar12 = 0x56;
    switch(sVar4) {
    case 1:
      uVar12 = 0x5c;
      break;
    case 2:
      uVar12 = 0x67;
      break;
    case 3:
      uVar12 = 0x61;
      break;
    case 4:
      break;
    case 5:
      plVar10 = (long *)FUN_0124acbc(param_1);
      iVar9 = (**(code **)(*plVar10 + 0x68))(plVar10,PTR_DAT_047e2700);
      uVar12 = 0x4f;
      if (((param_3[4] & 7U) == 1) && (uVar12 = 0x4f, ((uint)param_3[4] >> 3 & 0x3f) == iVar9 - 1U))
      {
        uVar12 = 0x50;
      }
      break;
    case 6:
      uVar12 = 0x74;
      break;
    case 7:
      uVar12 = 0x6e;
      break;
    default:
      goto switchD_01895b44_caseD_8;
    case 9:
      uVar12 = 0x6c;
      break;
    case 0xb:
      uVar12 = 0xbd;
      break;
    case 0xc:
      uVar12 = 0xc0;
      break;
    case 0xd:
      uVar12 = 0xc5;
      break;
    case 0xe:
      uVar12 = 0xda;
      break;
    case 0xf:
      uVar12 = 0x11b;
      break;
    case 0x11:
      uVar12 = 0x7c;
      break;
    case 0x12:
      uVar12 = 0xca;
      break;
    case 0x13:
      uVar12 = 0xee;
      break;
    case 0x15:
      uVar12 = 0xf1;
    }
    local_78 = CONCAT62(local_78._2_6_,uVar12);
    uVar8 = (**(code **)(*plVar13 + 0x98))(plVar13);
    local_78._0_4_ = CONCAT22(0x82,(undefined2)local_78);
    local_78 = CONCAT44(uVar8,(undefined4)local_78);
    if (sVar4 == 0xd) {
      uVar8 = FUN_0107ffe0(plVar1);
      local_78._0_4_ = CONCAT22(0x102,(undefined2)local_78);
      local_70 = CONCAT44(local_70._4_4_,uVar8) & 0xffffffff0000ffff;
    }
switchD_01895b44_caseD_8:
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar14 = &local_78;
  }
  FUN_0124b0ac(uVar11,uVar7,puVar14);
LAB_01895c68:
  plVar1 = (long *)*param_3;
  plVar13 = (long *)param_3[1];
  lVar15 = param_3[2];
  plVar10 = (long *)(**(code **)plVar13[5])(plVar13 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0))
  {
    uVar11 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  do {
    if (plVar10 == (long *)0x0) {
LAB_01895dbc:
      if (*(ushort *)(param_3 + 2) < 6) {
        FUN_02935034(*(undefined8 *)(param_1 + 0x38));
      }
      else if (*(ushort *)(param_3 + 2) == 0x10) {
        FUN_0297e310(param_1);
      }
      else {
        FUN_02e0cdf4(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3);
      }
      if ((char)param_3[7] == '\0') {
        FUN_0187767c(param_1,param_3[1]);
      }
      uVar6 = local_70;
      if ((short)param_3[2] == 5) {
        uVar5 = local_70 >> 0x18;
        local_70._6_2_ = SUB82(uVar6,6);
        local_70._0_6_ = (uint6)(uint)((int)uVar5 << 0x18);
        local_78 = 0x1d;
        uVar7 = (**(code **)(*(long *)param_3[1] + 0x98))();
        local_78 = CONCAT44(uVar7,(undefined4)local_78);
        local_80[0] = 0;
        FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_80,&local_78);
      }
      return;
    }
    if (plVar10 == (long *)PTR_DAT_047d3f08) {
      if ((((short)lVar15 == 3) && ((short)plVar13[0xe2] == 0x1ec)) && ((short)plVar13[0xe3] == 1))
      {
        FUN_0292f7a4(*(undefined8 *)(param_1 + 0x38),plVar13);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = (**(code **)(*plVar13 + 0x98))(plVar13);
        FUN_014606c4(uVar11,uVar7);
        FUN_0197ff90(plVar13,0,0);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = (**(code **)(*plVar13 + 0x98))(plVar13);
        FUN_0197fe48(uVar11,uVar7,0,0);
        lVar15 = *(long *)(param_1 + 0x20);
        uVar7 = (**(code **)(*plVar13 + 0x98))(plVar13);
        FUN_0129aff0(*(undefined8 *)(lVar15 + 0x18),0xac,uVar7);
        FUN_0124f1ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),plVar13);
        uVar7 = 0;
        if (plVar1 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar1 + 0x98))(plVar1);
        }
        lVar15 = *(long *)(param_1 + 0x20);
        uVar8 = (**(code **)(*plVar13 + 0x98))(plVar13);
        FUN_0167ebc0(*(undefined8 *)(lVar15 + 0x18),0xcb,uVar7,0x4c,uVar8,0xffff0000);
      }
      goto LAB_01895dbc;
    }
    plVar10 = (long *)*plVar10;
  } while( true );
}


