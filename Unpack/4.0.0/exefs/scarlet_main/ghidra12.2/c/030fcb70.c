/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fcb70; name: FUN_030fcb70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030fcb70(long param_1,int param_2,int param_3)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  iVar8 = *(int *)(param_1 + 0xb8);
  lVar9 = (long)iVar8;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) <= iVar8) {
    FUN_030ff454(param_1 + 0xb0,lVar9 + 1);
    iVar8 = *(int *)(param_1 + 0xb8);
  }
  lVar12 = *(long *)(param_1 + 0xb0);
  piVar11 = (int *)(lVar12 + (long)iVar8 * 0x60);
  *(int *)(param_1 + 0xb8) = (int)(lVar9 + 1);
  plVar7 = (long *)(piVar11 + 0x14);
  *plVar7 = 0;
  *piVar11 = param_2;
  piVar11[1] = param_3;
  *(undefined1 *)(piVar11 + 2) = 0;
  lVar9 = *(long *)(param_1 + 0x90) + (long)param_3 * 0xd0;
  pauVar1 = (undefined1 (*) [12])(lVar9 + 0x80);
  fVar15 = (float)*(undefined8 *)(lVar9 + 0x88);
  fVar16 = (float)((ulong)*(undefined8 *)(lVar9 + 0x88) >> 0x20);
  uVar25 = *(undefined8 *)*pauVar1;
  fVar13 = (float)uVar25;
  fVar14 = (float)((ulong)uVar25 >> 0x20);
  auVar29._0_4_ = -fVar13;
  auVar29._4_4_ = -fVar14;
  auVar29._8_4_ = -fVar15;
  auVar29._12_4_ = fVar16;
  auVar26._8_8_ = _UNK_03caab28;
  auVar26._0_8_ = _DAT_03caab20;
  auVar33._8_8_ = _UNK_03caa778;
  auVar33._0_8_ = _DAT_03caa770;
  plVar10 = (long *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 0x60);
  auVar27 = a64_TBL(ZEXT816(0),auVar29,auVar26);
  auVar30 = a64_TBL(ZEXT816(0),auVar29,auVar33);
  auVar34._8_8_ = _UNK_03caa6a8;
  auVar34._0_8_ = _DAT_03caa6a0;
  auVar38._8_8_ = _UNK_03caab38;
  auVar38._0_8_ = _DAT_03caab30;
  fVar17 = (float)plVar10[8] - (float)*(undefined8 *)(lVar9 + 0x90);
  fVar19 = (float)((ulong)plVar10[8] >> 0x20) -
           (float)((ulong)*(undefined8 *)(lVar9 + 0x90) >> 0x20);
  fVar21 = (float)plVar10[9] - (float)*(undefined8 *)(lVar9 + 0x98);
  fVar23 = (float)((ulong)plVar10[9] >> 0x20) -
           (float)((ulong)*(undefined8 *)(lVar9 + 0x98) >> 0x20);
  auVar35 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(plVar10 + 6),auVar34);
  auVar37 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(plVar10 + 6),auVar38);
  lVar9 = *plVar10;
  auVar39._0_4_ = auVar30._0_4_ * auVar37._0_4_ - auVar27._0_4_ * auVar35._0_4_;
  auVar39._4_4_ = auVar30._4_4_ * auVar37._4_4_ - auVar27._4_4_ * auVar35._4_4_;
  auVar39._8_4_ = auVar30._8_4_ * auVar37._8_4_ - auVar27._8_4_ * auVar35._8_4_;
  auVar39._12_4_ = auVar30._12_4_ * auVar37._12_4_ - auVar27._12_4_ * auVar35._12_4_;
  auVar5._8_4_ = (int)_UNK_03cab148;
  auVar5._0_8_ = _DAT_03cab140;
  auVar5._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
  auVar40 = a64_TBL(ZEXT816(0),auVar39,auVar5);
  auVar41._0_8_ =
       CONCAT44(auVar40._4_4_ - (auVar30._4_4_ * auVar35._4_4_ + auVar27._4_4_ * auVar37._4_4_),
                auVar40._0_4_ - (auVar30._0_4_ * auVar35._0_4_ + auVar27._0_4_ * auVar37._0_4_));
  auVar41._8_4_ = auVar40._8_4_ - (auVar30._8_4_ * auVar35._8_4_ + auVar27._8_4_ * auVar37._8_4_);
  auVar41._12_4_ =
       auVar40._12_4_ - (auVar30._12_4_ * auVar35._12_4_ + auVar27._12_4_ * auVar37._12_4_);
  auVar27._12_4_ = fVar16;
  auVar27._0_12_ = *pauVar1;
  auVar30._12_4_ = fVar16;
  auVar30._0_12_ = *pauVar1;
  auVar27 = NEON_ext(auVar27,auVar30,8,1);
  fVar31 = auVar27._4_4_ * auVar27._4_4_;
  uVar25 = NEON_ext(uVar25,auVar27._0_8_,4,1);
  fVar28 = fVar31 + -0.5;
  fVar31 = fVar31 + -0.5;
  fVar32 = fVar13 * fVar17 + fVar14 * fVar19 + fVar15 * fVar21;
  fVar36 = fVar13 * fVar17 + fVar14 * fVar19 + fVar15 * fVar21;
  auVar35._4_4_ = fVar19;
  auVar35._0_4_ = fVar17;
  auVar35._8_4_ = fVar21;
  auVar35._12_4_ = fVar23;
  auVar37._4_4_ = fVar19;
  auVar37._0_4_ = fVar17;
  auVar37._8_4_ = fVar21;
  auVar37._12_4_ = fVar23;
  auVar27 = NEON_ext(auVar35,auVar37,4,1);
  fVar18 = (float)uVar25 * fVar17 - fVar13 * auVar27._0_4_;
  fVar20 = (float)((ulong)uVar25 >> 0x20) * fVar19 - fVar14 * auVar27._4_4_;
  fVar22 = fVar13 * fVar21 - fVar15 * fVar17;
  fVar24 = fVar14 * fVar23 - fVar16 * fVar19;
  auVar40._4_4_ = fVar20;
  auVar40._0_4_ = fVar18;
  auVar40._8_4_ = fVar22;
  auVar40._12_4_ = fVar24;
  auVar4._4_4_ = fVar20;
  auVar4._0_4_ = fVar18;
  auVar4._8_4_ = fVar22;
  auVar4._12_4_ = fVar24;
  auVar27 = NEON_ext(auVar40,auVar4,4,1);
  fVar13 = fVar28 * fVar17 + fVar13 * fVar32 + auVar27._0_4_ * fVar16;
  fVar14 = fVar31 * fVar19 + fVar14 * fVar36 + auVar27._4_4_ * fVar16;
  fVar15 = fVar28 * fVar21 + fVar15 * fVar32 + fVar18 * fVar16;
  fVar16 = fVar31 * fVar23 + fVar16 * fVar36 + fVar16 * 0.0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 8) == 0) {
      *plVar7 = lVar9;
    }
    else {
      plVar6 = (long *)(lVar9 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)*plVar7;
      *plVar7 = *plVar10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar7 = plVar6 + 2;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
          auVar41._8_8_ = auVar41._8_8_;
        }
      }
    }
  }
  lVar12 = lVar12 + (long)iVar8 * 0x60;
  *(ulong *)(lVar12 + 0x38) = CONCAT44(auVar41._12_4_,-auVar41._8_4_);
  *(ulong *)(lVar12 + 0x30) = CONCAT44(-auVar41._4_4_,-auVar41._0_4_);
  *(ulong *)(lVar12 + 0x48) = CONCAT44(fVar16 + fVar16,fVar15 + fVar15);
  *(ulong *)(lVar12 + 0x40) = CONCAT44(fVar14 + fVar14,fVar13 + fVar13);
  return;
}


