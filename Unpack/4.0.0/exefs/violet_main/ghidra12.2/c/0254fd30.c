/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0254fd30; name: FUN_0254fd30
 */


void FUN_0254fd30(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long *plVar15;
  ulong uVar16;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  puVar5 = PTR_DAT_047d38f8;
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar12) {
    bVar14 = true;
LAB_0254fd70:
    puVar6 = PTR_DAT_047d3920;
    FUN_025505f0(&local_90,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8));
    if (local_90 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_025505f0(&local_b0,*(undefined8 *)(*(long *)puVar6 + 8));
      FUN_00f6b9b0(&local_90,&local_b0);
      lVar8 = local_b0;
      local_b0 = 0;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar12 = FUN_00c4e600();
        iVar3 = *(int *)(lVar12 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar12 + 0x12c8) = iVar1;
        if (*(int *)(lVar12 + 0x12cc) <= iVar3) {
          *(int *)(lVar12 + 0x12cc) = iVar1;
        }
        uVar10 = (**(code **)(*local_a8 + 0xf8))(local_a8);
        if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*local_a8 + 0x18))(local_a8,lVar8,uStack_a0,local_98);
        }
        else {
          FUN_00c48fe8(local_a8,lVar8,uStack_a0,local_98);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar11 = (long *)FUN_00c4e600();
          if (plVar11[600] != 0) {
            local_70 = plVar11 + plVar11[600] * 3;
            plStack_68 = plVar11;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar13 = (long *)*plVar11;
            plVar2 = plVar11;
            if (plVar11[600] != 0) {
              plVar2 = plVar11 + plVar11[600] * 3;
            }
            if (plVar2 == plVar11) {
              uVar16 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar11 + 0xd0))();
              if ((long *)*plVar11 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11);
                plVar13 = (long *)*plVar11;
              }
              plVar15 = plVar11 + 3;
              if (plVar2 == plVar15) {
                uVar16 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                bVar7 = (long *)*plVar15 != plVar13;
                if (bVar7) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11 + 3);
                  plVar13 = (long *)plVar11[3];
                }
                uVar16 = (ulong)bVar7;
                plVar15 = plVar11 + 6;
                if (plVar2 == plVar15) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar16 * 3,plVar11 + 6);
                    plVar13 = (long *)plVar11[6];
                    uVar16 = 2;
                  }
                  plVar15 = plVar11 + 9;
                  if (plVar2 == plVar15) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar16 * 3,plVar11 + 9);
                      plVar13 = (long *)plVar11[9];
                      uVar16 = 3;
                    }
                    plVar15 = plVar11 + 0xc;
                    if (plVar2 == plVar15) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar15 + 0xd0))();
                      if ((long *)*plVar15 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar16 * 3,plVar11 + 0xc);
                        plVar13 = (long *)plVar11[0xc];
                        uVar16 = 4;
                      }
                      plVar15 = plVar11 + 0xf;
                      if (plVar2 == plVar15) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar11 + uVar16 * 3,plVar11 + 0xf);
                          plVar13 = (long *)plVar11[0xf];
                          uVar16 = 5;
                        }
                        uVar10 = 6;
                        for (plVar15 = plVar11 + 0x12; plVar2 != plVar15; plVar15 = plVar15 + 3) {
                          (**(code **)(*(long *)*plVar15 + 0xd0))();
                          if ((long *)*plVar15 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar16 * 3,plVar15);
                            plVar13 = (long *)*plVar15;
                            uVar16 = uVar10;
                          }
                          uVar10 = uVar10 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar16 * 3,plVar11 + uVar10 * 3);
            plVar11[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    param_1[2] = lStack_80;
    param_1[3] = local_78;
    *param_1 = local_90;
    param_1[1] = local_88;
    if (!bVar14) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    return;
  }
  uVar9 = nn::os::GetCurrentThread();
  while (*(long *)puVar5 == 0) {
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar14) {
      *(undefined8 *)puVar5 = uVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0254fe4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
  do {
    if (*(long *)puVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        while (*(long *)puVar5 == 0) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar14) {
            *(undefined8 *)puVar5 = uVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0254fe4c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar14) {
      *(undefined8 *)puVar5 = uVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0254fe4c:
  bVar14 = false;
  goto LAB_0254fd70;
}


