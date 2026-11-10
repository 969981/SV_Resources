/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab7760; name: FUN_01ab7760
 */


undefined8 FUN_01ab7760(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  bool bVar23;
  ulong uVar24;
  long lVar25;
  undefined4 local_b4;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  uVar7 = FUN_00c92df0(param_1,1,0);
  puVar9 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar9 == (undefined8 *)0x0) || (pbVar18 = (byte *)*puVar9, (byte *)*puVar9 == (byte *)0x0))
  {
    if ((*PTR_DAT_047d5790 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d5790);
      pbVar18 = PTR_DAT_047d5798;
      if (iVar8 != 0) {
        *PTR_DAT_047d5798 = 0;
        *(undefined8 *)(pbVar18 + 8) = 0;
        FUN_00100190(&LAB_01bece3c,pbVar18,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5790);
      }
    }
    else {
      pbVar18 = PTR_DAT_047d5798;
    }
  }
  if (((DAT_0480f420 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0480f420), iVar8 != 0)) {
    __cxa_guard_release(&DAT_0480f420);
  }
  if ((1 < *pbVar18) ||
     (puVar20 = *(undefined1 **)(pbVar18 + 8), *(undefined1 **)(pbVar18 + 8) == (undefined1 *)0x0))
  {
    if ((*PTR_DAT_047d57a8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d57a8);
      puVar20 = PTR_DAT_047d57b0;
      if (iVar8 != 0) {
        *PTR_DAT_047d57b0 = 0;
        __cxa_guard_release(PTR_DAT_047d57a8);
      }
    }
    else {
      puVar20 = PTR_DAT_047d57b0;
    }
  }
  puVar4 = PTR_DAT_047d38f8;
  lVar16 = *(long *)PTR_DAT_047d38f8;
  local_b4 = uVar7;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    uVar12 = nn::os::GetCurrentThread();
