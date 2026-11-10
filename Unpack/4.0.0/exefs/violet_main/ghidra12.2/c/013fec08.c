/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fec08; name: FUN_013fec08
 */


void FUN_013fec08(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *local_a0;
  ulong local_98;
  long *local_78 [2];
  long *local_68;
  
  if (*param_2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar19 = *(long *)(*param_2 + 0x10);
    lVar10 = 0;
    if (lVar19 != 0) {
      lVar10 = lVar19 + -0x28;
    }
  }
  local_78[0] = (long *)CONCAT44(local_78[0]._4_4_,0x80048180);
  lVar10 = FUN_0110b210(lVar10,*(undefined8 *)(lVar10 + 8),local_78);
  *(long *)PTR_DAT_047d5280 = lVar10;
  plVar20 = *(long **)(lVar10 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_013ff468:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x78,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_01177ab4();
  *plVar11 = (long)&PTR_FUN_045604a8;
  plVar11[4] = (long)&PTR_LAB_04560540;
  plVar11[5] = (long)&DAT_04560590;
  plVar16 = plVar11 + 0xb;
  *plVar16 = 0;
  lVar19 = plVar11[10];
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  *(undefined4 *)(plVar11 + 9) = 8;
  if ((lVar19 != 0) && ((*(char *)(lVar19 + 0x58) != '\t' || (*(char *)(lVar19 + 0x59) != '\t')))) {
    uVar6 = *(undefined2 *)(lVar19 + 0x58);
    plVar21 = (long *)(lVar19 + 0x38);
    *(undefined2 *)(lVar19 + 0x58) = 0x909;
    if (*(long *)(lVar19 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(lVar19 + 0x48),plVar21);
    }
    (**(code **)(*plVar21 + 0x20))(plVar21,uVar6);
  }
  plVar21 = (long *)plVar11[1];
  puVar12 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  if (puVar12 == (undefined8 *)0x0) {
    plVar21 = (long *)0x0;
    lVar23 = 0;
    lVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_013ff468;
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar21;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    *puVar12 = plVar11;
    puVar12[2] = 0;
    if (*(long *)(plVar11[8] + 0xe8) == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(*(long *)(plVar11[8] + 0xe8) + 0x48);
    }
    plVar13 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x28))((undefined8 *)(lVar23 + 0x28));
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar9 != 0)) {
      uVar17 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar17;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)PTR_DAT_047d6528) goto LAB_013fee08;
    }
    lVar23 = 0;
LAB_013fee08:
    puVar12[1] = lVar23;
    lVar23 = 0x20;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    lVar19 = 8;
  }
  lVar22 = *plVar16;
  *plVar16 = (long)puVar12;
  if (lVar22 == 0) {
    plVar11[0xc] = (long)plVar21;
    plVar11[0xd] = lVar23;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar5 = *(int *)(lVar14 + 0x12c8);
    iVar9 = iVar5 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar9;
    if (*(int *)(lVar14 + 0x12cc) <= iVar5) {
      *(int *)(lVar14 + 0x12cc) = iVar9;
    }
    plVar16 = (long *)plVar11[0xc];
    lVar14 = plVar11[0xd];
    lVar24 = plVar11[0xe];
    uVar15 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar15 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar22,lVar14,lVar24);
    }
    else {
      FUN_00c48fe8(plVar16,lVar22,lVar14,lVar24);
    }
    lVar22 = FUN_00c4e600();
    iVar9 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar16 = (long *)FUN_00c4e600();
      if (plVar16[600] != 0) {
        local_68 = plVar16 + plVar16[600] * 3;
        local_78[0] = plVar16;
        FUN_00c4ea30(local_78,&local_68);
        plVar25 = (long *)*plVar16;
        plVar13 = plVar16;
        if (plVar16[600] != 0) {
          plVar13 = plVar16 + plVar16[600] * 3;
        }
        if (plVar13 == plVar16) {
          local_98 = 0;
          uVar15 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar16 + 0xd0))();
          if ((long *)*plVar16 != plVar25) {
            (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16);
            plVar25 = (long *)*plVar16;
          }
          plVar3 = plVar16 + 3;
          if (plVar13 == plVar3) {
            local_98 = 0;
            uVar15 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar8 = (long *)*plVar3 != plVar25;
            if (bVar8) {
              (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16 + 3);
              plVar25 = (long *)plVar16[3];
            }
            local_98 = (ulong)bVar8;
            plVar3 = plVar16 + 6;
            if (plVar13 == plVar3) {
              uVar15 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar25) {
                (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,plVar16 + 6);
                plVar25 = (long *)plVar16[6];
                local_98 = 2;
              }
              plVar3 = plVar16 + 9;
              if (plVar13 == plVar3) {
                uVar15 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar25) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,plVar16 + 9);
                  plVar25 = (long *)plVar16[9];
                  local_98 = 3;
                }
                plVar3 = plVar16 + 0xc;
                if (plVar13 == plVar3) {
                  uVar15 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar25) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,plVar16 + 0xc);
                    plVar25 = (long *)plVar16[0xc];
                    local_98 = 4;
                  }
                  plVar3 = plVar16 + 0xf;
                  if (plVar13 == plVar3) {
                    uVar15 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,plVar16 + 0xf);
                      plVar25 = (long *)plVar16[0xf];
                      local_98 = 5;
                    }
                    local_a0 = plVar16 + 0x12;
                    uVar15 = 6;
                    if (plVar13 != local_a0) {
                      do {
                        (**(code **)(*(long *)*local_a0 + 0xd0))();
                        if ((long *)*local_a0 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,local_a0);
                          plVar25 = (long *)*local_a0;
                          local_98 = uVar15;
                        }
                        local_a0 = local_a0 + 3;
                        uVar15 = uVar15 + 1;
                      } while (plVar13 != local_a0);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_98 * 3,plVar16 + uVar15 * 3);
        plVar16[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
    plVar11[0xc] = (long)plVar21;
    plVar11[0xd] = lVar23;
  }
  plVar11[0xe] = lVar19;
  plVar11[1] = (long)plVar20;
  plVar11[2] = (long)plVar11;
  *(undefined4 *)(plVar11 + 3) = 0x80078;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = plVar11[6];
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar4 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar17;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  *(undefined8 *)PTR_DAT_047d5280 = 0;
  (**(code **)(*plVar11 + 0x18))(local_78,plVar11);
  *param_1 = 0;
  param_1[1] = 0;
  if ((long *)local_78[0][2] == plVar11 + 5) {
    FUN_013ff5cc(param_1,local_78);
  }
  plVar20 = local_78[0];
  if (local_78[0] != (long *)0x0) {
    plVar16 = local_78[0] + 3;
    do {
      sVar4 = (short)*plVar16;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *(short *)plVar16 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_68 = (long *)*plVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_68);
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
  lVar10 = plVar11[6];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar4 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


