/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a315ac; name: FUN_00a315ac
 */


void FUN_00a315ac(int param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int param4;
  int param5;
  int param6;
  int param7;
  int param8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_01b3c408(0x120,(long)param_1);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  plVar14 = *(long **)(lVar13 + 0x1c8);
  plVar2 = *(long **)(lVar13 + 0x1c0);
  do {
    if (plVar2 == plVar14) goto LAB_00a31674;
    lVar13 = *plVar2;
    uVar12 = FUN_011b8548(lVar13 + 0x28);
    plVar2 = plVar2 + 1;
  } while ((uVar12 & 1) == 0);
  FUN_011b8d00(&local_b0,lVar13 + 0x50,0xd);
  FUN_01e74ef0(&local_70,0x20,&local_b0,0x20);
  FUN_01b3c818(0x108,&local_70);
LAB_00a31674:
  if (*param_2 != 0) {
    plVar14 = (long *)(*param_2 + 0x70);
    lVar13 = *plVar14;
    if ((*(byte *)(*(long *)(lVar13 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar4 = FUN_00cf44f4();
      if (sVar4 == 0) goto LAB_00a31840;
      lVar13 = *plVar14;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_01e9da00(lVar13,&local_b0,0x10);
    FUN_01e74ef0(&local_70,0x20,&local_b0,0x10);
    FUN_01b3c818(0x109,&local_70);
    if (*(long *)(*plVar14 + 8) == 0) {
      uVar9 = FUN_00cf44f4();
      uVar10 = FUN_00cf41a8(*plVar14);
      uVar11 = FUN_00f14b64(*plVar14);
      uVar6 = FUN_00f13da0(uVar9,uVar10,uVar11);
      uVar6 = uVar6 & 0xff;
    }
    else {
      uVar6 = FUN_00e9987c();
    }
    FUN_01b3c408(0xac,uVar6);
    uVar6 = FUN_00cf44f4(*plVar14);
    uVar7 = FUN_00cf41a8(*plVar14);
    snprintf(&DAT_0483b140,8,"%04d_%02d",uVar6 & 0xffff,uVar7 & 0xffff);
    FUN_01b3c818(0x9f,&DAT_0483b140);
    uVar5 = FUN_00e974e0(*plVar14);
    FUN_01b3c408(0xa0,uVar5);
    uVar12 = FUN_00d1eb6c(*plVar14);
    if ((uVar12 & 1) == 0) {
      iVar8 = FUN_00e97f74(*plVar14);
    }
    else {
      iVar8 = 0x1f;
    }
    uVar6 = FUN_00d1eb6c(*plVar14);
    if ((uVar6 >> 1 & 1) == 0) {
      param4 = FUN_00e982bc(*plVar14);
    }
    else {
      param4 = 0x1f;
    }
    uVar6 = FUN_00d1eb6c(*plVar14);
    if ((uVar6 >> 2 & 1) == 0) {
      param5 = FUN_00e98604(*plVar14);
    }
    else {
      param5 = 0x1f;
    }
    uVar6 = FUN_00d1eb6c(*plVar14);
    if ((uVar6 >> 3 & 1) == 0) {
      param6 = FUN_00e9894c(*plVar14);
    }
    else {
      param6 = 0x1f;
    }
    uVar6 = FUN_00d1eb6c(*plVar14);
    if ((uVar6 >> 4 & 1) == 0) {
      param7 = FUN_00e98fdc(*plVar14);
    }
    else {
      param7 = 0x1f;
    }
    uVar6 = FUN_00d1eb6c(*plVar14);
    if ((uVar6 >> 5 & 1) == 0) {
      param8 = FUN_00e98c94(*plVar14);
    }
    else {
      param8 = 0x1f;
    }
    snprintf(&DAT_0483b148,0x12,"%02d_%02d_%02d_%02d_%02d_%02d",iVar8,param4,param5,param6,param7,
             param8);
    FUN_01b3c818(0xa1,&DAT_0483b148);
    cVar3 = FUN_01400ba8(*plVar14);
    cVar1 = '\x1b';
    if ((byte)(cVar3 - 1U) < 0x1a) {
      cVar1 = cVar3;
    }
    FUN_01b3c408(0xa3,cVar1);
  }
LAB_00a31840:
  FUN_017d2474(0x33,0);
  return;
}


