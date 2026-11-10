/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee8f8; name: FUN_004ee8f8
 */


uint * FUN_004ee8f8(undefined8 param_1,int param_2,ulong param_3,byte *param_4,ulong *param_5,
                   uint *param_6,long param_7)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong *puStack_50;
  int local_48;
  
  if ((param_3 & 1) != 0) {
    switch(*param_4 - 1) {
    case 0:
      uVar5 = FUN_00522a94(param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052ed90(uVar5,param_6,param_7);
      return puVar6;
    case 1:
      uVar5 = FUN_00522a94(param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052ecc0(uVar5,param_6,param_7);
      return puVar6;
    case 2:
      uVar5 = FUN_00522a94(param_1,param_2,3,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e920(uVar5,param_6,param_7);
      return puVar6;
    case 3:
      uVar5 = FUN_00522a94(param_1,param_2,4,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e930(uVar5,param_6,param_7);
      return puVar6;
    case 4:
      uVar5 = FUN_00522a94(param_1,param_2,5,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e900(uVar5,param_6,param_7);
      return puVar6;
    case 5:
      uVar5 = FUN_00522a94(param_1,param_2,6,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052eb20(uVar5,param_6,param_7);
      return puVar6;
    case 6:
      uVar5 = FUN_00522a94(param_1,param_2,7,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e980(uVar5,param_6,param_7);
      return puVar6;
    case 7:
      uVar5 = FUN_00522a94(param_1,param_2,8,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e970(uVar5,param_6,param_7);
      return puVar6;
    default:
      return param_6;
    case 0xc:
      uVar5 = FUN_00522a94(param_1,param_2,0xd,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e910(uVar5,param_6,param_7);
      return puVar6;
    case 0xd:
      local_68 = FUN_00522a94(param_1,param_2,0xe,param_4[2],*(undefined8 *)(param_4 + 0x18));
      uStack_60 = *(undefined8 *)(param_4 + 8);
      local_58 = *(undefined8 *)(param_4 + 0x10);
      puStack_50 = param_5;
      local_48 = param_2;
      puVar6 = (uint *)FUN_004ef9f0(param_7,param_6,&local_68);
      return puVar6;
    case 0xe:
      uVar5 = FUN_00522a94(param_1,param_2,0xf,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052ea50(uVar5,param_6,param_7);
      return puVar6;
    case 0xf:
      uVar5 = FUN_00522a94(param_1,param_2,0x10,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052ebf0(uVar5,param_6,param_7);
      return puVar6;
    case 0x10:
      uVar5 = FUN_00522a94(param_1,param_2,0x11,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e940(uVar5,param_6,param_7);
      return puVar6;
    case 0x11:
      uVar5 = FUN_00522a94(param_1,param_2,0x12,param_4[2],*(undefined8 *)(param_4 + 0x18));
      puVar6 = (uint *)FUN_0052e950(uVar5,param_6,param_7);
      return puVar6;
    }
  }
  puVar6 = param_6;
  switch(*param_4 - 1) {
  case 0:
    puVar6 = param_6 + 2;
    if (param_4[1] == 0) {
      FUN_00522650(*(undefined8 *)param_6,param_1,param_2,1,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_0052272c(param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 1:
    puVar6 = param_6 + 1;
    if (param_4[1] == 0) {
      FUN_005223dc(*param_6,param_1,param_2,2,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_005224b8(param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 2:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      iVar4 = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar13 = FUN_0052e420(param_6,iVar4);
        if (auVar13._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar13._8_4_ = iVar4;
        auVar13._0_8_ = (long)param_6 + 2;
        auVar13._12_4_ = 0;
      }
    }
    else {
      auVar13[8] = bVar2;
      auVar13._0_8_ = (long)param_6 + 1;
      auVar13._9_7_ = 0;
    }
    if (param_4[1] != 0) {
      FUN_00521d64(param_1,param_2,3,param_4[2],auVar13._8_8_,*(undefined8 *)(param_4 + 0x18));
      return auVar13._0_8_;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 3;
    goto LAB_004ef398;
  case 3:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      iVar4 = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar14 = FUN_0052e420(param_6,iVar4);
        if (auVar14._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar14._8_4_ = iVar4;
        auVar14._0_8_ = (long)param_6 + 2;
        auVar14._12_4_ = 0;
      }
    }
    else {
      auVar14[8] = bVar2;
      auVar14._0_8_ = (long)param_6 + 1;
      auVar14._9_7_ = 0;
    }
    if (param_4[1] != 0) {
      FUN_00522244(param_1,param_2,4,param_4[2],auVar14._8_8_,*(undefined8 *)(param_4 + 0x18));
      return auVar14._0_8_;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 4;
    goto LAB_004ef15c;
  case 4:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      iVar4 = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar15 = FUN_0052e420(param_6,iVar4);
        if (auVar15._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar15._8_4_ = iVar4;
        auVar15._0_8_ = (long)param_6 + 2;
        auVar15._12_4_ = 0;
      }
    }
    else {
      auVar15[8] = bVar2;
      auVar15._0_8_ = (long)param_6 + 1;
      auVar15._9_7_ = 0;
    }
    puVar6 = auVar15._0_8_;
    if (param_4[1] != 0) {
      FUN_00521af4(param_1,param_2,5,param_4[2],auVar15._8_8_,*(undefined8 *)(param_4 + 0x18));
      return puVar6;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 5;
    uVar9 = auVar15._8_8_ & 0xffffffff;
    goto LAB_004ef33c;
  case 5:
    auVar14._8_8_ = *(undefined8 *)param_6;
    auVar14._0_8_ = param_6 + 2;
    if (param_4[1] != 0) {
      FUN_00522244(param_1,param_2,6,param_4[2],*(undefined8 *)param_6,
                   *(undefined8 *)(param_4 + 0x18));
      return param_6 + 2;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 6;
LAB_004ef15c:
    puVar6 = auVar14._0_8_;
    FUN_00522170(param_1,param_2,uVar5,auVar14._8_8_,uVar10);
    break;
  case 6:
    puVar6 = param_6 + 1;
    uVar9 = (ulong)*param_6;
    if (param_4[1] != 0) {
      FUN_00521fd4(param_1,param_2,7,param_4[2],uVar9,*(undefined8 *)(param_4 + 0x18));
      return puVar6;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 7;
    goto LAB_004ef26c;
  case 7:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar16 = FUN_0052e420(param_6);
        if (auVar16._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar16._8_4_ = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
        auVar16._0_8_ = (long)param_6 + 2;
        auVar16._12_4_ = 0;
      }
    }
    else {
      auVar16[8] = bVar2;
      auVar16._0_8_ = (long)param_6 + 1;
      auVar16._9_7_ = 0;
    }
    puVar6 = auVar16._0_8_;
    if (param_4[1] == 0) {
      FUN_005228d0(param_1,param_2,8,auVar16._8_8_ != 0,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_005229a8(param_1,param_2,8,param_4[2],auVar16._8_8_ != 0,*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 8:
  case 0xb:
    if (param_4[1] == 0) {
      uVar5 = FUN_00523054(param_1,param_2,9,*(undefined8 *)(param_4 + 0x18));
      cVar3 = (char)*param_6;
      if (cVar3 < '\0') goto LAB_004eee80;
LAB_004ee9d0:
      auVar20[8] = cVar3;
      auVar20._0_8_ = (long)param_6 + 1;
      auVar20._9_3_ = 0;
    }
    else {
      uVar5 = FUN_00523188();
      cVar3 = (char)*param_6;
      if (-1 < cVar3) goto LAB_004ee9d0;
LAB_004eee80:
      auVar20 = FUN_0052e5f0(param_6);
      if (auVar20._0_8_ == 0) {
        return (uint *)0x0;
      }
    }
    lVar8 = auVar20._0_8_;
    lVar11 = (long)auVar20._8_4_;
    if ((*(long *)(param_7 + 8) - lVar8) + 0x10 < lVar11) {
      puVar6 = (uint *)FUN_0052ddec(param_7,lVar8,auVar20._8_4_,uVar5);
      return puVar6;
    }
    FUN_0026c6b8(uVar5,lVar8,lVar11);
    puVar6 = (uint *)(lVar8 + lVar11);
    break;
  case 9:
    if (param_4[1] == 0) {
      plVar7 = (long *)FUN_00523314(param_1,param_2,10,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
    }
    else {
      plVar7 = (long *)FUN_005237ac();
    }
    iVar4 = *(int *)(param_7 + 0x58);
    *(int *)(param_7 + 0x58) = iVar4 + -1;
    if (0 < iVar4) {
      *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + 1;
      puVar6 = (uint *)(**(code **)(*plVar7 + 0x58))(plVar7,param_6,param_7);
      *(int *)(param_7 + 0x58) = *(int *)(param_7 + 0x58) + 1;
      *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + -1;
      uVar1 = *(uint *)(param_7 + 0x50);
      *(undefined4 *)(param_7 + 0x50) = 0;
      if (uVar1 == (param_2 << 3 | 3U)) {
        return puVar6;
      }
    }
    puVar6 = (uint *)0x0;
    break;
  case 10:
    if (param_4[1] == 0) {
      uVar5 = FUN_00523314(param_1,param_2,0xb,*(undefined8 *)(param_4 + 8),
                           *(undefined8 *)(param_4 + 0x18));
    }
    else {
      uVar5 = FUN_005237ac();
    }
    puVar6 = (uint *)thunk_FUN_0052e1c4(param_7,uVar5,param_6);
    return puVar6;
  case 0xc:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      iVar4 = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar17 = FUN_0052e420(param_6,iVar4);
        if (auVar17._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar17._8_4_ = iVar4;
        auVar17._0_8_ = (long)param_6 + 2;
        auVar17._12_4_ = 0;
      }
    }
    else {
      auVar17[8] = bVar2;
      auVar17._0_8_ = (long)param_6 + 1;
      auVar17._9_7_ = 0;
    }
    puVar6 = auVar17._0_8_;
    if (param_4[1] != 0) {
      FUN_00521fd4(param_1,param_2,0xd,param_4[2],auVar17._8_8_,*(undefined8 *)(param_4 + 0x18));
      return puVar6;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 0xd;
    uVar9 = auVar17._8_8_ & 0xffffffff;
LAB_004ef26c:
    FUN_00521f00(param_1,param_2,uVar5,uVar9,uVar10);
    break;
  case 0xd:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      iVar4 = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar18 = FUN_0052e420(param_6,iVar4);
        if (auVar18._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar18._8_4_ = iVar4;
        auVar18._0_8_ = (long)param_6 + 2;
        auVar18._12_4_ = 0;
      }
    }
    else {
      auVar18[8] = bVar2;
      auVar18._0_8_ = (long)param_6 + 1;
      auVar18._9_7_ = 0;
    }
    uVar12 = auVar18._8_8_;
    puVar6 = auVar18._0_8_;
    uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar12 & 0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*param_5 & 1) == 0) {
        lVar8 = FUN_00264e54(param_5);
      }
      else {
        lVar8 = (*param_5 & 0xfffffffffffffffe) + 8;
      }
      FUN_00514e00(lVar8,param_2,uVar12);
    }
    else if (param_4[1] == 0) {
      FUN_00522de4(param_1,param_2,0xe,uVar12 & 0xffffffff,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      FUN_00522eb8(param_1,param_2,0xe,param_4[2],uVar12 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 0xe:
    puVar6 = param_6 + 1;
    uVar9 = (ulong)*param_6;
    if (param_4[1] != 0) {
      FUN_00521af4(param_1,param_2,0xf,param_4[2],uVar9,*(undefined8 *)(param_4 + 0x18));
      return puVar6;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 0xf;
    goto LAB_004ef33c;
  case 0xf:
    auVar13._8_8_ = *(undefined8 *)param_6;
    auVar13._0_8_ = param_6 + 2;
    if (param_4[1] != 0) {
      FUN_00521d64(param_1,param_2,0x10,param_4[2],*(undefined8 *)param_6,
                   *(undefined8 *)(param_4 + 0x18));
      return param_6 + 2;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 0x10;
    goto LAB_004ef398;
  case 0x10:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar21 = FUN_0052e420(param_6);
        if (auVar21._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar21._8_4_ = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
        auVar21._0_8_ = (long)param_6 + 2;
      }
    }
    else {
      auVar21[8] = bVar2;
      auVar21._0_8_ = (long)param_6 + 1;
      auVar21._9_3_ = 0;
    }
    puVar6 = auVar21._0_8_;
    uVar9 = (ulong)(-(auVar21._8_4_ & 1) ^ auVar21._8_4_ >> 1);
    if (param_4[1] != 0) {
      FUN_00521af4(param_1,param_2,0x11,param_4[2],uVar9,*(undefined8 *)(param_4 + 0x18));
      return puVar6;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 0x11;
LAB_004ef33c:
    FUN_005219f0(param_1,param_2,uVar5,uVar9,uVar10);
    break;
  case 0x11:
    bVar2 = (byte)*param_6;
    if ((char)bVar2 < '\0') {
      if ((char)*(byte *)((long)param_6 + 1) < '\0') {
        auVar19 = FUN_0052e420(param_6);
        if (auVar19._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar19._8_4_ = (uint)bVar2 + (uint)*(byte *)((long)param_6 + 1) * 0x80 + -0x80;
        auVar19._0_8_ = (long)param_6 + 2;
        auVar19._12_4_ = 0;
      }
    }
    else {
      auVar19[8] = bVar2;
      auVar19._0_8_ = (long)param_6 + 1;
      auVar19._9_7_ = 0;
    }
    uVar9 = -(auVar19._8_8_ & 1) ^ auVar19._8_8_ >> 1;
    auVar13._8_8_ = uVar9;
    auVar13._0_8_ = auVar19._0_8_;
    if (param_4[1] != 0) {
      FUN_00521d64(param_1,param_2,0x12,param_4[2],uVar9,*(undefined8 *)(param_4 + 0x18));
      return auVar19._0_8_;
    }
    uVar10 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = 0x12;
LAB_004ef398:
    puVar6 = auVar13._0_8_;
    FUN_00521c90(param_1,param_2,uVar5,auVar13._8_8_,uVar10);
  }
  return puVar6;
}


