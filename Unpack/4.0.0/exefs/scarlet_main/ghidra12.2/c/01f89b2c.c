/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f89b2c; name: FUN_01f89b2c
 */


void FUN_01f89b2c(long param_1)

{
  short *psVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  long *local_50;
  long *local_48;
  
  lVar10 = 0x311;
  if (*(char *)(param_1 + 0x310) == '\0') {
    lVar10 = 0x312;
  }
  cVar3 = *(char *)(param_1 + lVar10);
  if (*(char *)(param_1 + 0x313) != cVar3) {
    if (*(char *)(param_1 + 0x313) == '\0') {
LAB_01f89b88:
      *(char *)(param_1 + 0x313) = cVar3;
    }
    else {
      if (((*PTR_DAT_047d47a0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d47a0), iVar8 != 0)) {
        FUN_00100190(&LAB_02a42184,PTR_DAT_047d47a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d47a0);
      }
      lVar10 = *(long *)PTR_DAT_047d47a8;
      *(long *)PTR_DAT_047d47b0 = lVar10;
      lVar10 = *(long *)(lVar10 + 0x48);
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
LAB_01f89bd4:
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01f89bf8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01f89bf8:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x01f89c00;
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + -0x28);
          FUN_00c9e664(&local_50,param_1 + 0xe8);
          lVar9 = (**(code **)(*(long *)local_48[9] + 0x68))();
          auVar14 = *(undefined1 (*) [16])(lVar9 + 0x30);
          lVar9 = (**(code **)(*plVar12 + 0x68))(plVar12);
          auVar7 = *(undefined1 (*) [16])(lVar9 + 0x30);
          fVar17 = *(float *)(param_1 + 0x120);
          if (local_48 != (long *)0x0) {
            plVar2 = local_48 + 5;
            do {
              lVar9 = *plVar2;
              iVar8 = (int)lVar9 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_48 + 0x10))();
            }
            else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          fVar13 = auVar14._0_4_ - auVar7._0_4_;
          fVar15 = auVar14._4_4_ - auVar7._4_4_;
          fVar16 = auVar14._8_4_ - auVar7._8_4_;
          fVar13 = fVar13 * fVar13;
          fVar15 = fVar15 * fVar15;
          fVar16 = fVar16 * fVar16;
          auVar14._0_4_ = fVar13 + fVar15;
          auVar14._4_4_ = fVar16 + 0.0;
          auVar14._8_4_ = fVar13 + fVar15;
          auVar14._12_4_ = fVar16 + 0.0;
          auVar14 = NEON_ext(auVar14,auVar14,4,1);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x60))();
          }
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          if (auVar14._0_4_ + auVar14._4_4_ < fVar17) {
            return;
          }
          goto LAB_01f89b88;
        }
      }
    }
  }
  return;
code_r0x01f89c00:
  sVar11 = sVar4;
  if (sVar4 == 0) {
    return;
  }
  goto LAB_01f89bd4;
}


