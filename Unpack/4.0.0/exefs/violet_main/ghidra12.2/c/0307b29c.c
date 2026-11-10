/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307b29c; name: FUN_0307b29c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307b29c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar13 = *(long *)(param_1 + 0x38);
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
    plVar7 = (long *)(lVar13 + -0xf8);
    uVar10 = 0xffffffff;
    lVar12 = -1;
  }
  else {
    uVar10 = 0;
    piVar9 = (int *)(lVar13 + 0x1c);
    do {
      if (*piVar9 == *(int *)(*(long *)(param_2 + 0x20) + 0x90)) goto LAB_0307b310;
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 0x40;
    } while (*(uint *)(param_1 + 0x40) != uVar10);
    uVar10 = 0xffffffff;
LAB_0307b310:
    lVar12 = (long)(int)uVar10;
    plVar7 = (long *)(lVar13 + lVar12 * 0x100 + 8);
    if (param_2 == 0) goto LAB_0307b34c;
  }
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_0307b34c:
  plVar5 = (long *)*plVar7;
  *plVar7 = param_2;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar13 = lVar13 + lVar12 * 0x100;
  *(byte *)(lVar13 + 0xf0) = *(byte *)(lVar13 + 0xf0) | 2;
  if ((param_5 & 1) == 0) {
    *(undefined1 *)(lVar13 + 0x90) = *(undefined1 *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar13 + 0xa8) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar13 + 0xa0) = uVar6;
    bVar20 = *(byte *)(param_2 + 0x40);
  }
  else {
    bVar20 = *(byte *)(lVar13 + 0x90);
    *(byte *)(param_2 + 0x40) = bVar20;
    uVar6 = *(undefined8 *)(lVar13 + 0xa0);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar13 + 0xa8);
    *(undefined8 *)(param_2 + 0x50) = uVar6;
  }
  lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  auVar15 = *(undefined1 (*) [16])(lVar13 + 0x70);
  auVar14 = *(undefined1 (*) [16])(lVar13 + 0x80);
  if (CONCAT31(0,bVar20) != 0) {
    auVar19[4] = bVar20;
    auVar19._0_4_ = CONCAT31(0,bVar20);
    auVar19._5_3_ = 0;
    auVar19[8] = bVar20;
    auVar19._9_3_ = 0;
    auVar19[0xc] = bVar20;
    auVar19._13_3_ = 0;
    auVar18._8_8_ = _UNK_03cabbd8;
    auVar18._0_8_ = _DAT_03cabbd0;
    iVar1 = -(uint)bVar20;
    auVar24._8_8_ = _UNK_03cabbc8;
    auVar24._0_8_ = _DAT_03cabbc0;
    auVar28._8_8_ = _UNK_03cab238;
    auVar28._0_8_ = _DAT_03cab230;
    auVar29._8_8_ = _UNK_03cac2d8;
    auVar29._0_8_ = _DAT_03cac2d0;
    auVar26 = NEON_ushl(auVar28,auVar19,4);
    auVar27._0_4_ = -(uint)(-1 < auVar26._0_4_);
    auVar27._4_4_ = -(uint)(-1 < auVar26._4_4_);
    auVar27._8_4_ = -(uint)(-1 < auVar26._8_4_);
    auVar27._12_4_ = -(uint)(-1 < auVar26._8_8_);
    auVar31._4_4_ = iVar1;
    auVar31._0_4_ = iVar1;
    auVar31._8_4_ = iVar1;
    auVar31._12_4_ = iVar1;
    auVar26 = NEON_ushl(auVar29,auVar19,4);
    auVar30._8_8_ = _UNK_03cabec8;
    auVar30._0_8_ = _DAT_03cabec0;
    auVar17._0_4_ = -(uint)(-1 < auVar26._0_4_);
    auVar17._4_4_ = -(uint)(-1 < auVar26._4_4_);
    auVar17._8_4_ = -(uint)(-1 < auVar26._8_4_);
    auVar17._12_4_ = -(uint)(-1 < auVar26._8_8_);
    auVar28 = NEON_ushl(auVar30,auVar31,4);
    auVar31 = a64_TBL(ZEXT816(0),auVar15,auVar18);
    auVar19 = a64_TBL(ZEXT816(0),auVar14,auVar18);
    auVar26 = a64_TBL(ZEXT816(0),auVar15,auVar24);
    auVar25 = a64_TBL(ZEXT816(0),auVar14,auVar24);
    auVar14 = auVar14 ^ (auVar14 ^ auVar19) & ~auVar27;
    auVar26 = auVar26 ^ (auVar26 ^ auVar31 ^ (auVar31 ^ auVar15) & auVar27) & auVar17;
    auVar14 = auVar14 ^ (auVar14 ^ auVar25) & ~auVar17;
    auVar25._0_3_ = auVar26._0_3_;
    bVar20 = (byte)((uint)(auVar28._0_4_ << 0x1f) >> 0x18);
    auVar25[3] = bVar20 ^ auVar26[3];
    auVar25[4] = auVar26[4];
    auVar25[5] = auVar26[5];
    auVar25[6] = auVar26[6];
    bVar21 = (byte)((uint)(auVar28._4_4_ << 0x1f) >> 0x18);
    auVar25[7] = bVar21 ^ auVar26[7];
    auVar25[8] = auVar26[8];
    auVar25[9] = auVar26[9];
    auVar25[10] = auVar26[10];
    bVar22 = (byte)((uint)(auVar28._8_4_ << 0x1f) >> 0x18);
    auVar25[0xb] = bVar22 ^ auVar26[0xb];
    auVar25[0xc] = auVar26[0xc];
    auVar25[0xd] = auVar26[0xd];
    auVar25[0xe] = auVar26[0xe];
    bVar23 = (byte)((uint)(auVar28._12_4_ << 0x1f) >> 0x18);
    auVar25[0xf] = bVar23 ^ auVar26[0xf];
    auVar26._0_3_ = auVar14._0_3_;
    auVar26[3] = auVar14[3] ^ bVar20;
    auVar26[4] = auVar14[4];
    auVar26[5] = auVar14[5];
    auVar26[6] = auVar14[6];
    auVar26[7] = auVar14[7] ^ bVar21;
    auVar26[8] = auVar14[8];
    auVar26[9] = auVar14[9];
    auVar26[10] = auVar14[10];
    auVar26[0xb] = auVar14[0xb] ^ bVar22;
    auVar26[0xc] = auVar14[0xc];
    auVar26[0xd] = auVar14[0xd];
    auVar26[0xe] = auVar14[0xe];
    auVar26[0xf] = auVar14[0xf] ^ bVar23;
    auVar15 = NEON_fmin(auVar25,auVar26,4);
    auVar14 = NEON_fmax(auVar25,auVar26,4);
  }
  auVar26 = *(undefined1 (*) [16])(param_2 + 0x50);
  auVar16._0_8_ = CONCAT44(auVar15._4_4_ + auVar26._4_4_,auVar15._0_4_ + auVar26._0_4_);
  auVar16._8_4_ = auVar15._8_4_ + auVar26._8_4_;
  auVar16._12_4_ = auVar15._12_4_ + auVar26._12_4_;
  auVar15._0_8_ = CONCAT44(auVar14._4_4_ + auVar26._4_4_,auVar14._0_4_ + auVar26._0_4_);
  auVar15._8_4_ = auVar14._8_4_ + auVar26._8_4_;
  auVar15._12_4_ = auVar14._12_4_ + auVar26._12_4_;
  uStack_68 = auVar16._8_8_;
  uStack_58 = auVar15._8_8_;
  local_70 = auVar16._0_8_;
  uStack_60 = auVar15._0_8_;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar6 = FUN_0307f764();
  }
  uVar4 = FUN_0086f578(uVar6,&local_70,uVar10 & 0xffffffff);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar12 * 0x100 + 0x18) = uVar4;
  plVar7 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar13 = *plVar7;
  }
  else {
    lVar13 = FUN_0307da18(plVar7);
  }
  uVar4 = (undefined4)uVar10;
  *(undefined4 *)(lVar13 + 0x94) = uVar4;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_78[0] = uVar4;
    FUN_0307b568(param_1,local_78,*param_3);
  }
  lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  iVar1 = *(int *)(lVar13 + 0x60);
  if (iVar1 != 0) {
    lVar12 = (long)iVar1 << 4;
    puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x58) + 8);
    do {
      local_80[0] = uVar4;
      FUN_0307b568(param_1,local_80,*puVar11);
      lVar12 = lVar12 + -0x10;
      puVar11 = puVar11 + 2;
    } while (lVar12 != 0);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar13 = *plVar7;
  }
  else {
    lVar13 = FUN_0307da18(plVar7);
  }
  FUN_0308746c(lVar13,param_1);
  return;
}


