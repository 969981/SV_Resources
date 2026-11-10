/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018439a0; name: FUN_018439a0
 */


void FUN_018439a0(long param_1,byte param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long local_50;
  byte local_48 [8];
  int local_40;
  undefined4 uStack_3c;
  ulong local_18;
  
  if ((param_2 < 2) && (*(char *)(param_1 + 0x210) != '\0')) {
    return;
  }
  *(byte *)(param_1 + 0x205) = param_2;
  if (*(char *)(param_1 + 0x204) == '\0') {
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  local_48[0] = param_2;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar11 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar11;
  puVar5 = PTR_DAT_047d0a08;
  if (lVar11 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_047d0a08;
  if (lVar9 == 0) {
    uVar7 = 0;
    local_50 = 0;
  }
  else {
    local_50 = *(long *)(lVar9 + 0xb8);
    if (local_50 != 0) {
      FUN_01844624(param_1,local_48,&local_50);
      lVar9 = *(long *)puVar5;
      if (lVar9 == 0) {
        uVar7 = 0;
        goto LAB_01843a20;
      }
    }
    uVar7 = *(undefined8 *)(lVar9 + 0xb8);
  }
LAB_01843a20:
  if (*(long *)(lVar11 + 0x70) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return;
  }
  local_18 = CONCAT71(local_18._1_7_,0xfd);
  FUN_00f42ddc(&local_40,*(long *)PTR_DAT_047d0860,&local_18,uVar7);
  if (local_40 != 0) {
    return;
  }
  uVar12 = local_18 & 0xff;
  if (DAT_045dfcb0 <= (byte)local_18) {
    return;
  }
  if (3 < (byte)local_18) {
    return;
  }
  if (local_48[0] == 2) {
    FUN_0175164c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844558(&local_40);
        FUN_01844474(&local_40,0);
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_0184433c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844558(&local_40);
        FUN_01844474(&local_40,0);
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_018443d8(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) == 0) {
      return;
    }
    if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
      FUN_01844558(&local_40);
      FUN_01844474(&local_40,0);
    }
    puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
    if (puVar10 == (ulong *)0x0) {
      return;
    }
    puVar1 = puVar10 + 3;
    do {
      sVar8 = (short)*puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(short *)puVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01843eb8:
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_18);
      }
      return;
    }
  }
  else if (local_48[0] == 1) {
    FUN_0175164c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844558(&local_40);
        FUN_01844474(&local_40,1);
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_0184433c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844558(&local_40);
        FUN_01844474(&local_40,*(undefined1 *)(param_1 + uVar12 + 0x20c));
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_018443d8(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) == 0) {
      return;
    }
    if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
      FUN_01844558(&local_40);
      FUN_01844474(&local_40,1);
    }
    puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
    if (puVar10 == (ulong *)0x0) {
      return;
    }
    puVar1 = puVar10 + 3;
    do {
      sVar8 = (short)*puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(short *)puVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01843eb8;
    }
  }
  else {
    if (local_48[0] != 0) {
      return;
    }
    FUN_0175164c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844734(&local_40);
        FUN_01844474(&local_40,1);
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_0184433c(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
        FUN_01844734(&local_40);
        FUN_01844474(&local_40,*(undefined1 *)(param_1 + uVar12 + 0x20c));
      }
      puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
      if (puVar10 != (ulong *)0x0) {
        puVar1 = puVar10 + 3;
        do {
          sVar8 = (short)*puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *(short *)puVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          piVar2 = (int *)((long)puVar10 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *puVar10;
            FUN_00c44438(lVar11 + 0x8040,&local_18);
          }
        }
        else if (sVar8 == 0) goto LAB_01843bf8;
      }
    }
    FUN_018443d8(&local_40,&local_50);
    if (CONCAT44(uStack_3c,local_40) == 0) {
      return;
    }
    if (*(short *)(CONCAT44(uStack_3c,local_40) + 0x1a) != 0) {
      FUN_01844734(&local_40);
      FUN_01844474(&local_40,1);
    }
    puVar10 = (ulong *)CONCAT44(uStack_3c,local_40);
    if (puVar10 == (ulong *)0x0) {
      return;
    }
    puVar1 = puVar10 + 3;
    do {
      sVar8 = (short)*puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(short *)puVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01843eb8;
    }
  }
  if (sVar8 != 0) {
    return;
  }
LAB_01843bf8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


