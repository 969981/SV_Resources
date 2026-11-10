/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03232dc4; name: FUN_03232dc4
 */


long * FUN_03232dc4(long *param_1,ulong param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  bool bVar20;
  
  uVar8 = *(uint *)((long)param_1 + 0xc);
  if (uVar8 == 1) {
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)((long)param_1 + 0x24) = (int)param_2;
    return param_1 + 3;
  }
  if ((uVar8 & 0x102) != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x20;
    uVar8 = *(uint *)(*param_1 + 0x40);
    iVar15 = *(int *)((long)param_1 + 0x14);
    if (iVar15 < (int)(uVar8 >> 0x15)) {
LAB_03232f44:
      *(int *)((long)param_1 + 0x14) = iVar15 + 1;
      *(uint *)(param_1 + 1) = uVar8 >> 0x15;
    }
    else {
      puVar1 = (uint *)(*param_1 + 0x40);
      uVar7 = uVar8 + 0x80 & 0x3f80;
      bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
      uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
      if (!bVar5) {
        uVar19 = uVar7 | uVar8 & 0xffffc07f;
      }
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar20) {
          *puVar1 = uVar19;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_03232e7c;
      }
      else {
        ClearExclusiveLocal();
LAB_03232e7c:
        uVar10 = 0;
        uVar8 = uVar7;
        do {
          if (uVar10 != 0x1f) {
            iVar15 = (1 << (ulong)(uVar10 & 0x1f)) + 1;
            do {
              iVar15 = iVar15 + -1;
              DataMemoryBarrier(2,2);
              Yield();
            } while (1 < iVar15);
          }
          iVar15 = *(int *)((long)param_1 + 0x14);
          if (iVar15 < (int)(uVar8 >> 0x15)) goto LAB_03232f44;
          uVar7 = uVar8 + 0x80 & 0x3f80;
          if (uVar10 < 8) {
            uVar10 = uVar10 + 1;
          }
          bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
          uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
          if (!bVar5) {
            uVar19 = uVar7 | uVar8 & 0xffffc07f;
          }
          puVar1 = (uint *)(*param_1 + 0x40);
          uVar7 = *puVar1;
          if (uVar7 == uVar8) {
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar20) {
              *puVar1 = uVar19;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_03232f10;
            bVar20 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_03232f10:
            bVar20 = false;
          }
          uVar8 = uVar7;
        } while (!bVar20);
      }
      if (bVar5) {
        *(undefined4 *)((long)param_1 + 0xc) = 0x10;
      }
      *(uint *)(param_1 + 1) = uVar19 >> 0x15;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
    }
    uVar8 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar8 == 0x10) {
    if ((int)param_2 == 0) {
      param_2 = **(ulong **)(param_1[3] + 0x490) >> 0x20;
    }
    puVar9 = (undefined8 *)param_1[3];
    iVar12 = *(int *)(puVar9 + 9);
    uVar8 = iVar12 - 1;
    iVar6 = (int)param_2;
    iVar15 = iVar6;
    if (uVar8 != 1) {
      iVar15 = param_3;
    }
    if (iVar15 < 0) {
      *puVar9 = 0x100000000;
      puVar9[1] = 0x100000001;
      puVar13 = (ulong *)puVar9[0x92];
      if (1 < iVar12) {
        lVar17 = (ulong)uVar8 + 1;
        lVar18 = (ulong)uVar8 << 6;
        do {
          *(undefined8 *)((long)puVar13 + lVar18) = 0;
          *(undefined4 *)(puVar9[8] + lVar18) = 0;
          puVar13 = (ulong *)puVar9[0x92];
          lVar17 = lVar17 + -1;
          lVar18 = lVar18 + -0x40;
        } while (1 < lVar17);
      }
      uVar16 = 0;
      uVar14 = param_2 << 0x20;
    }
    else {
      iVar11 = 0;
      if (uVar8 != 0) {
        iVar11 = iVar6 / (int)uVar8;
      }
      *puVar9 = 1;
      iVar2 = iVar11;
      if (iVar11 < 2) {
        iVar2 = 1;
      }
      *(int *)(puVar9 + 1) = iVar15;
      *(int *)((long)puVar9 + 0xc) = iVar2;
      if (iVar12 < 2) {
        uVar14 = 0;
      }
      else {
        lVar17 = (ulong)uVar8 << 6;
        uVar14 = (ulong)uVar8;
        uVar8 = 0;
        do {
          uVar4 = uVar14 - 1;
          iVar15 = iVar6 - uVar8;
          if (uVar4 != 0) {
            iVar15 = iVar11;
          }
          uVar7 = iVar15 + uVar8;
          *(ulong *)(puVar9[0x92] + lVar17) = CONCAT44(uVar7,uVar8);
          *(int *)(puVar9[8] + lVar17) = (int)uVar14;
          lVar17 = lVar17 + -0x40;
          bVar5 = 0 < (long)uVar14;
          uVar14 = uVar4;
          iVar11 = iVar15;
          uVar8 = uVar7;
        } while (uVar4 != 0 && bVar5);
        uVar14 = (ulong)uVar7;
      }
      puVar13 = (ulong *)puVar9[0x92];
      uVar14 = uVar14 | param_2 << 0x20;
      uVar16 = 1;
    }
    *puVar13 = uVar14;
    *(undefined4 *)puVar9[8] = uVar16;
  }
  uVar8 = *(uint *)((long)param_1 + 0xc);
  if (uVar8 == 1) goto LAB_0323351c;
  if (uVar8 == 2) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x20;
    uVar8 = *(uint *)(*param_1 + 0x40);
    iVar15 = *(int *)((long)param_1 + 0x14);
    if (iVar15 < (int)(uVar8 >> 0x15)) {
LAB_032331b8:
      *(int *)((long)param_1 + 0x14) = iVar15 + 1;
      *(uint *)(param_1 + 1) = uVar8 >> 0x15;
    }
    else {
      puVar1 = (uint *)(*param_1 + 0x40);
      uVar7 = uVar8 + 0x80 & 0x3f80;
      bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
      uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
      if (!bVar5) {
        uVar19 = uVar7 | uVar8 & 0xffffc07f;
      }
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar20) {
          *puVar1 = uVar19;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_032330e8;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_032330e8:
        bVar20 = false;
      }
      if (!bVar20) {
        uVar10 = 0;
        uVar8 = uVar7;
        do {
          if (uVar10 != 0x1f) {
            iVar15 = (1 << (ulong)(uVar10 & 0x1f)) + 1;
            do {
              iVar15 = iVar15 + -1;
              DataMemoryBarrier(2,2);
              Yield();
            } while (1 < iVar15);
          }
          iVar15 = *(int *)((long)param_1 + 0x14);
          if (iVar15 < (int)(uVar8 >> 0x15)) goto LAB_032331b8;
          uVar7 = uVar8 + 0x80 & 0x3f80;
          if (uVar10 < 8) {
            uVar10 = uVar10 + 1;
          }
          bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
          uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
          if (!bVar5) {
            uVar19 = uVar7 | uVar8 & 0xffffc07f;
          }
          puVar1 = (uint *)(*param_1 + 0x40);
          uVar7 = *puVar1;
          if (uVar7 == uVar8) {
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar20) {
              *puVar1 = uVar19;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_03233184;
            bVar20 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_03233184:
            bVar20 = false;
          }
          uVar8 = uVar7;
        } while (!bVar20);
      }
      if (bVar5) {
        *(undefined4 *)((long)param_1 + 0xc) = 0x10;
      }
      *(uint *)(param_1 + 1) = uVar19 >> 0x15;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
    }
    uVar8 = *(uint *)((long)param_1 + 0xc);
  }
  if (((uVar8 & 0x230) != 0) && (uVar8 != 1)) {
    if (uVar8 == 0x200) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x100;
    }
    else {
      if ((uVar8 & 0x102) != 0) {
        if (uVar8 != 1) {
          *(undefined4 *)((long)param_1 + 0xc) = 0x20;
          uVar8 = *(uint *)(*param_1 + 0x40);
          iVar15 = *(int *)((long)param_1 + 0x14);
          if (iVar15 < (int)(uVar8 >> 0x15)) {
LAB_03233220:
            *(int *)((long)param_1 + 0x14) = iVar15 + 1;
            *(uint *)(param_1 + 1) = uVar8 >> 0x15;
          }
          else {
            puVar1 = (uint *)(*param_1 + 0x40);
            uVar7 = uVar8 + 0x80 & 0x3f80;
            bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
            uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
            if (!bVar5) {
              uVar19 = uVar7 | uVar8 & 0xffffc07f;
            }
            uVar7 = *puVar1;
            if (uVar7 == uVar8) {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar20) {
                *puVar1 = uVar19;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_03233280;
              bVar20 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_03233280:
              bVar20 = false;
            }
            if (!bVar20) {
              uVar10 = 0;
              uVar8 = uVar7;
              do {
                if (uVar10 != 0x1f) {
                  iVar15 = (1 << (ulong)(uVar10 & 0x1f)) + 1;
                  do {
                    iVar15 = iVar15 + -1;
                    DataMemoryBarrier(2,2);
                    Yield();
                  } while (1 < iVar15);
                }
                iVar15 = *(int *)((long)param_1 + 0x14);
                if (iVar15 < (int)(uVar8 >> 0x15)) goto LAB_03233220;
                uVar7 = uVar8 + 0x80 & 0x3f80;
                if (uVar10 < 8) {
                  uVar10 = uVar10 + 1;
                }
                bVar5 = (uVar8 + 0x80 >> 7 & 0x7f) == (uVar8 & 0x7f);
                uVar19 = uVar8 + 0x200000 & 0xffe00000 | uVar7 | uVar8 & 0x1fc07f;
                if (!bVar5) {
                  uVar19 = uVar7 | uVar8 & 0xffffc07f;
                }
                puVar1 = (uint *)(*param_1 + 0x40);
                uVar7 = *puVar1;
                if (uVar7 == uVar8) {
                  cVar3 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar20) {
                    *puVar1 = uVar19;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_0323331c;
                  bVar20 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_0323331c:
                  bVar20 = false;
                }
                uVar8 = uVar7;
              } while (!bVar20);
            }
            if (bVar5) {
              *(undefined4 *)((long)param_1 + 0xc) = 0x10;
            }
            *(uint *)(param_1 + 1) = uVar19 >> 0x15;
            *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
          }
        }
        uVar8 = *(uint *)((long)param_1 + 0xc);
      }
      if (uVar8 == 0x20) {
        iVar15 = *(int *)(*param_1 + 0x90);
        uVar8 = *(uint *)(*param_1 + 0x40);
        if (-1 < iVar15) {
          iVar12 = 0;
          do {
            if (*(int *)((long)param_1 + 0x14) < (int)(uVar8 >> 0x15)) goto LAB_032334e0;
            DataMemoryBarrier(2,2);
            Yield();
            uVar8 = *(uint *)(*param_1 + 0x40);
            if (*(long *)(*param_1 + 0x80) != 0) {
              iVar12 = iVar12 + 1;
            }
          } while (iVar12 <= iVar15);
        }
        uVar7 = uVar8;
        if ((int)(uVar8 >> 0x15) <= *(int *)((long)param_1 + 0x14)) {
          do {
            puVar1 = (uint *)(*param_1 + 0x40);
            uVar8 = *puVar1;
            if (uVar8 == uVar7) {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar7 & 0xffe00000 |
                          uVar7 & 0x3fff | (uVar7 + 0x4000 >> 0xe & 0x7f) << 0xe;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_03233418;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_03233418:
              bVar5 = false;
            }
            if (bVar5) {
              nn::os::AcquireSemaphore
                        (*(SemaphoreType **)
                          (*param_1 + ((ulong)(*(uint *)((long)param_1 + 0x14) >> 1) & 1) * 8 + 0x80
                          ));
              uVar8 = *(uint *)(*param_1 + 0x40);
              break;
            }
            DataMemoryBarrier(2,2);
            Yield();
            uVar7 = uVar8;
          } while ((int)(uVar8 >> 0x15) <= *(int *)((long)param_1 + 0x14));
        }
LAB_032334e0:
        *(uint *)(param_1 + 1) = uVar8 >> 0x15;
      }
      else if (uVar8 == 0x10) {
        puVar1 = (uint *)(*param_1 + 0x40);
        uVar7 = *(uint *)(*param_1 + 0x40);
        uVar19 = *puVar1;
        uVar8 = uVar7 + 0x200000;
        if (uVar19 == uVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 & 0xffe0007f;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_03233444;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_03233444:
          bVar5 = false;
        }
        if (!bVar5) {
          do {
            while( true ) {
              uVar7 = uVar19;
              uVar8 = uVar7 + 0x200000;
              puVar1 = (uint *)(*param_1 + 0x40);
              uVar19 = *puVar1;
              if (uVar19 == uVar7) break;
              ClearExclusiveLocal();
            }
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 & 0xffe0007f;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar7 = uVar7 >> 0xe & 0x7f;
        *(uint *)(param_1 + 1) = uVar8 >> 0x15;
        if (uVar7 != 0) {
          nn::os::ReleaseSemaphore
                    (*(SemaphoreType **)
                      (*param_1 + ((ulong)(*(uint *)((long)param_1 + 0x14) >> 1) & 1) * 8 + 0x80),
                     uVar7);
        }
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0x100;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  if (*(int *)((long)param_1 + 0x14) < (int)param_1[1]) {
    return (long *)&DAT_046ab3f8;
  }
LAB_0323351c:
  return param_1 + 3;
}


