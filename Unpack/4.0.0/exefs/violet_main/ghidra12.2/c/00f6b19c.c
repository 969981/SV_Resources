/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6b19c; name: FUN_00f6b19c
 */


void FUN_00f6b19c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  void *__dest;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  puVar4 = PTR_DAT_047d38f8;
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    bVar14 = true;
LAB_00f6b1e0:
    plVar11 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,0x10);
    if (__dest == (void *)0x0) {
      local_80 = 0;
      local_78 = 0;
      local_90 = (void *)0x0;
      local_88 = (long *)0x0;
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_00f6b888(&local_b0,PTR_DAT_047df548,param_2);
      FUN_00f6b9b0(&local_90,&local_b0);
      lVar7 = local_b0;
      local_b0 = 0;
      if (lVar7 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar2 = *(int *)(lVar10 + 0x12c8);
        iVar6 = iVar2 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar6;
        if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
          *(int *)(lVar10 + 0x12cc) = iVar6;
        }
        uVar9 = (**(code **)(*local_a8 + 0xf8))(local_a8);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*local_a8 + 0x18))(local_a8,lVar7,uStack_a0,local_98);
        }
        else {
          FUN_00c48fe8(local_a8,lVar7,uStack_a0,local_98);
        }
        lVar7 = FUN_00c4e600();
        iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar11 = (long *)FUN_00c4e600();
          if (plVar11[600] != 0) {
            local_70 = plVar11 + plVar11[600] * 3;
            plStack_68 = plVar11;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar12 = (long *)*plVar11;
            plVar1 = plVar11;
            if (plVar11[600] != 0) {
              plVar1 = plVar11 + plVar11[600] * 3;
            }
            if (plVar1 == plVar11) {
              uVar15 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar11 + 0xd0))();
              if ((long *)*plVar11 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
                plVar12 = (long *)*plVar11;
              }
              plVar13 = plVar11 + 3;
              if (plVar1 == plVar13) {
                uVar15 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                bVar5 = (long *)*plVar13 != plVar12;
                if (bVar5) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
                  plVar12 = (long *)plVar11[3];
                }
                uVar15 = (ulong)bVar5;
                plVar13 = plVar11 + 6;
                if (plVar1 == plVar13) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar15 * 3,plVar11 + 6);
                    plVar12 = (long *)plVar11[6];
                    uVar15 = 2;
                  }
                  plVar13 = plVar11 + 9;
                  if (plVar1 == plVar13) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar15 * 3,plVar11 + 9);
                      plVar12 = (long *)plVar11[9];
                      uVar15 = 3;
                    }
                    plVar13 = plVar11 + 0xc;
                    if (plVar1 == plVar13) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar15 * 3,plVar11 + 0xc);
                        plVar12 = (long *)plVar11[0xc];
                        uVar15 = 4;
                      }
                      plVar13 = plVar11 + 0xf;
                      if (plVar1 == plVar13) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar11 + uVar15 * 3,plVar11 + 0xf);
                          plVar12 = (long *)plVar11[0xf];
                          uVar15 = 5;
                        }
                        uVar9 = 6;
                        for (plVar13 = plVar11 + 0x12; plVar1 != plVar13; plVar13 = plVar13 + 3) {
                          (**(code **)(*(long *)*plVar13 + 0xd0))();
                          if ((long *)*plVar13 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar15 * 3,plVar13);
                            plVar12 = (long *)*plVar13;
                            uVar15 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar15 * 3,plVar11 + uVar9 * 3);
            plVar11[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      if (local_90 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      memcpy(__dest,param_2,0x30);
      local_80 = 0x30;
      local_78 = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      local_90 = __dest;
      local_88 = plVar11;
    }
    param_1[2] = local_80;
    param_1[3] = local_78;
    *param_1 = local_90;
    param_1[1] = local_88;
    if (!bVar14) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar14) {
      *(undefined8 *)puVar4 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f6b2c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
  do {
    if (*(long *)puVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
        while (*(long *)puVar4 == 0) {
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar14) {
            *(undefined8 *)puVar4 = uVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f6b2c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar14) {
      *(undefined8 *)puVar4 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f6b2c4:
  bVar14 = false;
  goto LAB_00f6b1e0;
}


