/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01962f48; name: FUN_01962f48
 */


void FUN_01962f48(long param_1,undefined4 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_a0 = *(undefined8 *)(param_1 + 0x110);
  uStack_98 = *(undefined8 *)(param_1 + 0x118);
  local_90 = *(undefined8 *)(param_1 + 0x120);
  plVar11 = *(long **)(param_1 + 0x128);
  local_88 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_80,param_1 + 0x30,&local_a0);
    plVar11 = local_88;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) == 0) {
LAB_01963400:
    puVar6 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar15 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_70);
        }
      }
      else if (sVar15 == 0) {
LAB_0196327c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) == 0) goto LAB_01963400;
  psVar1 = (short *)((long)local_80 + 0x1a);
  sVar15 = *(short *)((long)local_80 + 0x1a);
LAB_0196301c:
  sVar3 = *psVar1;
  if (sVar3 == sVar15) {
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01963040;
    bVar14 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01963040:
    bVar14 = false;
  }
  if (!bVar14) goto code_r0x01963048;
  plVar11 = (long *)(local_80[2] + -0x28);
  if (local_80[2] == 0) goto LAB_01963400;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_00d0a71c(&local_b0,&local_80);
  lVar10 = FUN_01180e7c(param_1,&local_b0);
  puVar6 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_70 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_70);
      }
    }
    else if (sVar15 == 0) goto LAB_0196327c;
  }
  if (lVar10 == 0) goto LAB_019633f0;
  local_70 = 0x12d7b82ec399ec60;
  pcStack_68 = "EasingType";
  local_60 = 10;
  local_58 = (long *)0x0;
  uVar8 = FUN_01470908(param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar12 = *(ulong *)(param_1 + 0x160);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar12 - 1 & 0xe76e256fe29c8a7e;
    }
    else {
      uVar16 = 0xe76e256fe29c8a7e;
      if (uVar12 < 0xe76e256fe29c8a7f) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xe76e256fe29c8a7e / uVar12;
        }
        uVar16 = 0xe76e256fe29c8a7e - uVar16 * uVar12;
      }
    }
    fVar20 = 0.0;
    plVar17 = *(long **)(*(long *)(param_1 + 0x158) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar17[1] != 0xe76e256fe29c8a7e) {
            if ((plVar17[1] & uVar12 - 1) == uVar16) goto LAB_0196317c;
            break;
          }
          if (plVar17[2] == -0x1891da901d637582) goto LAB_019632dc;
LAB_0196317c:
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar17[1];
          if (uVar18 == 0xe76e256fe29c8a7e) {
            if (plVar17[2] == -0x1891da901d637582) goto LAB_019632dc;
          }
          else {
            if (uVar12 <= uVar18) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar18 / uVar12;
              }
              uVar18 = uVar18 - uVar5 * uVar12;
            }
            if (uVar18 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
    goto LAB_019632e0;
  }
  fVar20 = 0.0;
  fVar21 = 0.0;
LAB_019633b4:
  uVar12 = 0;
  if ((uVar8 & 0xff) != 0) {
    uVar12 = uVar8 >> 0x20;
  }
  fVar19 = (float)(**(code **)(PTR_PTR_047d9248 + uVar12 * 8))(*param_2);
  *(undefined1 *)(lVar10 + 0xe0) = 1;
  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar10 + 0x58);
  *(ulong *)(lVar10 + 0x50) =
       CONCAT44(fVar20 + (fVar21 - fVar20) * fVar19,(int)*(undefined8 *)(lVar10 + 0x50));
LAB_019633f0:
  (**(code **)(*plVar11 + 0x60))(plVar11);
  goto LAB_01963400;
code_r0x01963048:
  sVar15 = sVar3;
  if (sVar3 == 0) goto LAB_01963400;
  goto LAB_0196301c;
LAB_019632dc:
  fVar20 = *(float *)(plVar17 + 6);
LAB_019632e0:
  if (uVar13 < 2) {
    uVar16 = uVar12 - 1 & 0xa957e3270a9644aa;
  }
  else {
    uVar16 = 0xa957e3270a9644aa;
    if (uVar12 < 0xa957e3270a9644ab) {
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = 0xa957e3270a9644aa / uVar12;
      }
      uVar16 = 0xa957e3270a9644aa - uVar16 * uVar12;
    }
  }
  plVar17 = *(long **)(*(long *)(param_1 + 0x158) + uVar16 * 8);
  fVar21 = 0.0;
  if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar17[1] != 0xa957e3270a9644aa) {
          if ((plVar17[1] & uVar12 - 1) == uVar16) goto LAB_01963348;
          break;
        }
        if (plVar17[2] == -0x56a81cd8f569bb56) goto LAB_019633b0;
LAB_01963348:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar17[1];
        if (uVar13 == 0xa957e3270a9644aa) {
          if (plVar17[2] == -0x56a81cd8f569bb56) goto LAB_019633b0;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar18 * uVar12;
          }
          if (uVar13 != uVar16) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  goto LAB_019633b4;
LAB_019633b0:
  fVar21 = *(float *)(plVar17 + 6);
  goto LAB_019633b4;
}


