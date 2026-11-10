/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d963f0; name: FUN_00d963f0
 */


void FUN_00d963f0(long param_1,undefined8 param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  float fVar15;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((param_3 & 1) == 0) {
    lVar9 = FUN_00da75d8();
  }
  else {
    lVar9 = FUN_00d3ccd4();
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00cbb698(&local_58,param_1 + 0x120);
  puVar6 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_58 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_58 + 0x1a);
    sVar13 = *(short *)((long)local_58 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d96494;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d96494:
        bVar7 = false;
      }
      if (bVar7) {
        plVar14 = (long *)0x0;
        if (local_58[2] != 0) {
          plVar14 = (long *)(local_58[2] + -0x28);
        }
        goto LAB_00d964bc;
      }
      sVar13 = sVar4;
    } while (sVar4 != 0);
  }
  plVar14 = (long *)0x0;
LAB_00d964bc:
  psVar1 = (short *)(local_58 + 3);
  do {
    sVar13 = *psVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    piVar2 = (int *)((long)local_58 + 0x1c);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_48 = *puVar6;
      FUN_00c44438(lVar12 + 0x8040,&local_48);
    }
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (lVar9 == 0) {
    if (plVar14 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar14 == (long *)0x0) {
      return;
    }
    bVar7 = (param_3 & 1) == 0;
    lVar12 = 0x154;
    if (bVar7) {
      lVar12 = 0x150;
    }
    lVar3 = 0x15c;
    if (bVar7) {
      lVar3 = 0x158;
    }
    iVar8 = *(int *)(param_1 + lVar12);
    if (iVar8 == 3) {
      uVar10 = FUN_01f8b968(plVar14);
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(param_1 + lVar12) = 0;
      }
    }
    else {
      if (iVar8 == 2) {
        fVar15 = (float)FUN_00d5faf0(param_1,param_2);
        fVar15 = fVar15 + *(float *)(param_1 + lVar3);
        *(float *)(param_1 + lVar3) = fVar15;
        if (fVar15 < *(float *)(lVar9 + 0x450)) goto LAB_00d96520;
        FUN_01f8b9c8(plVar14);
        uVar11 = 3;
      }
      else {
        if (((iVar8 != 1) || (uVar10 = FUN_01f8b968(plVar14), (uVar10 & 1) != 0)) ||
           (uVar10 = FUN_01f8b9c0(plVar14), (uVar10 & 1) == 0)) goto LAB_00d96520;
        uVar11 = 2;
      }
      *(undefined4 *)(param_1 + lVar12) = uVar11;
    }
  }
LAB_00d96520:
  lVar9 = plVar14[0x13];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


