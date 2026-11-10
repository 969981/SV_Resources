/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b221c; name: FUN_021b221c
 */


undefined8 FUN_021b221c(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50 [2];
  undefined1 auStack_28 [8];
  
  puVar5 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar7 = PTR_DAT_047d8c50;
  puVar6 = PTR_DAT_047d8c48;
  uVar9 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar9;
  FUN_021b24d0(auStack_28,uVar9,param_2);
  FUN_021b3100(param_1 + 8,auStack_28);
  FUN_021af8c0(auStack_28);
  if (*(long *)(param_1 + 8) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_021af938(local_50,param_1 + 8);
    FUN_00cfe35c(local_50[0],param_1 + 0x18,1);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar9 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar9;
    FUN_00cfc3c0(&local_60,uVar9,local_50[0]);
    local_68 = local_60;
    local_60 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x20,&local_68);
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_021b23d4;
    }
    local_70 = local_58;
    local_58 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x30,&local_70);
    if (local_70 != (long *)0x0) {
      lVar10 = local_70[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_021b23d4;
    }
    if (local_58 != (long *)0x0) {
      lVar10 = local_58[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_021b23d4;
    }
    if (local_60 != (long *)0x0) {
      lVar10 = local_60[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_021b23d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_021af8c0(local_50);
    uVar9 = 1;
  }
  return uVar9;
}


