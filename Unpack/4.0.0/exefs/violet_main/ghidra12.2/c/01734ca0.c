/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01734ca0; name: FUN_01734ca0
 */


void FUN_01734ca0(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60 [2];
  
  uVar7 = FUN_017350a8();
  if ((uVar7 & 1) != 0) {
    return;
  }
  puVar8 = (undefined8 *)FUN_0140f310(param_2);
  local_80 = *puVar8;
  uStack_78 = puVar8[1];
  local_70 = puVar8[2];
  local_68 = (long *)puVar8[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_0140f318(local_60,param_2,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60[0] == (undefined8 *)0x0) {
    return;
  }
  puVar8 = local_60[0];
  if (*(short *)((long)local_60[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_60[0] + 0x1a);
    sVar12 = *(short *)((long)local_60[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01734d78;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01734d78:
        bVar11 = false;
      }
      if (bVar11) {
        lVar10 = local_60[0][2];
        if (lVar10 == 0) goto LAB_01734f98;
        lVar9 = FUN_01491340(lVar10 + 0xe0,&local_a0);
        if (lVar9 == 0) goto LAB_01734f80;
        uVar7 = *(ulong *)(param_2 + 0x160);
        fVar18 = 0.0;
        if (uVar7 == 0) goto LAB_01734ec8;
        uVar13 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar7 - 1 & 0x12936450f3860c8a;
        }
        else {
          uVar14 = 0x12936450f3860c8a;
          if (uVar7 < 0x12936450f3860c8b) {
            uVar14 = 0;
            if (uVar7 != 0) {
              uVar14 = 0x12936450f3860c8a / uVar7;
            }
            uVar14 = 0x12936450f3860c8a - uVar14 * uVar7;
          }
        }
        fVar18 = 0.0;
        plVar15 = *(long **)(*(long *)(param_2 + 0x158) + uVar14 * 8);
        if (plVar15 == (long *)0x0) goto LAB_01734ec8;
        plVar15 = (long *)*plVar15;
        fVar18 = 0.0;
        if (plVar15 == (long *)0x0) goto LAB_01734ec8;
        if (1 < uVar13) goto LAB_01734e88;
        goto LAB_01734e3c;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
    goto LAB_01734f94;
  }
  goto LAB_01734f98;
LAB_01734e88:
  do {
    uVar13 = plVar15[1];
    if (uVar13 == 0x12936450f3860c8a) {
      if (plVar15[2] == 0x12936450f3860c8a) goto LAB_01734ec4;
    }
    else {
      if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        uVar13 = uVar13 - uVar5 * uVar7;
      }
      if (uVar13 != uVar14) break;
    }
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
  goto LAB_01734ebc;
LAB_01734ec4:
  fVar18 = *(float *)(plVar15 + 6);
  goto LAB_01734ec8;
  while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
LAB_01734e3c:
    if (plVar15[1] == 0x12936450f3860c8a) {
      if (plVar15[2] == 0x12936450f3860c8a) goto LAB_01734ec4;
    }
    else if ((plVar15[1] & uVar7 - 1) != uVar14) break;
  }
LAB_01734ebc:
  fVar18 = 0.0;
LAB_01734ec8:
  local_a0 = 0x1b56d66692e6806b;
  pcStack_98 = "Alpha";
  local_90 = 5;
  local_88 = (long *)0x0;
  uVar7 = FUN_01180d38(param_2,&local_a0);
  fVar17 = 0.0;
  if ((uVar7 & 0xff) != 0) {
    fVar17 = (float)(uVar7 >> 0x20);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0x12d7b82ec399ec60;
  pcStack_98 = "EasingType";
  local_90 = 10;
  local_88 = (long *)0x0;
  uVar7 = FUN_01470908(param_2,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar13 = 0;
  if ((uVar7 & 0xff) != 0) {
    uVar13 = uVar7 >> 0x20;
  }
  fVar16 = (float)(**(code **)(PTR_PTR_047d9248 + uVar13 * 8))(param_1);
  FUN_015efc88(fVar18 + (fVar17 - fVar18) * fVar16,lVar9);
LAB_01734f80:
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
LAB_01734f94:
  puVar8 = local_60[0];
  if (local_60[0] != (undefined8 *)0x0) {
LAB_01734f98:
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_a0 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_a0);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


