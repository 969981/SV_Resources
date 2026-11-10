/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df1920; name: FUN_01df1920
 */


void FUN_01df1920(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  int iVar16;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_40;
  undefined8 local_38;
  
  lVar10 = FUN_01195854();
  if (lVar10 == 0) {
    return;
  }
  uVar11 = FUN_01de23f8(*(undefined8 *)(param_1 + 0x30));
  if ((uVar11 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_01df1ca8(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x284));
    uVar7 = uVar7 ^ 1;
  }
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),7,uVar7 & 1);
  uVar11 = FUN_01df0818(*(undefined8 *)(param_1 + 0x38),4);
  if ((uVar11 & 1) == 0) {
LAB_01df19a4:
    uVar11 = FUN_01df0818(*(undefined8 *)(param_1 + 0x38),7);
    if ((uVar11 & 1) != 0) {
      FUN_01df1cb8(&local_58);
      FUN_01282188(&local_58);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x60) = 3;
    }
    uVar11 = FUN_01df0818(*(undefined8 *)(param_1 + 0x38),5);
    if ((uVar11 & 1) != 0) {
      FUN_01dd4d40(*(undefined8 *)(param_1 + 0x30));
      FUN_014e5120(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 100),1);
      FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),0x15);
    }
    return;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00f3e8f8(&local_58,*(long *)(param_1 + 0x30) + 0x68);
  puVar6 = local_58;
  if (local_58 == (undefined8 *)0x0) goto LAB_01df19a4;
  if (*(short *)((long)local_58 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_58 + 0x1a);
    sVar14 = *(short *)((long)local_58 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01df1a60;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df1a60:
        bVar5 = false;
      }
      if (bVar5) {
        plVar15 = (long *)0x0;
        if (local_58[2] != 0) {
          plVar15 = (long *)(local_58[2] + -0x28);
        }
        goto LAB_01df1a88;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
  }
  plVar15 = (long *)0x0;
LAB_01df1a88:
  psVar1 = (short *)(local_58 + 3);
  do {
    sVar14 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar14 == 1) {
    piVar2 = (int *)((long)local_58 + 0x1c);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_38 = *puVar6;
      FUN_00c44438(lVar13 + 0x8040,&local_38);
    }
  }
  else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar15 == (long *)0x0) goto LAB_01df19a4;
  uVar12 = FUN_01dcd22c(plVar15);
  iVar9 = (int)((ulong)uVar12 >> 0x20);
  iVar16 = (int)uVar12;
  if (iVar9 == 0) {
    uVar11 = FUN_01dd66b8(*(undefined8 *)(param_1 + 0x30));
    if (((uVar11 & 1) == 0) || (*(byte *)(param_1 + 0x69) - 1 != iVar16)) {
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_01df1b60;
    }
    FUN_01dc0660(lVar10,0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = 0x20;
  }
  else if (*(byte *)(param_1 + 0x68) - 1 == iVar9) {
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    if ((int)(uint)(*(byte *)(param_1 + 0x69) >> 1) <= iVar16) {
      FUN_01dd0bfc();
      goto LAB_01df1b80;
    }
LAB_01df1b60:
    FUN_01dd4d40(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(uint *)(param_1 + 100);
  }
  else {
    uVar7 = iVar16 + (iVar9 + -1) * (uint)*(byte *)(param_1 + 0x69);
    uVar8 = FUN_01dd66b8(*(undefined8 *)(param_1 + 0x30));
    uVar8 = FUN_019aeb9c(lVar10,uVar8 & 1);
    if (uVar8 <= uVar7) {
      uVar7 = 0;
    }
    FUN_01dc0660(lVar10,uVar7);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_014e5120(uVar12,uVar7,1);
  FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),0x15);
LAB_01df1b80:
  lVar10 = plVar15[6];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


