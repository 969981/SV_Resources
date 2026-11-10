/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d78ac0; name: FUN_00d78ac0
 */


void FUN_00d78ac0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  char local_90;
  undefined7 uStack_8f;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  
  puVar4 = PTR_DAT_047d38f8;
  local_68 = (long *)*param_2;
  uStack_60 = param_2[1];
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar12) {
    bVar6 = true;
LAB_00d78b04:
    plVar13 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x10,8);
    if (puVar9 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_00d79080(&local_90,&local_68);
      puVar9 = (undefined8 *)CONCAT71(uStack_8f,local_90);
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
      plVar13 = local_88;
      uVar10 = local_78;
      plVar16 = local_80;
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
      *puVar9 = local_68;
      puVar9[1] = uStack_60;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      uVar10 = 8;
      plVar16 = (long *)0x10;
    }
    if (!bVar6) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    local_90 = '\x01';
    local_88 = puVar9;
    local_80 = plVar13;
    local_78 = plVar16;
    local_70 = uVar10;
    FUN_00c5df00(param_1,&local_90);
    plVar13 = local_88;
    if ((local_90 == '\x01') && (local_88 = (long *)0x0, plVar13 != (undefined8 *)0x0)) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      uVar5 = local_70;
      uVar10 = local_78;
      plVar16 = local_80;
      iVar2 = *(int *)(lVar8 + 0x12c8);
      iVar7 = iVar2 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
        *(int *)(lVar8 + 0x12cc) = iVar7;
      }
      uVar11 = (**(code **)(*local_80 + 0xf8))(local_80);
      if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar13,uVar10,uVar5);
      }
      else {
        FUN_00c48fe8(plVar16,plVar13,uVar10,uVar5);
      }
      lVar8 = FUN_00c4e600();
      iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_58 = plVar13 + plVar13[600] * 3;
          local_68 = plVar13;
          FUN_00c4ea30(&local_68,&local_58);
          plVar14 = (long *)*plVar13;
          plVar16 = plVar13;
          if (plVar13[600] != 0) {
            plVar16 = plVar13 + plVar13[600] * 3;
          }
          if (plVar16 == plVar13) {
            uVar15 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
              plVar14 = (long *)*plVar13;
            }
            plVar1 = plVar13 + 3;
            if (plVar16 == plVar1) {
              uVar15 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                plVar14 = (long *)plVar13[3];
              }
              uVar15 = (ulong)bVar6;
              plVar1 = plVar13 + 6;
              if (plVar16 == plVar1) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 6);
                  plVar14 = (long *)plVar13[6];
                  uVar15 = 2;
                }
                plVar1 = plVar13 + 9;
                if (plVar16 == plVar1) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 9);
                    plVar14 = (long *)plVar13[9];
                    uVar15 = 3;
                  }
                  plVar1 = plVar13 + 0xc;
                  if (plVar16 == plVar1) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 0xc);
                      plVar14 = (long *)plVar13[0xc];
                      uVar15 = 4;
                    }
                    plVar1 = plVar13 + 0xf;
                    if (plVar16 == plVar1) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + 0xf);
                        plVar14 = (long *)plVar13[0xf];
                        uVar15 = 5;
                      }
                      uVar11 = 6;
                      for (plVar1 = plVar13 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar1);
                          plVar14 = (long *)*plVar1;
                          uVar15 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar15 * 3,plVar13 + uVar11 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
    }
    return;
  }
  uVar10 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar6) {
      *(undefined8 *)puVar4 = uVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00d78be8;
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
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *(undefined8 *)puVar4 = uVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d78be8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar6) {
      *(undefined8 *)puVar4 = uVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d78be8:
  bVar6 = false;
  goto LAB_00d78b04;
}


