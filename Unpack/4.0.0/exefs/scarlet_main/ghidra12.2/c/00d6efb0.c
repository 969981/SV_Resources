/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6efb0; name: FUN_00d6efb0
 */


void FUN_00d6efb0(undefined8 param_1,undefined1 (*param_2) [16])

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar8 = (long *)FUN_00d6f3b8();
  lVar11 = *plVar8;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d6f02c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6f02c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar11 + 0x10) == 0) {
          return;
        }
        local_80 = 0x1eb774d1eef8fbe2;
        pcStack_78 = "OverrideRimColor";
        plVar8 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
        local_70 = 0x10;
        local_68 = (long *)0x0;
        auVar7 = *param_2;
        local_b0 = 0;
        local_a8 = (long *)0x0;
        local_a0 = &DAT_afc4d6c05abef19e;
        pcStack_98 = "default";
        local_90 = 7;
        local_88 = (long *)0x0;
        local_c0 = &DAT_cbf29ce484222645;
        puStack_b8 = &DAT_03c886bc;
        uVar9 = FUN_01e0d238(plVar8);
        if ((uVar9 & 1) != 0) {
          puVar10 = (undefined8 *)FUN_00cb7028(plVar8,&local_a0);
          plVar13 = (long *)*puVar10;
          if (plVar13 != (long *)0x0) {
            plVar2 = plVar13 + 5;
            do {
              lVar11 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)lVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            auVar14 = NEON_ext(auVar7,auVar7,8,1);
            uStack_58 = auVar14._0_8_;
            local_60 = auVar7._0_8_;
            FUN_01e16e74(plVar13,&local_80,&local_60,&local_c0);
            do {
              lVar11 = *plVar2;
              iVar6 = (int)lVar11 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
            else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_80 = 0xc48fa98e41e54f54;
        pcStack_78 = "OverrideRimPower";
        local_70 = 0x10;
        local_68 = (long *)0x0;
        local_a0 = &DAT_afc4d6c05abef19e;
        pcStack_98 = "default";
        local_90 = 7;
        local_88 = (long *)0x0;
        local_c0 = &DAT_cbf29ce484222645;
        puStack_b8 = &DAT_03c886bc;
        local_b0 = 0;
        local_a8 = (long *)0x0;
        FUN_01e16f20(plVar8,&local_80,param_2 + 1,&local_a0,&local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_80 = 0xe808e7d9bfa5f320;
        pcStack_78 = "OverrideRimIntensity";
        local_70 = 0x14;
        local_68 = (long *)0x0;
        local_a0 = &DAT_afc4d6c05abef19e;
        pcStack_98 = "default";
        local_90 = 7;
        local_88 = (long *)0x0;
        local_c0 = &DAT_cbf29ce484222645;
        puStack_b8 = &DAT_03c886bc;
        local_b0 = 0;
        local_a8 = (long *)0x0;
        FUN_01e16f20(plVar8,&local_80,param_2[1] + 4,&local_a0,&local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_80 = 0x13186c8477804a3f;
        pcStack_78 = "OverrideRimWeight";
        local_70 = 0x11;
        local_68 = (long *)0x0;
        local_a0 = &DAT_afc4d6c05abef19e;
        pcStack_98 = "default";
        local_90 = 7;
        local_88 = (long *)0x0;
        local_c0 = &DAT_cbf29ce484222645;
        puStack_b8 = &DAT_03c886bc;
        local_b0 = 0;
        local_a8 = (long *)0x0;
        FUN_01e16f20(plVar8,&local_80,param_2[1] + 8,&local_a0,&local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        (**(code **)(*plVar8 + 0x60))(plVar8);
        return;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


