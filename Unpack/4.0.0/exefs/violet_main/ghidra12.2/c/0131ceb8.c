/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131ceb8; name: FUN_0131ceb8
 */


void FUN_0131ceb8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  short sVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *local_78 [2];
  long *local_68;
  
  FUN_011235fc(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  FUN_01123ad4(local_78,uVar17);
  if ((local_78[0] != (long *)0x0) && (*(short *)((long)local_78[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_78[0] + 0x1a);
    sVar15 = *(short *)((long)local_78[0] + 0x1a);
LAB_0131d47c:
    sVar7 = *psVar2;
    if (sVar7 == sVar15) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_0131d4a0;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0131d4a0:
      bVar9 = false;
    }
    if (!bVar9) goto code_r0x0131d4a8;
    lVar18 = local_78[0][2];
    if (lVar18 != 0) {
      plVar11 = *(long **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar15 = *psVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar15 == 0) goto LAB_0131d234;
      }
      *(long *)(param_1 + 0x80) = lVar18 + -0x28;
      goto LAB_0131cf1c;
    }
  }
LAB_0131cf0c:
  plVar11 = *(long **)(param_1 + 0x80);
  uVar17 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar11 != (long *)0x0) {
    lVar18 = plVar11[6];
    psVar2 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_0131d234;
    uVar17 = 0;
  }
LAB_0131cf1c:
  *(undefined8 *)(param_1 + 0x88) = uVar17;
  if (local_78[0] != (long *)0x0) {
    plVar11 = local_78[0] + 3;
    do {
      sVar15 = (short)*plVar11;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *(short *)plVar11 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = (long *)*local_78[0];
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar18 = *(long *)(param_2 + 0x18);
  if (lVar18 != 0) {
    lVar12 = *(long *)(lVar18 + 0x30);
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar17;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar11 = *(long **)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar18;
  if (plVar11 != (long *)0x0) {
    lVar18 = plVar11[6];
    psVar2 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar15 == 0) {
LAB_0131d234:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0x98,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 0xa8,param_2 + 0x30);
  plVar11 = *(long **)(param_1 + 8);
  lVar18 = (**(code **)(*plVar11 + 0x10))(plVar11,0xe0,8);
  if (lVar18 == 0) {
    plVar11 = (long *)0x0;
    uVar17 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_0131d6e8(lVar18,plVar11,param_3,param_4);
    uVar21 = 0xe0;
    uVar17 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar16 = *(undefined8 **)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar18;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar18 = FUN_00c4e600();
    iVar6 = *(int *)(lVar18 + 0x12c8);
    iVar10 = iVar6 + 1;
    *(int *)(lVar18 + 0x12c8) = iVar10;
    if (*(int *)(lVar18 + 0x12cc) <= iVar6) {
      *(int *)(lVar18 + 0x12cc) = iVar10;
    }
    (**(code **)*puVar16)(puVar16);
    plVar14 = *(long **)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 200);
    uVar19 = *(undefined8 *)(param_1 + 0xd0);
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar16,uVar5,uVar19);
    }
    else {
      FUN_00c48fe8(plVar14,puVar16,uVar5,uVar19);
    }
    lVar18 = FUN_00c4e600();
    iVar10 = *(int *)(lVar18 + 0x12c8) + -1;
    *(int *)(lVar18 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar14 = (long *)FUN_00c4e600();
      if (plVar14[600] != 0) {
        local_68 = plVar14 + plVar14[600] * 3;
        local_78[0] = plVar14;
        FUN_00c4ea30(local_78,&local_68);
        plVar20 = (long *)*plVar14;
        plVar4 = plVar14;
        if (plVar14[600] != 0) {
          plVar4 = plVar14 + plVar14[600] * 3;
        }
        if (plVar4 == plVar14) {
          uVar22 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar14 + 0xd0))();
          if ((long *)*plVar14 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14);
            plVar20 = (long *)*plVar14;
          }
          plVar3 = plVar14 + 3;
          if (plVar4 == plVar3) {
            uVar22 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar9 = (long *)*plVar3 != plVar20;
            if (bVar9) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14 + 3);
              plVar20 = (long *)plVar14[3];
            }
            uVar22 = (ulong)bVar9;
            plVar3 = plVar14 + 6;
            if (plVar4 == plVar3) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar14 + 6);
                plVar20 = (long *)plVar14[6];
                uVar22 = 2;
              }
              plVar3 = plVar14 + 9;
              if (plVar4 == plVar3) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar14 + 9);
                  plVar20 = (long *)plVar14[9];
                  uVar22 = 3;
                }
                plVar3 = plVar14 + 0xc;
                if (plVar4 == plVar3) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar14 + 0xc);
                    plVar20 = (long *)plVar14[0xc];
                    uVar22 = 4;
                  }
                  plVar3 = plVar14 + 0xf;
                  if (plVar4 == plVar3) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar14 + 0xf);
                      plVar20 = (long *)plVar14[0xf];
                      uVar22 = 5;
                    }
                    uVar13 = 6;
                    for (plVar3 = plVar14 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar3);
                        plVar20 = (long *)*plVar3;
                        uVar22 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar22 * 3,plVar14 + uVar13 * 3);
        plVar14[600] = 0;
      }
      *(undefined4 *)(lVar18 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0xc0) = plVar11;
  *(undefined8 *)(param_1 + 200) = uVar21;
  *(undefined8 *)(param_1 + 0xd0) = uVar17;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
code_r0x0131d4a8:
  sVar15 = sVar7;
  if (sVar7 == 0) goto LAB_0131cf0c;
  goto LAB_0131d47c;
}


