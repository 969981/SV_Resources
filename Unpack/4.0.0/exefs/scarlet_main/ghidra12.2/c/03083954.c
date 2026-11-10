/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03083954; name: FUN_03083954
 */


void FUN_03083954(long *param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar10 = PTR_DAT_047e4fb0;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar10 + 0x10);
  param_1[1] = 0xffffffff;
  puVar10 = PTR_DAT_047e4f38;
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar15 = tpidr_el0;
  lVar14 = *(long *)(lVar15 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar14 = *(long *)(lVar15 + 0x1000b8);
  }
  iVar3 = *(int *)(param_2 + 0x20);
  iVar20 = *(int *)puVar10;
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar20 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  FUN_0086f2c4(auStack_a0);
  FUN_0086f540(auStack_a0,iVar3);
  iVar20 = *(int *)puVar10;
  lVar14 = *(long *)(lVar15 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar20 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (iVar3 != 0) {
    uVar18 = 0;
    auVar23._8_4_ = 0xff7fffee;
    auVar23._0_8_ = 0xff7fffeeff7fffee;
    auVar23._12_4_ = 0xff7fffee;
    auVar21._8_4_ = 0x7f7fffee;
    auVar21._0_8_ = 0x7f7fffee7f7fffee;
    auVar21._12_4_ = 0x7f7fffee;
    uVar19 = 0x73237a;
    do {
      iVar17 = (int)uVar18;
      iVar5 = iVar3 - iVar17;
      iVar20 = iVar5;
      if (0x4e < iVar5) {
        iVar20 = 0x4f;
      }
      if (0 < iVar5) {
        uVar18 = (ulong)iVar17;
        do {
          piVar16 = (int *)(*(long *)(param_2 + 0x18) + uVar18 * 0x10);
          uVar2 = *(ushort *)(piVar16 + 2);
          auVar22._8_8_ = auVar21._8_8_;
          auVar22._0_8_ = 0x7f7fffee7f7fffee;
          auVar24._8_8_ = auVar23._8_8_;
          auVar24._0_8_ = 0xff7fffeeff7fffee;
          if (0 < (short)uVar2) {
            iVar5 = *piVar16;
            lVar14 = (long)iVar5;
            auVar22._0_8_ = 0x7f7fffee7f7fffee;
            auVar24._0_8_ = 0xff7fffeeff7fffee;
            piVar16 = (int *)(*(long *)(param_2 + 0x28) + lVar14 * 0x14);
            do {
              lVar14 = lVar14 + 1;
              pauVar6 = (undefined1 (*) [12])(*(long *)(param_2 + 0x38) + (long)*piVar16 * 0x10);
              uVar26 = (undefined4)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
              auVar7._12_4_ = uVar26;
              auVar7._0_12_ = *pauVar6;
              auVar22 = NEON_fmin(auVar22,auVar7,4);
              auVar8._12_4_ = uVar26;
              auVar8._0_12_ = *pauVar6;
              auVar24 = NEON_fmax(auVar24,auVar8,4);
              piVar16 = piVar16 + 5;
            } while (lVar14 < (int)(iVar5 + (uint)uVar2));
          }
          auVar25._0_8_ = CONCAT44(auVar24._4_4_ + 0.0,auVar24._0_4_ + 0.0);
          auVar25._8_4_ = auVar24._8_4_ + 0.0;
          auVar25._12_4_ = auVar24._12_4_ + 0.0;
          uStack_78 = auVar22._8_8_;
          local_80 = auVar22._0_8_;
          uStack_68 = auVar25._8_8_;
          uStack_70 = auVar25._0_8_;
          FUN_0086f578(auStack_a0,&local_80,uVar18 & 0xffffffff);
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)(iVar20 + iVar17));
      }
      bVar11 = CARRY4(iVar20 * 0xcd32be,uVar19);
      uVar19 = iVar20 * 0xcd32be + uVar19;
      if (bVar11) {
        iVar20 = *(int *)PTR_DAT_047e4f38;
        lVar14 = *(long *)(lVar15 + 0x1000b8);
        if (lVar14 == 0) {
          lVar14 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar14;
        }
        if (*(long *)(lVar14 + (long)iVar20 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
    } while ((int)uVar18 != iVar3);
  }
  puVar10 = PTR_DAT_047e4f38;
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar14 = *(long *)(lVar15 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  FUN_0086fe00(auStack_a0);
  iVar3 = *(int *)puVar10;
  lVar14 = *(long *)(lVar15 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar9 = PTR_DAT_047d1a08;
  local_80 = 0x20;
  plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_80,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar12,"hkcdStaticAabbTree");
  }
  FUN_00871bc4(plVar12);
  FUN_00871c8c(plVar12,auStack_a0);
  plVar13 = (long *)param_1[3];
  if (plVar13 != plVar12) {
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      plVar13 = plVar12 + 2;
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar13 = (long *)param_1[3];
    }
    param_1[3] = (long)plVar12;
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar1 = plVar13 + 2;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))();
      }
    }
  }
  iVar3 = *(int *)puVar10;
  lVar14 = *(long *)(lVar15 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar13 = plVar12 + 2;
    do {
      lVar15 = *plVar13;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  FUN_0086f45c(auStack_a0);
  return;
}


