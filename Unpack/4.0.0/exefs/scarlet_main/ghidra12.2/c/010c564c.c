/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c564c; name: FUN_010c564c
 */


void FUN_010c564c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  short sVar8;
  bool bVar9;
  
  lVar5 = *param_2;
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  sVar8 = *(short *)(lVar5 + 0x1a);
LAB_010c5684:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_010c56a8;
    bVar9 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_010c56a8:
    bVar9 = false;
  }
  if (!bVar9) {
    sVar8 = sVar2;
    if (sVar2 == 0) {
      return;
    }
    goto LAB_010c5684;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  if ((*(char *)(lVar5 + 0x99) == '\0') && (*(char *)(lVar5 + 0x98) != '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  lVar6 = *(long *)(lVar5 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar8 = *psVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar8 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))();
  }
  else if (sVar8 == 0) goto LAB_010c57f4;
  if (bVar9) {
    return;
  }
  lVar5 = *param_2;
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) goto LAB_010c5714;
  psVar1 = (short *)(lVar5 + 0x1a);
  sVar8 = *(short *)(lVar5 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar8) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_010c5790;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_010c5790:
      bVar9 = false;
    }
    if (bVar9) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x99) = 1;
        pcVar7 = *(code **)(lVar5 + 0x20);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          (*pcVar7)(lVar5 + 0x38);
        }
        lVar6 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
        }
        else if (sVar8 == 0) {
LAB_010c57f4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_010c5714;
    }
    sVar8 = sVar2;
    if (sVar2 == 0) {
LAB_010c5714:
      nn::os::LockMutex((MutexType *)(param_1 + 0x120));
      *(undefined1 *)(param_1 + 0x109) = 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
      return;
    }
  } while( true );
}


