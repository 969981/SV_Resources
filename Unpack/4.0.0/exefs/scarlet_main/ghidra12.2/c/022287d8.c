/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022287d8; name: FUN_022287d8
 */


void FUN_022287d8(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_28;
  
  local_a0 = *(ulong *)(param_1 + 0x110);
  local_98 = *(undefined8 *)(param_1 + 0x118);
  local_90 = *(undefined8 *)(param_1 + 0x120);
  plVar5 = *(long **)(param_1 + 0x128);
  local_88 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    plVar13 = (long *)0x0;
    local_c0 = (undefined8 *)0x0;
    pcStack_b8 = (char *)0x0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_c0,param_1 + 0x30,&local_a0);
    puVar3 = local_c0;
    if (local_c0 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_c0 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_c0 + 0x1a);
        sVar12 = *(short *)((long)local_c0 + 0x1a);
        do {
          sVar6 = *psVar2;
          if (sVar6 == sVar12) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar8) {
              *psVar2 = sVar12 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_02228b38;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02228b38:
            bVar8 = false;
          }
          if (bVar8) {
            plVar13 = (long *)0x0;
            if (local_c0[2] != 0) {
              plVar13 = (long *)(local_c0[2] + -0x28);
            }
            goto LAB_02228b64;
          }
          sVar12 = sVar6;
        } while (sVar6 != 0);
      }
      plVar13 = (long *)0x0;
LAB_02228b64:
      psVar2 = (short *)(local_c0 + 3);
      do {
        sVar12 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar1 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar9 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = -1;
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
          local_28 = *puVar3;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar12 == 0) goto LAB_02228b88;
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_48 = plVar13;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  local_c0 = (undefined8 *)&DAT_94ed70272cac328;
  pcStack_b8 = "Target";
  local_b0 = 6;
  local_a8 = (long *)0x0;
  FUN_01315eac(&local_a0,param_1,&local_c0);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar8 = (char)local_a0 != '\0';
  puVar3 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar8) {
    puVar3 = &local_98;
  }
  local_78 = *puVar3;
  puVar3 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar8) {
    puVar3 = &local_90;
  }
  local_70 = *puVar3;
  pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
  if (bVar8) {
    pplVar4 = &local_88;
  }
  local_68 = *pplVar4;
  pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar8) {
    pplVar4 = &local_80;
  }
  local_60 = *pplVar4;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_58,param_1 + 0x30,&local_78);
  }
  lVar10 = FUN_01180e7c(param_1,&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar12 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar3;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar12 == 0) {
LAB_02228b88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if ((char)local_a0 != '\0') {
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_a0 = local_a0 & 0xffffffffffffff00;
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (lVar10 == 0) {
    fVar15 = 0.0;
    fVar16 = 0.0;
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar10 + 0x70);
    fVar15 = (float)*(undefined8 *)(lVar10 + 0x90) +
             (float)*(undefined8 *)(lVar10 + 0x80) +
             (float)*(undefined8 *)(lVar10 + 0x60) + (float)*(undefined8 *)(lVar10 + 0x50);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar10 + 0x90) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar10 + 0x80) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20);
  }
  FUN_0146e648(CONCAT44(fVar16 - (float)((ulong)uVar14 >> 0x20),fVar15 - (float)uVar14),0x3f800000,
               param_1,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return;
}


