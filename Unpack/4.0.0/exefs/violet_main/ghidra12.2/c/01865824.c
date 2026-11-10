/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01865824; name: FUN_01865824
 */


void FUN_01865824(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
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
  undefined8 *local_40 [2];
  undefined8 local_18;
  
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
        if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_01865938;
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
LAB_01865938:
  puVar8 = (undefined8 *)FUN_0140f310(param_1);
  local_60 = *puVar8;
  uStack_58 = puVar8[1];
  local_50 = puVar8[2];
  local_48 = (long *)puVar8[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] == (undefined8 *)0x0) {
    return;
  }
  puVar8 = local_40[0];
  if (*(short *)((long)local_40[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40[0] + 0x1a);
    sVar15 = *(short *)((long)local_40[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_018659ec;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018659ec:
        bVar6 = false;
      }
      if (bVar6) {
        lVar11 = local_40[0][2];
        if (lVar11 == 0) goto LAB_01865b48;
        lVar9 = FUN_0104b474(lVar11 + 0xe0,&local_18);
        if (lVar9 == 0) goto LAB_01865b30;
        uVar10 = *(ulong *)(param_1 + 0x160);
        if (uVar10 == 0) goto LAB_01865adc;
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
        goto LAB_01865adc;
        if (1 < uVar12) goto LAB_01865ae4;
        goto LAB_01865a8c;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
    goto LAB_01865b44;
  }
  goto LAB_01865b48;
LAB_01865ae4:
  do {
    uVar12 = plVar14[1];
    if (uVar12 == 0x55c0d7a581349f0f) {
      if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_01865b20;
    }
    else {
      if (uVar10 <= uVar12) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar5 * uVar10;
      }
      if (uVar12 != uVar13) goto LAB_01865adc;
    }
    plVar14 = (long *)*plVar14;
    bVar6 = false;
  } while (plVar14 != (long *)0x0);
  goto LAB_01865b2c;
LAB_01865adc:
  bVar6 = false;
  goto LAB_01865b2c;
LAB_01865b20:
  bVar6 = (char)plVar14[6] != '\0';
  goto LAB_01865b2c;
  while( true ) {
    plVar14 = (long *)*plVar14;
    bVar6 = false;
    if (plVar14 == (long *)0x0) break;
LAB_01865a8c:
    if (plVar14[1] == 0x55c0d7a581349f0f) {
      if (plVar14[2] == 0x55c0d7a581349f0f) goto LAB_01865b20;
    }
    else if ((plVar14[1] & uVar10 - 1) != uVar13) goto LAB_01865adc;
  }
LAB_01865b2c:
  FUN_022498b0(lVar9,bVar6);
LAB_01865b30:
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
LAB_01865b44:
  puVar8 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
LAB_01865b48:
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *puVar8;
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


