/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245a930; name: FUN_0245a930
 */


void FUN_0245a930(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  long *local_48;
  
  puVar14 = (undefined8 *)PTR_DAT_047d38f8;
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar13) {
    bVar6 = true;
LAB_0245a970:
    puVar7 = PTR_DAT_047d3920;
    FUN_0245af40(&local_88,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8));
    if (local_88 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_0245af40(&local_a8,*(undefined8 *)(*(long *)puVar7 + 8));
      FUN_00f23a84(&local_88,&local_a8);
      lVar9 = local_a8;
      local_a8 = 0;
      if (lVar9 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar4 = *(int *)(lVar13 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar1;
        if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
          *(int *)(lVar13 + 0x12cc) = iVar1;
        }
        uVar11 = (**(code **)(*local_a0 + 0xf8))(local_a0);
        if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*local_a0 + 0x18))(local_a0,lVar9,uStack_98,local_90);
        }
        else {
          FUN_00c48fe8(local_a0,lVar9,uStack_98,local_90);
        }
        lVar9 = FUN_00c4e600();
        iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
        *(int *)(lVar9 + 0x12c8) = iVar1;
        puVar14 = (undefined8 *)PTR_DAT_047d38f8;
        if (iVar1 == 0) {
          plVar12 = (long *)FUN_00c4e600();
          if (plVar12[600] != 0) {
            local_68 = plVar12 + plVar12[600] * 3;
            local_48 = plVar12;
            FUN_00c4ea30(&local_48,&local_68);
            plVar15 = (long *)*plVar12;
            plVar3 = plVar12;
            if (plVar12[600] != 0) {
              plVar3 = plVar12 + plVar12[600] * 3;
            }
            if (plVar3 == plVar12) {
              uVar16 = 0;
              uVar11 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar12,plVar12);
                plVar15 = (long *)*plVar12;
              }
              plVar2 = plVar12 + 3;
              if (plVar3 == plVar2) {
                uVar16 = 0;
                uVar11 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar8 = (long *)*plVar2 != plVar15;
                if (bVar8) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar12,plVar12 + 3);
                  plVar15 = (long *)plVar12[3];
                }
                uVar16 = (ulong)bVar8;
                plVar2 = plVar12 + 6;
                if (plVar3 == plVar2) {
                  uVar11 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar16 * 3,plVar12 + 6);
                    plVar15 = (long *)plVar12[6];
                    uVar16 = 2;
                  }
                  plVar2 = plVar12 + 9;
                  if (plVar3 == plVar2) {
                    uVar11 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar16 * 3,plVar12 + 9);
                      plVar15 = (long *)plVar12[9];
                      uVar16 = 3;
                    }
                    plVar2 = plVar12 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar11 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar16 * 3,plVar12 + 0xc);
                        plVar15 = (long *)plVar12[0xc];
                        uVar16 = 4;
                      }
                      plVar2 = plVar12 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar11 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))
                                    (plVar15,plVar12 + uVar16 * 3,plVar12 + 0xf);
                          plVar15 = (long *)plVar12[0xf];
                          uVar16 = 5;
                        }
                        uVar11 = 6;
                        for (plVar2 = plVar12 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar15) {
                            (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar16 * 3,plVar2);
                            plVar15 = (long *)*plVar2;
                            uVar16 = uVar11;
                          }
                          uVar11 = uVar11 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar16 * 3,plVar12 + uVar11 * 3);
            plVar12[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
          puVar14 = (undefined8 *)PTR_DAT_047d38f8;
        }
      }
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    param_1[2] = lStack_78;
    param_1[3] = local_70;
    *param_1 = local_88;
    param_1[1] = local_80;
    if (!bVar6) {
      *puVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar14 + 1));
    }
    return;
  }
  uVar10 = nn::os::GetCurrentThread();
  while (*puVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar6) {
      *puVar14 = uVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0245aa4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
  do {
    if (*puVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
        while (*puVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar6) {
            *puVar14 = uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0245aa4c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar6) {
      *puVar14 = uVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0245aa4c:
  bVar6 = false;
  goto LAB_0245a970;
}


