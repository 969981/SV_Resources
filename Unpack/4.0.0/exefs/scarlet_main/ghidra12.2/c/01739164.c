/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01739164; name: FUN_01739164
 */


void FUN_01739164(long *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long local_18;
  
  plVar1 = param_2 + 1;
  do {
    lVar9 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar7;
  FUN_00c44204(&local_18,uVar7,lVar9);
  lVar8 = *param_2;
  *param_2 = 0;
  if (lVar8 != 0) {
    psVar2 = (short *)(lVar8 + 0x18);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      FUN_0116e168();
    }
    else if (sVar3 == 0) goto LAB_01739258;
  }
  if (local_18 == 0) {
    FUN_01bfbc8c(param_1);
  }
  else {
    lVar8 = *param_1;
    *param_1 = 0;
    if (lVar8 != 0) {
      psVar2 = (short *)(lVar8 + 0x18);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        FUN_0116e168();
      }
      else if (sVar3 == 0) goto LAB_01739258;
    }
    lVar8 = local_18;
    local_18 = 0;
    *param_1 = lVar8;
    param_1[1] = lVar9;
  }
  if (local_18 != 0) {
    psVar2 = (short *)(local_18 + 0x18);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      FUN_0116e168();
    }
    else if (sVar3 == 0) {
LAB_01739258:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


