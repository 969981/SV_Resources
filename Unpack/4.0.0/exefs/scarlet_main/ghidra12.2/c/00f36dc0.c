/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f36dc0; name: FUN_00f36dc0
 */


void FUN_00f36dc0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  long *local_80;
  long local_78;
  long local_70;
  long *local_68;
  long *local_48;
  
  puVar15 = (undefined8 *)PTR_DAT_047d38f8;
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar12) {
    bVar5 = true;
LAB_00f36e04:
    plVar13 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x20,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      local_78 = 0;
      local_70 = 0;
      local_88 = (undefined8 *)0x0;
      local_80 = (long *)0x0;
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_00f373ac(&local_a8,param_2);
      FUN_00f374e0(&local_88,&local_a8);
      lVar8 = local_a8;
      local_a8 = 0;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar12 = FUN_00c4e600();
        iVar3 = *(int *)(lVar12 + 0x12c8);
        iVar7 = iVar3 + 1;
        *(int *)(lVar12 + 0x12c8) = iVar7;
        if (*(int *)(lVar12 + 0x12cc) <= iVar3) {
          *(int *)(lVar12 + 0x12cc) = iVar7;
        }
        uVar10 = (**(code **)(*local_a0 + 0xf8))(local_a0);
        if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*local_a0 + 0x18))(local_a0,lVar8,uStack_98,local_90);
        }
        else {
          FUN_00c48fe8(local_a0,lVar8,uStack_98,local_90);
        }
        lVar8 = FUN_00c4e600();
        iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar13 = (long *)FUN_00c4e600();
          if (plVar13[600] != 0) {
            local_68 = plVar13 + plVar13[600] * 3;
            local_48 = plVar13;
            FUN_00c4ea30(&local_48,&local_68);
            plVar14 = (long *)*plVar13;
            plVar2 = plVar13;
            if (plVar13[600] != 0) {
              plVar2 = plVar13 + plVar13[600] * 3;
            }
            if (plVar2 == plVar13) {
              uVar16 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
                plVar14 = (long *)*plVar13;
              }
              plVar1 = plVar13 + 3;
              if (plVar2 == plVar1) {
                uVar16 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar6 = (long *)*plVar1 != plVar14;
                if (bVar6) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                  plVar14 = (long *)plVar13[3];
                }
                uVar16 = (ulong)bVar6;
                plVar1 = plVar13 + 6;
                if (plVar2 == plVar1) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 6);
                    plVar14 = (long *)plVar13[6];
                    uVar16 = 2;
                  }
                  plVar1 = plVar13 + 9;
                  if (plVar2 == plVar1) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 9);
                      plVar14 = (long *)plVar13[9];
                      uVar16 = 3;
                    }
                    plVar1 = plVar13 + 0xc;
                    if (plVar2 == plVar1) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xc);
                        plVar14 = (long *)plVar13[0xc];
                        uVar16 = 4;
                      }
                      plVar1 = plVar13 + 0xf;
                      if (plVar2 == plVar1) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))
                                    (plVar14,plVar13 + uVar16 * 3,plVar13 + 0xf);
                          plVar14 = (long *)plVar13[0xf];
                          uVar16 = 5;
                        }
                        uVar10 = 6;
                        for (plVar1 = plVar13 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar1);
                            plVar14 = (long *)*plVar1;
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
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + uVar10 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      puVar15 = (undefined8 *)PTR_DAT_047d38f8;
      if (local_88 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar11 = param_2[3];
      puVar9[1] = param_2[1];
      puVar9[3] = uVar11;
      uVar11 = *param_2;
      puVar9[2] = param_2[2];
      *puVar9 = uVar11;
      local_78 = 0x20;
      local_70 = 0x10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      local_88 = puVar9;
      local_80 = plVar13;
    }
    param_1[2] = local_78;
    param_1[3] = local_70;
    *param_1 = (long)local_88;
    param_1[1] = (long)local_80;
    if (!bVar5) {
      *puVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar15 + 1));
    }
    return;
  }
  uVar11 = nn::os::GetCurrentThread();
  while (*puVar15 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar15,0x10);
    if (bVar5) {
      *puVar15 = uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00f36ef4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)((long)puVar15 + 8));
  do {
    if (*puVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)puVar15 + 8));
        while (*puVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar5) {
            *puVar15 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f36ef4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar15,0x10);
    if (bVar5) {
      *puVar15 = uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f36ef4:
  bVar5 = false;
  goto LAB_00f36e04;
}