LAB_01ab7988:
    if (*(long *)puVar4 == 0) goto code_r0x01ab7990;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
    do {
      if (*(long *)puVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
          while (*(long *)puVar4 == 0) {
            cVar3 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar23) {
              *(undefined8 *)puVar4 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01ab7998;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar23) {
        *(undefined8 *)puVar4 = uVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ab7998:
    bVar23 = false;
    goto LAB_01ab77f0;
  }
  bVar23 = true;
LAB_01ab77f0:
  plVar17 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar11 = (undefined4 *)(**(code **)(*plVar17 + 0x10))(plVar17,8,4);
  if (puVar11 == (undefined4 *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_90 = (undefined4 *)0x0;
    local_88 = (long *)0x0;
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    FUN_01ab7fb0(&local_b0,&local_b4,puVar20);
    FUN_01ab80d8(&local_90,&local_b0);
    lVar10 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar16 = FUN_00c4e600();
      iVar2 = *(int *)(lVar16 + 0x12c8);
      iVar8 = iVar2 + 1;
      *(int *)(lVar16 + 0x12c8) = iVar8;
      if (*(int *)(lVar16 + 0x12cc) <= iVar2) {
        *(int *)(lVar16 + 0x12cc) = iVar8;
      }
      uVar14 = (**(code **)(*local_a8 + 0xf8))(local_a8);
      if (((uVar14 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*local_a8 + 0x18))(local_a8,lVar10,uStack_a0,local_98);
      }
      else {
        FUN_00c48fe8(local_a8,lVar10,uStack_a0,local_98);
      }
      lVar10 = FUN_00c4e600();
      iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar17 = (long *)FUN_00c4e600();
        if (plVar17[600] != 0) {
          local_70 = plVar17 + plVar17[600] * 3;
          plStack_68 = plVar17;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar19 = (long *)*plVar17;
          plVar1 = plVar17;
          if (plVar17[600] != 0) {
            plVar1 = plVar17 + plVar17[600] * 3;
          }
          if (plVar1 == plVar17) {
            uVar24 = 0;
            uVar14 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar17 + 0xd0))();
            if ((long *)*plVar17 != plVar19) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar17,plVar17);
              plVar19 = (long *)*plVar17;
            }
            plVar21 = plVar17 + 3;
            if (plVar1 == plVar21) {
              uVar24 = 0;
              uVar14 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar21 + 0xd0))();
              bVar6 = (long *)*plVar21 != plVar19;
              if (bVar6) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar17,plVar17 + 3);
                plVar19 = (long *)plVar17[3];
              }
              uVar24 = (ulong)bVar6;
              plVar21 = plVar17 + 6;
              if (plVar1 == plVar21) {
                uVar14 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar21 + 0xd0))();
                if ((long *)*plVar21 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar17 + 6);
                  plVar19 = (long *)plVar17[6];
                  uVar24 = 2;
                }
                plVar21 = plVar17 + 9;
                if (plVar1 == plVar21) {
                  uVar14 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar21 + 0xd0))();
                  if ((long *)*plVar21 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar17 + 9);
                    plVar19 = (long *)plVar17[9];
                    uVar24 = 3;
                  }
                  plVar21 = plVar17 + 0xc;
                  if (plVar1 == plVar21) {
                    uVar14 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar21 + 0xd0))();
                    if ((long *)*plVar21 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar17 + 0xc);
                      plVar19 = (long *)plVar17[0xc];
                      uVar24 = 4;
                    }
                    plVar21 = plVar17 + 0xf;
                    if (plVar1 == plVar21) {
                      uVar14 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar21 + 0xd0))();
                      if ((long *)*plVar21 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar17 + 0xf);
                        plVar19 = (long *)plVar17[0xf];
                        uVar24 = 5;
                      }
                      uVar14 = 6;
                      for (plVar21 = plVar17 + 0x12; plVar1 != plVar21; plVar21 = plVar21 + 3) {
                        (**(code **)(*(long *)*plVar21 + 0xd0))();
                        if ((long *)*plVar21 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar21);
                          plVar19 = (long *)*plVar21;
                          uVar24 = uVar14;
                        }
                        uVar14 = uVar14 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar17 + uVar24 * 3,plVar17 + uVar14 * 3);
          plVar17[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    if (local_90 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar17;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar11 = local_b4;
    *(undefined *)(puVar11 + 1) = *puVar20;
    local_80 = 8;
    local_78 = 4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_90 = puVar11;
    local_88 = plVar17;
  }
  uVar5 = local_78;
  uVar12 = local_80;
  plVar17 = local_88;
  puVar11 = local_90;
  if (!bVar23) {
    *(undefined8 *)puVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
  }
  puVar9 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar25 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar25;
  lVar16 = *(long *)puVar4;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar16) {
    bVar23 = true;
LAB_01ab78e4:
    if (*(long *)(lVar25 + 0x28) == *(long *)(lVar25 + 0x30)) {
      puVar22 = (undefined1 *)FUN_00d97840(0x40,8);
    }
    else {
      puVar15 = (undefined8 *)(*(long *)(lVar25 + 0x30) + -8);
      puVar22 = (undefined1 *)*puVar15;
      *(undefined8 **)(lVar25 + 0x30) = puVar15;
    }
    if (!bVar23) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    *(undefined4 **)(puVar22 + 8) = puVar11;
    *(long **)(puVar22 + 0x10) = plVar17;
    *(undefined8 *)(puVar22 + 0x18) = uVar12;
    *(undefined8 *)(puVar22 + 0x20) = uVar5;
    *puVar22 = 1;
    *puVar9 = puVar22;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04528f30);
    FUN_00c5e190(param_1,0xfffffffe);
    return 1;
  }
  uVar13 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar3 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar23) {
      *(undefined8 *)puVar4 = uVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01ab79b8;
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
          bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar23) {
            *(undefined8 *)puVar4 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01ab79b8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar23) {
      *(undefined8 *)puVar4 = uVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01ab79b8:
  bVar23 = false;
  goto LAB_01ab78e4;
code_r0x01ab7990:
  cVar3 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar23) {
    *(undefined8 *)puVar4 = uVar12;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ab7998;
  goto LAB_01ab7988;
}


