/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a476c; name: FUN_014a476c
 */


void FUN_014a476c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  long *plVar15;
  code *local_1a0;
  code *local_198;
  code *local_190;
  undefined1 *local_188;
  long alStack_180 [13];
  undefined8 *local_118 [2];
  undefined8 *local_108 [2];
  char *local_f8 [5];
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  
  puVar6 = PTR_DAT_047d3910;
  puVar5 = PTR_DAT_047d3908;
  local_f8[0] = (char *)0x12ef3744117a790e;
  local_f8[1] = "Button_22";
  local_f8[2] = (char *)0x9;
  local_f8[3] = (char *)0x12ef3844117a7ac1;
  local_f8[4] = "Button_23";
  uStack_d0 = 9;
  local_c8 = 0x12ef3944117a7c74;
  pcStack_c0 = "Button_24";
  local_a8 = "Button_25";
  uStack_a0 = 9;
  local_b8 = 9;
  uStack_b0 = 0x12ef3a44117a7e27;
  local_98 = 0x12ef3b44117a7fda;
  pcStack_90 = "Button_26";
  lVar14 = 0;
  local_88 = 9;
  uStack_80 = 0x12ef3c44117a818d;
  local_78 = "Button_27";
  uStack_70 = 9;
  plVar15 = (long *)PTR_DAT_047d3918;
  do {
    FUN_01360a3c(local_118,*(undefined8 *)(param_1 + 0x30));
    FUN_01096e28(&local_1a0,local_f8 + lVar14 * 3);
    FUN_0119f2f4(local_108,local_118,&local_1a0);
    if (local_1a0 != (code *)0x0) {
      (**(code **)(*(long *)local_1a0 + 0x20))();
    }
    puVar7 = local_118[0];
    if (local_118[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_118[0] + 3);
      do {
        sVar13 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_118[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar5);
          }
          lVar10 = *(long *)puVar6;
          *plVar15 = lVar10;
          local_1a0 = (code *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_1a0);
        }
      }
      else if (sVar13 == 0) goto LAB_014a4ae0;
    }
    if (local_108[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_108[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_108[0] + 0x1a);
        sVar13 = *(short *)((long)local_108[0] + 0x1a);
LAB_014a4978:
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_014a499c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014a499c:
          bVar12 = false;
        }
        if (!bVar12) break;
        lVar10 = local_108[0][2];
        if (lVar10 != 0) {
          pcVar11 = *(code **)(lVar10 + 0x400);
          local_1a0 = FUN_01deaec8;
          local_198 = FUN_00a6cc40;
          local_190 = FUN_00a6cc44;
          local_188 = &LAB_00a6cc50;
          alStack_180[0] = param_1;
          if (pcVar11 == (code *)0x0) {
LAB_014a4a1c:
            (*local_190)(alStack_180,lVar10 + 0x418);
            *(undefined1 **)(lVar10 + 0x410) = local_188;
            *(undefined8 *)(lVar10 + 0x3f8) = local_1a0;
            *(code **)(lVar10 + 0x400) = local_198;
            *(code **)(lVar10 + 0x408) = local_190;
          }
          else {
            *(undefined8 *)(lVar10 + 0x408) = 0;
            *(undefined8 *)(lVar10 + 0x410) = 0;
            *(undefined8 *)(lVar10 + 0x3f8) = 0;
            *(undefined8 *)(lVar10 + 0x400) = 0;
            (*pcVar11)(lVar10 + 0x418);
            if (local_190 != (code *)0x0) goto LAB_014a4a1c;
          }
          pcVar11 = local_198;
          if (local_198 != (code *)0x0) {
            local_190 = (code *)0x0;
            local_188 = (undefined1 *)0x0;
            local_1a0 = (code *)0x0;
            local_198 = (code *)0x0;
            (*pcVar11)(alStack_180);
          }
          lVar9 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
LAB_014a4a80:
      puVar7 = local_108[0];
      plVar15 = (long *)PTR_DAT_047d3918;
      if (local_108[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_108[0] + 3);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          piVar2 = (int *)((long)local_108[0] + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar15 = (long *)PTR_DAT_047d3918;
          if (iVar8 != -1) {
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar5);
            }
            plVar15 = (long *)PTR_DAT_047d3918;
            lVar10 = *(long *)puVar6;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_1a0 = (code *)*puVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_1a0);
          }
        }
        else {
          plVar15 = (long *)PTR_DAT_047d3918;
          if (sVar13 == 0) {
LAB_014a4ae0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 6) {
      return;
    }
  } while( true );
  sVar13 = sVar3;
  if (sVar3 == 0) goto LAB_014a4a80;
  goto LAB_014a4978;
}


