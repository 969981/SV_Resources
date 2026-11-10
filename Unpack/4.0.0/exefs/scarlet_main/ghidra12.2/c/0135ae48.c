/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135ae48; name: FUN_0135ae48
 */


undefined8 FUN_0135ae48(long param_1,undefined8 param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50 [2];
  long *local_28;
  
  puVar6 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar8 = PTR_DAT_047d8c50;
  puVar7 = PTR_DAT_047d8c48;
  uVar10 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar10;
  FUN_0135b908(&local_28,uVar10,param_2);
  plVar1 = (long *)(param_1 + 8);
  FUN_0135b170(plVar1,&local_28);
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[6];
    psVar2 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0135b080;
  }
  if (*plVar1 == 0) {
    uVar10 = 0;
  }
  else {
    FUN_01124c0c(local_50,plVar1);
    FUN_00cfe35c(local_50[0],param_1 + 0x18,1);
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar10 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar10;
    FUN_00cfc3c0(&local_60,uVar10,local_50[0]);
    local_68 = local_60;
    local_60 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x20,&local_68);
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      psVar2 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0135b080;
    }
    local_70 = local_58;
    local_58 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x30,&local_70);
    if (local_70 != (long *)0x0) {
      lVar11 = local_70[6];
      psVar2 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0135b080;
    }
    if (local_58 != (long *)0x0) {
      lVar11 = local_58[6];
      psVar2 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0135b080;
    }
    if (local_60 != (long *)0x0) {
      lVar11 = local_60[6];
      psVar2 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0135b080;
    }
    if (local_50[0] != (long *)0x0) {
      lVar11 = local_50[0][6];
      psVar2 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_50[0] + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_0135b080:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}


