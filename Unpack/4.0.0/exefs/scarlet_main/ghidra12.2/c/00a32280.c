/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a32280; name: FUN_00a32280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a32280(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  byte bVar17;
  bool bVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined2 local_1d8;
  undefined1 uStack_1d6;
  undefined5 uStack_1d5;
  long *local_1d0;
  long *local_1c8;
  undefined4 local_1ac [5];
  ulong local_198;
  ulong local_158;
  ulong local_118;
  ulong local_d8;
  ulong local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  fVar25 = (float)*param_3;
  fVar23 = (float)((ulong)*param_3 >> 0x20);
  local_90 = CONCAT44(fVar23 + (float)((ulong)_DAT_03caa5d0 >> 0x20),fVar25 + (float)_DAT_03caa5d0);
  uStack_80 = CONCAT44(fVar23 + (float)((ulong)_DAT_03caac80 >> 0x20),fVar25 + (float)_DAT_03caac80)
  ;
  uStack_88 = (ulong)(uint)((float)param_3[1] + (float)_UNK_03caa5d8);
  uStack_78 = (ulong)(uint)((float)param_3[1] + (float)_UNK_03caac88);
  uVar10 = FUN_01fa0340(*param_2,param_2[2],*(undefined1 (*) [16])(param_2 + 4),param_2[6],&local_90
                       );
  if ((uVar10 & 1) == 0) {
    uVar12 = 2;
  }
  else {
    FUN_00c9e664(&local_1d0,*param_1 + 0xe8);
    if (local_1d0 == (long *)0x0) {
      uVar20 = 0;
      fVar25 = 0.0;
    }
    else {
      lVar13 = (**(code **)(*(long *)local_1c8[9] + 0x68))();
      uVar20 = *(undefined8 *)(lVar13 + 0x30);
      fVar25 = (float)*(undefined8 *)(lVar13 + 0x38);
    }
    if (local_1c8 != (long *)0x0) {
      plVar16 = local_1c8 + 5;
      do {
        lVar13 = *plVar16;
        iVar8 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar18) {
          *(int *)plVar16 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_1c8 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x60))();
    }
    puVar5 = PTR_DAT_047d8c00;
    uVar21 = *param_3;
    fVar23 = (float)uVar20 - (float)uVar21;
    fVar24 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
    fVar25 = fVar25 - (float)param_3[1];
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    auVar22._0_4_ = fVar23 + fVar24;
    auVar22._4_4_ = fVar25 + 0.0;
    auVar22._8_4_ = fVar23 + fVar24;
    auVar22._12_4_ = fVar25 + 0.0;
    auVar22 = NEON_ext(auVar22,auVar22,4,1);
    if (auVar22._0_4_ + auVar22._4_4_ <= 900.0) {
      local_198 = 0;
      local_158 = 0;
      local_118 = 0;
      local_d8 = 0;
      local_98 = 0;
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
        FUN_00100190(uVar20,uVar21,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      plVar16 = (long *)PTR_DAT_047d8c10;
      puVar6 = PTR_DAT_047d8c08;
      lVar13 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar13;
      uStack_1d6 = 0;
      local_1d8 = 0;
      iVar8 = FUN_01091754(uVar20,uVar21,*(undefined8 *)(lVar13 + 0x70),0x60042,&local_1d0,5,1,
                           &local_1d8);
      puVar7 = PTR_LAB_047d8d08;
      lVar13 = 0;
      bVar17 = 0;
      do {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100190(puVar7,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar5);
        }
        lVar14 = *(long *)puVar6;
        *plVar16 = lVar14;
        FUN_00ef8598(&local_1d8,*(undefined8 *)(lVar14 + 0x70),local_1ac[lVar13 * 0x10]);
        plVar11 = (long *)CONCAT53(uStack_1d5,CONCAT12(uStack_1d6,local_1d8));
        if (plVar11 != (long *)0x0) {
          lVar14 = plVar11[0xc];
          if (lVar14 != 0) {
            if (*(short *)(lVar14 + 0x1a) == 0) {
              plVar16 = (long *)PTR_DAT_047d8c10;
            }
            else {
              psVar1 = (short *)(lVar14 + 0x1a);
              sVar15 = *(short *)(lVar14 + 0x1a);
              do {
                sVar2 = *psVar1;
                if (sVar2 == sVar15) {
                  cVar3 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar18) {
                    *psVar1 = sVar15 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_00a324f0;
                  bVar18 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00a324f0:
                  bVar18 = false;
                }
                if (bVar18) {
                  lVar14 = *(long *)(lVar14 + 0x10);
                  if (lVar14 != 0) {
                    puVar19 = *(undefined1 **)(lVar14 + 0x340);
                    plVar16 = *(long **)(lVar14 + 0x358);
                    if (plVar16 == (long *)0x0) {
                      bVar18 = puVar19 == &DAT_93a017d496a6d000 || puVar19 == (undefined1 *)*param_4
                      ;
                    }
                    else {
                      (**(code **)(*plVar16 + 0x18))(plVar16);
                      bVar18 = puVar19 == &DAT_93a017d496a6d000 || puVar19 == (undefined1 *)*param_4
                      ;
                      (**(code **)(*plVar16 + 0x20))(plVar16);
                    }
                    bVar17 = bVar17 + bVar18;
                    (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
                    plVar11 = (long *)CONCAT53(uStack_1d5,CONCAT12(uStack_1d6,local_1d8));
                  }
                  break;
                }
                sVar15 = sVar2;
              } while (sVar2 != 0);
              plVar16 = (long *)PTR_DAT_047d8c10;
              if (plVar11 == (long *)0x0) goto LAB_00a32468;
            }
          }
          lVar14 = plVar11[6];
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar18) {
              *psVar1 = sVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))();
          }
          else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
LAB_00a32468:
        puVar4 = PTR_DAT_047d1a08;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 5);
      if ((local_98 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_98 - 1,0);
      }
      if ((local_d8 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,local_d8 - 1,0);
      }
      if ((local_118 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,local_118 - 1,0);
      }
      if ((local_158 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,local_158 - 1,0);
      }
      if ((local_198 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,local_198 - 1,0);
      }
      uVar12 = 3;
      if ((int)(iVar8 - (uint)bVar17) < 1) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 1;
    }
  }
  return uVar12;
}


