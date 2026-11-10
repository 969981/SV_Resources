/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032b9570; name: FUN_032b9570
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_032b9570(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  undefined1 (*local_48) [16];
  undefined8 local_40;
  ulong local_38;
  
  if ((*param_1 != 0) && (uVar6 = FUN_031e198c(param_1[1],"centerOfMassWorld","",1), 1 < uVar6)) {
    FUN_031e32f0(&local_48,param_1,uVar6);
    auVar15 = *local_48;
    fStack_58 = auVar15._8_4_;
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    if ((*param_1 == 0) ||
       (uVar6 = FUN_031e198c(param_1[1],"centerOfMassWorld_new","",1), uVar6 < 2)) {
      local_40 = 0;
      local_38 = 0;
      local_48 = (undefined1 (*) [16])0x0;
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x32b98b4);
      (*pcVar4)();
    }
    FUN_031e32f0(&local_48,param_1,uVar6);
    *(double *)local_48[1] = (double)fStack_58;
    *(double *)*local_48 = (double)auVar15._0_4_;
    *(double *)(*local_48 + 8) = (double)auVar15._4_4_;
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    if ((*param_1 != 0) && (uVar6 = FUN_031e198c(param_1[1],"angularVelocity","",1), 1 < uVar6)) {
      FUN_031e32f0(&local_48,param_1,uVar6);
      auVar15 = *local_48;
      fStack_58 = auVar15._8_4_;
      fStack_54 = auVar15._12_4_;
      if ((local_38 & 1) != 0) {
        plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
        plVar1 = plVar7 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      if ((*param_1 != 0) && (uVar6 = FUN_031e198c(param_1[1],"orientation","",1), 1 < uVar6)) {
        FUN_031e32f0(&local_48,param_1,uVar6);
        auVar16 = *local_48;
        fStack_68 = auVar16._8_4_;
        fStack_64 = auVar16._12_4_;
        if ((local_38 & 1) != 0) {
          plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
          plVar1 = plVar7 + 1;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        if ((*param_1 != 0) &&
           (uVar6 = FUN_031e198c(param_1[1],"angularVelocityLocal","",1), 1 < uVar6)) {
          fVar18 = auVar16._0_4_;
          fVar19 = auVar16._4_4_;
          fVar9 = auVar15._0_4_;
          fVar13 = auVar15._4_4_;
          auVar11 = NEON_ext(auVar16,auVar16,8,1);
          fVar12 = auVar11._4_4_ * auVar11._4_4_;
          fVar8 = fVar12 + -0.5;
          fVar12 = fVar12 + -0.5;
          fVar14 = fStack_58 * fStack_68 + fVar9 * fVar18 + fVar13 * fVar19;
          fVar17 = fStack_58 * fStack_68 + fVar9 * fVar18 + fVar13 * fVar19;
          auVar11 = NEON_ext(auVar16,auVar16,4,1);
          auVar15 = NEON_ext(auVar15,auVar15,4,1);
          auVar16._0_4_ = fVar9 * auVar11._0_4_ - auVar15._0_4_ * fVar18;
          auVar16._4_4_ = fVar13 * auVar11._4_4_ - auVar15._4_4_ * fVar19;
          auVar16._8_4_ = fStack_58 * fVar18 - fVar9 * fStack_68;
          auVar16._12_4_ = fStack_54 * fVar19 - fVar13 * fStack_64;
          auVar15 = NEON_ext(auVar16,auVar16,4,1);
          fVar9 = auVar15._0_4_ * fStack_64 + fVar9 * fVar8 + fVar18 * fVar14;
          fVar13 = auVar15._4_4_ * fStack_64 + fVar13 * fVar12 + fVar19 * fVar17;
          fVar8 = auVar16._0_4_ * fStack_64 + fStack_58 * fVar8 + fStack_68 * fVar14;
          fVar12 = fStack_64 * 0.0 + fStack_54 * fVar12 + fStack_64 * fVar17;
          uVar10 = CONCAT44(fVar13 + fVar13,fVar9 + fVar9);
          FUN_031e32f0(&local_48,param_1,uVar6);
          auVar15._8_4_ = fVar8 + fVar8;
          auVar15._0_8_ = uVar10;
          auVar15._12_4_ = fVar12 + fVar12;
          *(long *)(*local_48 + 8) = auVar15._8_8_;
          *(undefined8 *)*local_48 = uVar10;
          if ((local_38 & 1) != 0) {
            plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
            plVar1 = plVar7 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar7 + 8))();
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


