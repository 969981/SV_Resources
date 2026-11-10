/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f66758; name: FUN_01f66758
 */


undefined8 FUN_01f66758(long param_1,void *param_2)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_70 [4];
  undefined8 *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_011722d4(local_50,1);
  lVar10 = param_1 + 0x48;
  FUN_00d8e6c4(lVar10,local_50);
  FUN_01c45238(param_1 + 0x58,local_40);
  FUN_00d8e444(local_50);
  uVar7 = FUN_019c7a40(lVar10);
  if (((uVar7 & 1) == 0) || (sVar5 = FUN_01419468(lVar10), sVar5 != 2)) {
    return 0;
  }
  lVar8 = FUN_019965ec(lVar10);
  lVar9 = FUN_01dcd15c(lVar10,0);
  if (lVar9 == lVar8) {
    *(long *)(param_1 + 0x88) = lVar8;
  }
  else {
    *(long *)(param_1 + 0x90) = lVar9;
  }
  lVar9 = FUN_01dcd15c(lVar10,1);
  if (lVar9 == lVar8) {
    *(long *)(param_1 + 0x88) = lVar8;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x90) = lVar9;
  }
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    return 0;
  }
  FUN_01f66a30(local_70,param_1);
  FUN_01e66630(local_50,lVar10,0,local_70);
  FUN_0178f674(param_1 + 0x98,local_50);
  if (local_50[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50[0] + 3);
    do {
      sVar5 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *local_50[0];
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_01f668d0;
  }
  if (local_70[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70[0] + 3);
    do {
      sVar5 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_70[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *local_70[0];
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
LAB_01f668d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  memcpy((void *)(param_1 + 0xe4),param_2,0x9fc);
  return 1;
}


