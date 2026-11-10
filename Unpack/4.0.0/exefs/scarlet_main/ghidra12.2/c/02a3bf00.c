/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3bf00; name: FUN_02a3bf00
 */


undefined8
FUN_02a3bf00(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00e76888(&local_68,param_1);
  FUN_02a3ba40(&local_58,local_68,param_2);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_58 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    if (*(int *)((long)local_58 + 0x74) == 2) {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar10 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar10;
      pMVar1 = (MutexType *)(*(long *)(lVar10 + 0x70) + 0x120);
      nn::os::LockMutex(pMVar1);
      local_40 = *param_3;
      uStack_38 = param_3[1] & 0xffffffff;
      local_50 = *param_4;
      uStack_48 = param_4[1] & 0xffffffff;
      (**(code **)(*(long *)local_58[0x1a] + 0x1c0))
                ((long *)local_58[0x1a],local_58[0x1b],&local_40,&local_50,0);
      nn::os::UnlockMutex(pMVar1);
    }
    lVar10 = local_58[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))(local_58);
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    uVar9 = 1;
  }
  return uVar9;
}


