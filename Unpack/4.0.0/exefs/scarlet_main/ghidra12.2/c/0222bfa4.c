/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222bfa4; name: FUN_0222bfa4
 */


void FUN_0222bfa4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  short sVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_18;
  
  uVar10 = *(ulong *)(param_1 + 0x160);
  if (uVar10 == 0) {
    return;
  }
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar13 = uVar10 - 1 & 0x55c0d7a581349f0f;
  }
  else {
    uVar13 = 0x55c0d7a581349f0f;
    if (uVar10 < 0x55c0d7a581349f10) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0x55c0d7a581349f0f / uVar10;
      }
      uVar13 = 0x55c0d7a581349f0f - uVar13 * uVar10;
    }
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x158) + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < uVar12) {
    do {
      uVar12 = plVar14[1];
      if (uVar12 == 0x55c0d7a581349f0f) {
        if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_0222c0b8;
      }
      else {
        if (uVar10 <= uVar12) {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar12 / uVar10;
          }
          uVar12 = uVar12 - uVar5 * uVar10;
        }
        if (uVar12 != uVar13) {
          return;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == 0x55c0d7a581349f0f) {
      if (plVar14[2] == 0x55c0d7a581349f0f) break;
    }
    else if ((plVar14[1] & uVar10 - 1) != uVar13) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_0222c0b8:
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar14 = *(long **)(param_1 + 0x128);
  local_48 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar14 = local_48;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_40 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40 + 0x1a);
    sVar15 = *(short *)((long)local_40 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0222c17c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0222c17c:
        bVar7 = false;
      }
      if (bVar7) {
        lVar11 = local_40[2];
        if (lVar11 == 0) goto LAB_0222c30c;
        lVar9 = FUN_0222c43c(lVar11 + 0xe0,&local_18);
        if ((lVar9 == 0) || (FUN_0222bb00(&local_18), local_18 == (long *)0x0)) goto LAB_0222c2f4;
        uVar10 = *(ulong *)(param_1 + 0x160);
        if (uVar10 == 0) goto LAB_0222c27c;
        uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar10 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar13 = 0x55c0d7a581349f0f;
          if (uVar10 < 0x55c0d7a581349f10) {
            uVar13 = 0;
            if (uVar10 != 0) {
              uVar13 = 0x55c0d7a581349f0f / uVar10;
            }
            uVar13 = 0x55c0d7a581349f0f - uVar13 * uVar10;
          }
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x158) + uVar13 * 8);
        if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
        goto LAB_0222c27c;
        if (1 < uVar12) goto LAB_0222c284;
        goto LAB_0222c22c;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
    goto LAB_0222c308;
  }
  goto LAB_0222c30c;
LAB_0222c284:
  do {
    uVar12 = plVar14[1];
    if (uVar12 == 0x55c0d7a581349f0f) {
      if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_0222c2c0;
    }
    else {
      if (uVar10 <= uVar12) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar5 * uVar10;
      }
      if (uVar12 != uVar13) goto LAB_0222c27c;
    }
    plVar14 = (long *)*plVar14;
    bVar7 = false;
  } while (plVar14 != (long *)0x0);
  goto LAB_0222c2cc;
LAB_0222c27c:
  bVar7 = false;
  goto LAB_0222c2cc;
LAB_0222c2c0:
  bVar7 = (char)plVar14[6] != '\0';
  goto LAB_0222c2cc;
  while( true ) {
    plVar14 = (long *)*plVar14;
    bVar7 = false;
    if (plVar14 == (long *)0x0) break;
LAB_0222c22c:
    if (plVar14[1] == 0x55c0d7a581349f0f) {
      if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_0222c2c0;
    }
    else if ((plVar14[1] & uVar10 - 1) != uVar13) goto LAB_0222c27c;
  }
LAB_0222c2cc:
  lVar9 = local_18[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  *(bool *)((long)local_18 + 0x65) = bVar7;
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_18 + 0x50))();
  }
  else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_0222c2f4:
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
LAB_0222c308:
  if (local_40 != (undefined8 *)0x0) {
LAB_0222c30c:
    puVar6 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = (long *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_18);
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
  return;
}


