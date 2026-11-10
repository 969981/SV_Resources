/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a66c9c; name: FUN_01a66c9c
 */


void FUN_01a66c9c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  short sVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  piVar9 = (int *)*param_1;
  puVar14 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar14 < 0xb) {
    iVar11 = 0;
    iVar8 = 0;
    iVar6 = 0;
    if (8 < *puVar14) goto LAB_01a66cd4;
  }
  else {
    iVar6 = 0;
    if ((ulong)puVar14[5] != 0) {
      iVar6 = *(int *)((long)piVar9 + (ulong)puVar14[5]);
    }
LAB_01a66cd4:
    iVar11 = iVar6;
    if ((ulong)puVar14[4] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar9 + (ulong)puVar14[4]);
    }
  }
  if (iVar11 - iVar8 == 1) {
    return;
  }
  local_58 = param_1[0x22];
  uStack_50 = param_1[0x23];
  local_48 = param_1[0x24];
  plVar12 = (long *)param_1[0x25];
  local_40 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_38,param_1 + 6,&local_58);
    plVar12 = local_40;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_38 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_38 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_38 + 0x1a);
    sVar18 = *(short *)((long)local_38 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a66dbc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a66dbc:
        bVar7 = false;
      }
      if (bVar7) {
        plVar12 = (long *)(local_38[2] + -0x28);
        if (local_38[2] != 0) {
          uVar13 = param_1[0x2c];
          if (uVar13 == 0) goto LAB_01a66fb8;
          uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar15 < 2) {
            uVar19 = uVar13 - 1 & 0x9ba105a5fece6484;
          }
          else {
            uVar19 = 0x9ba105a5fece6484;
            if (uVar13 < 0x9ba105a5fece6485) {
              uVar19 = 0;
              if (uVar13 != 0) {
                uVar19 = 0x9ba105a5fece6484 / uVar13;
              }
              uVar19 = 0x9ba105a5fece6484 - uVar19 * uVar13;
            }
          }
          plVar16 = *(long **)(param_1[0x2b] + uVar19 * 8);
          if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
          goto LAB_01a66fb8;
          uVar17 = uVar13 - 1;
          if (1 < uVar15) goto LAB_01a66ea8;
          goto LAB_01a66e5c;
        }
        break;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
  }
  goto LAB_01a66fc8;
LAB_01a66e5c:
  do {
    if (plVar16[1] == 0x9ba105a5fece6484) {
      if (plVar16[2] == -0x645efa5a01319b7c) goto LAB_01a66ee0;
    }
    else if ((plVar16[1] & uVar17) != uVar19) break;
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
  goto LAB_01a66fb8;
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
LAB_01a66ea8:
    uVar20 = plVar16[1];
    if (uVar20 == 0x9ba105a5fece6484) {
      if (plVar16[2] == -0x645efa5a01319b7c) goto LAB_01a66ee0;
    }
    else {
      if (uVar13 <= uVar20) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar20 / uVar13;
        }
        uVar20 = uVar20 - uVar4 * uVar13;
      }
      if (uVar20 != uVar19) break;
    }
  }
  goto LAB_01a66fb8;
LAB_01a66fa4:
  bVar7 = (char)plVar16[6] != '\0';
  goto LAB_01a66fb0;
LAB_01a66ee0:
  if (uVar15 < 2) {
    uVar19 = uVar17 & 0x9ba105a5fece6484;
  }
  else {
    uVar19 = 0x9ba105a5fece6484;
    if (uVar13 < 0x9ba105a5fece6485) {
      uVar19 = 0;
      if (uVar13 != 0) {
        uVar19 = 0x9ba105a5fece6484 / uVar13;
      }
      uVar19 = 0x9ba105a5fece6484 - uVar19 * uVar13;
    }
  }
  plVar16 = *(long **)(param_1[0x2b] + uVar19 * 8);
  if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0)) {
LAB_01a66f60:
    bVar7 = false;
  }
  else if (uVar15 < 2) {
    do {
      if (plVar16[1] == 0x9ba105a5fece6484) {
        if (plVar16[2] == -0x645efa5a01319b7c) goto LAB_01a66fa4;
      }
      else if ((plVar16[1] & uVar17) != uVar19) goto LAB_01a66f60;
      plVar16 = (long *)*plVar16;
      bVar7 = false;
    } while (plVar16 != (long *)0x0);
  }
  else {
    do {
      uVar15 = plVar16[1];
      if (uVar15 == 0x9ba105a5fece6484) {
        if (plVar16[2] == -0x645efa5a01319b7c) goto LAB_01a66fa4;
      }
      else {
        if (uVar13 <= uVar15) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar15 / uVar13;
          }
          uVar15 = uVar15 - uVar17 * uVar13;
        }
        if (uVar15 != uVar19) goto LAB_01a66f60;
      }
      plVar16 = (long *)*plVar16;
      bVar7 = false;
    } while (plVar16 != (long *)0x0);
  }
LAB_01a66fb0:
  FUN_01983740(plVar12,bVar7);
LAB_01a66fb8:
  (**(code **)(*plVar12 + 0x60))(plVar12);
LAB_01a66fc8:
  puVar5 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar18 = *psVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar18 == 1) {
      piVar9 = (int *)((long)local_38 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar7) {
          *piVar9 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar5;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


