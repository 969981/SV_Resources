/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019462fc; name: FUN_019462fc
 */


void FUN_019462fc(long param_1,short *param_2)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 *local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined1 local_78;
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  char *local_58;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  sVar7 = param_2[1];
  sVar4 = *param_2;
  FUN_01946750(auStack_60,(char)sVar7);
  psVar13 = *(short **)(param_1 + 0x108);
  psVar3 = *(short **)(param_1 + 0x110);
  if ((psVar13 != psVar3) && (*psVar13 != sVar4)) {
    do {
      psVar13 = psVar13 + 0x20;
      if (psVar3 == psVar13) {
        psVar13 = psVar3;
        goto LAB_01946364;
      }
    } while (*psVar13 != sVar4);
  }
LAB_01946364:
  if (psVar3 == psVar13) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    lVar11 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = lVar11;
    if (lVar11 != 0) {
      local_b0 = &DAT_b1686d3e6def5684;
      local_a8 = "playables";
      local_a0 = 9;
      local_98 = (long *)0x0;
      FUN_00f7176c(&local_68,lVar11,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        if (*local_58 != '\0') {
          FUN_01050078(&local_70,auStack_60);
          plVar8 = local_68;
          if (local_70 != (long *)0x0) {
            local_b0 = (undefined1 *)CONCAT62(local_b0._2_6_,sVar4);
            local_a8 = (char *)0x0;
            local_a0 = 0;
            local_98 = (long *)CONCAT71(local_98._1_7_,(char)sVar7);
            local_40 = (undefined8 *)0x0;
            uStack_38 = 0;
            FUN_00c43ef0(&local_40,local_68 + 6);
            local_90 = 0;
            uStack_88 = 0;
            plVar2 = (long *)0x0;
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 5;
            }
            if ((long *)local_40[2] == plVar2) {
              FUN_00e29918(&local_90,&local_40);
            }
            puVar9 = local_40;
            if (local_40 != (undefined8 *)0x0) {
              psVar13 = (short *)(local_40 + 3);
              do {
                sVar4 = *psVar13;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar13,0x10);
                if (bVar6) {
                  *psVar13 = sVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar4 == 1) {
                piVar1 = (int *)((long)local_40 + 0x1c);
                do {
                  iVar10 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_18 = *puVar9;
                  FUN_00c44438(lVar11 + 0x8040,&local_18);
                }
              }
              else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            local_80 = local_70;
            if (local_70 != (long *)0x0) {
              lVar11 = local_70[6];
              if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar13 = (short *)(lVar11 + 0x1a);
              do {
                sVar4 = *psVar13;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar13,0x10);
                if (bVar6) {
                  *psVar13 = sVar4 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar4 == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                *(undefined8 *)(lVar11 + 8) = uVar12;
                *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
              }
              else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
            }
            local_78 = 0;
            FUN_019466f4(param_1 + 0x108,&local_b0);
            FUN_01946c30(&local_b0);
            FUN_015b9d10(param_1);
            if (local_70 != (long *)0x0) {
              lVar11 = local_70[6];
              psVar13 = (short *)(lVar11 + 0x1a);
              do {
                sVar4 = *psVar13;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar13,0x10);
                if (bVar6) {
                  *psVar13 = sVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar4 == 1) {
                *(undefined8 *)(lVar11 + 0x10) = 0;
                (**(code **)(*local_70 + 0x50))();
              }
              else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          }
          if (local_68 == (long *)0x0) goto LAB_019464bc;
        }
        (**(code **)(*local_68 + 0x60))();
      }
    }
  }
LAB_019464bc:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


