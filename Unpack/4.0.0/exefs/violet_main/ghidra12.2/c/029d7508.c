/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d7508; name: FUN_029d7508
 */


void FUN_029d7508(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *local_60;
  long *local_58;
  
  *param_1 = (long)&PTR_FUN_04608800;
  param_1[4] = (long)&PTR_LAB_046088d0;
  param_1[5] = (long)&PTR_LAB_04608980;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x21));
  lVar18 = param_1[0x19];
  if (lVar18 != 0) {
    lVar19 = param_1[0x1a];
    lVar16 = lVar18;
    if (lVar19 != lVar18) {
      pcVar15 = *(code **)(lVar19 + -0x78);
      if (pcVar15 != (code *)0x0) {
        *(undefined8 *)(lVar19 + -0x70) = 0;
        *(undefined8 *)(lVar19 + -0x68) = 0;
        *(undefined8 *)(lVar19 + -0x80) = 0;
        *(undefined8 *)(lVar19 + -0x78) = 0;
        (*pcVar15)(lVar19 + -0x60);
      }
      pcVar15 = *(code **)(lVar19 + -0xf8);
      if (pcVar15 != (code *)0x0) {
        *(undefined8 *)(lVar19 + -0xf0) = 0;
        *(undefined8 *)(lVar19 + -0xe8) = 0;
        *(undefined8 *)(lVar19 + -0x100) = 0;
        *(undefined8 *)(lVar19 + -0xf8) = 0;
        (*pcVar15)(lVar19 + -0xe0);
      }
      pcVar15 = *(code **)(lVar19 + -0x178);
      if (pcVar15 != (code *)0x0) {
        *(undefined8 *)(lVar19 + -0x168) = 0;
        *(undefined8 *)(lVar19 + -0x170) = 0;
        *(undefined8 *)(lVar19 + -0x178) = 0;
        *(undefined8 *)(lVar19 + -0x180) = 0;
        (*pcVar15)(lVar19 + -0x160);
      }
      if (*(long **)(lVar19 + -0x188) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + -0x188) + 0x20))();
      }
      if (lVar19 + -0x1a0 != lVar18) {
        pcVar15 = *(code **)(lVar19 + -0x218);
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar19 + -0x208) = 0;
          *(undefined8 *)(lVar19 + -0x210) = 0;
          *(undefined8 *)(lVar19 + -0x218) = 0;
          *(undefined8 *)(lVar19 + -0x220) = 0;
          (*pcVar15)(lVar19 + -0x200);
        }
        pcVar15 = *(code **)(lVar19 + -0x298);
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar19 + -0x288) = 0;
          *(undefined8 *)(lVar19 + -0x290) = 0;
          *(undefined8 *)(lVar19 + -0x298) = 0;
          *(undefined8 *)(lVar19 + -0x2a0) = 0;
          (*pcVar15)(lVar19 + -0x280);
        }
        pcVar15 = *(code **)(lVar19 + -0x318);
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar19 + -0x308) = 0;
          *(undefined8 *)(lVar19 + -0x310) = 0;
          *(undefined8 *)(lVar19 + -0x318) = 0;
          *(undefined8 *)(lVar19 + -800) = 0;
          (*pcVar15)(lVar19 + -0x300);
        }
        if (*(long **)(lVar19 + -0x328) != (long *)0x0) {
          (**(code **)(**(long **)(lVar19 + -0x328) + 0x20))();
        }
        if (lVar19 + -0x340 != lVar18) {
          lVar16 = 0;
          do {
            lVar6 = lVar19 + lVar16;
            pcVar15 = *(code **)(lVar6 + -0x3b8);
            if (pcVar15 != (code *)0x0) {
              *(undefined8 *)(lVar6 + -0x3b0) = 0;
              *(undefined8 *)(lVar6 + -0x3a8) = 0;
              *(undefined8 *)(lVar6 + -0x3c0) = 0;
              *(undefined8 *)(lVar6 + -0x3b8) = 0;
              (*pcVar15)(lVar6 + -0x3a0);
            }
            pcVar15 = *(code **)(lVar6 + -0x438);
            if (pcVar15 != (code *)0x0) {
              *(undefined8 *)(lVar6 + -0x430) = 0;
              *(undefined8 *)(lVar6 + -0x428) = 0;
              *(undefined8 *)(lVar6 + -0x440) = 0;
              *(undefined8 *)(lVar6 + -0x438) = 0;
              (*pcVar15)(lVar6 + -0x420);
            }
            pcVar15 = *(code **)(lVar6 + -0x4b8);
            if (pcVar15 != (code *)0x0) {
              *(undefined8 *)(lVar6 + -0x4b0) = 0;
              *(undefined8 *)(lVar6 + -0x4a8) = 0;
              *(undefined8 *)(lVar6 + -0x4c0) = 0;
              *(undefined8 *)(lVar6 + -0x4b8) = 0;
              (*pcVar15)(lVar6 + -0x4a0);
            }
            if (*(long **)(lVar6 + -0x4c8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar6 + -0x4c8) + 0x20))();
            }
            lVar16 = lVar16 + -0x1a0;
          } while ((lVar18 - lVar19) + 0x340 != lVar16);
        }
      }
      lVar16 = param_1[0x19];
    }
    lVar19 = param_1[0x1b];
    plVar14 = (long *)param_1[0x1c];
    param_1[0x1a] = lVar18;
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar19 - lVar16,0x10);
    }
    else {
      FUN_00c48fe8(plVar14,lVar16,lVar19 - lVar16,0x10);
    }
  }
  lVar18 = param_1[0x12];
  if (lVar18 != 0) {
    lVar16 = param_1[0x13];
    if (lVar16 == lVar18) {
      lVar16 = lVar18;
    }
    else {
      lVar19 = 0;
      do {
        lVar6 = lVar16 + lVar19;
        pcVar15 = *(code **)(lVar6 + -0x78);
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0x70) = 0;
          *(undefined8 *)(lVar6 + -0x68) = 0;
          *(undefined8 *)(lVar6 + -0x80) = 0;
          *(undefined8 *)(lVar6 + -0x78) = 0;
          (*pcVar15)(lVar6 + -0x60);
        }
        pcVar15 = *(code **)(lVar6 + -0xf8);
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0xf0) = 0;
          *(undefined8 *)(lVar6 + -0xe8) = 0;
          *(undefined8 *)(lVar6 + -0x100) = 0;
          *(undefined8 *)(lVar6 + -0xf8) = 0;
          (*pcVar15)(lVar6 + -0xe0);
        }
        if (*(long **)(lVar6 + -0x108) != (long *)0x0) {
          (**(code **)(**(long **)(lVar6 + -0x108) + 0x20))();
        }
        lVar19 = lVar19 + -0x120;
      } while (lVar18 - lVar16 != lVar19);
      lVar16 = param_1[0x12];
    }
    lVar19 = param_1[0x14];
    plVar14 = (long *)param_1[0x15];
    param_1[0x13] = lVar18;
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar19 - lVar16,0x10);
    }
    else {
      FUN_00c48fe8(plVar14,lVar16,lVar19 - lVar16,0x10);
    }
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x18))();
  }
  puVar17 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar18 = FUN_00c4e600();
    iVar9 = *(int *)(lVar18 + 0x12c8);
    iVar12 = iVar9 + 1;
    *(int *)(lVar18 + 0x12c8) = iVar12;
    if (*(int *)(lVar18 + 0x12cc) <= iVar9) {
      *(int *)(lVar18 + 0x12cc) = iVar12;
    }
    (**(code **)*puVar17)(puVar17);
    plVar14 = (long *)param_1[0xe];
    lVar18 = param_1[0xf];
    lVar16 = param_1[0x10];
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar17,lVar18,lVar16);
    }
    else {
      FUN_00c48fe8(plVar14,puVar17,lVar18,lVar16);
    }
    lVar18 = FUN_00c4e600();
    iVar12 = *(int *)(lVar18 + 0x12c8) + -1;
    *(int *)(lVar18 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar14 = (long *)FUN_00c4e600();
      if (plVar14[600] != 0) {
        local_60 = plVar14 + plVar14[600] * 3;
        local_58 = plVar14;
        FUN_00c4ea30(&local_58,&local_60);
        plVar20 = (long *)*plVar14;
        plVar7 = plVar14;
        if (plVar14[600] != 0) {
          plVar7 = plVar14 + plVar14[600] * 3;
        }
        if (plVar7 == plVar14) {
          uVar21 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar14 + 0xd0))();
          if ((long *)*plVar14 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14);
            plVar20 = (long *)*plVar14;
          }
          plVar5 = plVar14 + 3;
          if (plVar7 == plVar5) {
            uVar21 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0xd0))();
            bVar11 = (long *)*plVar5 != plVar20;
            if (bVar11) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14 + 3);
              plVar20 = (long *)plVar14[3];
            }
            uVar21 = (ulong)bVar11;
            plVar5 = plVar14 + 6;
            if (plVar7 == plVar5) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar5 + 0xd0))();
              if ((long *)*plVar5 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 6);
                plVar20 = (long *)plVar14[6];
                uVar21 = 2;
              }
              plVar5 = plVar14 + 9;
              if (plVar7 == plVar5) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 9);
                  plVar20 = (long *)plVar14[9];
                  uVar21 = 3;
                }
                plVar5 = plVar14 + 0xc;
                if (plVar7 == plVar5) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 0xc);
                    plVar20 = (long *)plVar14[0xc];
                    uVar21 = 4;
                  }
                  plVar5 = plVar14 + 0xf;
                  if (plVar7 == plVar5) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 0xf);
                      plVar20 = (long *)plVar14[0xf];
                      uVar21 = 5;
                    }
                    uVar13 = 6;
                    for (plVar5 = plVar14 + 0x12; plVar7 != plVar5; plVar5 = plVar5 + 3) {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar5);
                        plVar20 = (long *)*plVar5;
                        uVar21 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + uVar13 * 3);
        plVar14[600] = 0;
      }
      *(undefined4 *)(lVar18 + 0x12cc) = 0;
    }
  }
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar17 = (undefined8 *)param_1[6];
  if (puVar17 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar17 + 3);
    do {
      sVar8 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      piVar4 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_58 = (long *)*puVar17;
        FUN_00c44438(lVar18 + 0x8040,&local_58);
      }
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


