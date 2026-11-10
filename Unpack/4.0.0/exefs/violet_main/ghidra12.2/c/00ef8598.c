/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef8598; name: FUN_00ef8598
 */


void FUN_00ef8598(long *param_1,long param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x120));
  plVar7 = (long *)**(long **)(param_2 + 0x28);
  plVar3 = (long *)(*(long **)(param_2 + 0x28))[1];
  if (plVar7 != plVar3) {
LAB_00ef85d0:
    lVar9 = *plVar7;
    if (*(int *)(lVar9 + 0xd8) != param_3) goto code_r0x00ef85e0;
    *param_1 = lVar9;
    if (lVar9 == 0) goto LAB_00ef8664;
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) != 0) {
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto joined_r0x00ef8654;
    }
    goto LAB_00ef86f0;
  }
LAB_00ef85ec:
  plVar7 = (long *)**(long **)(param_2 + 0x48);
  do {
    if (plVar7 == (long *)(*(long **)(param_2 + 0x48))[1]) {
      *param_1 = 0;
LAB_00ef8664:
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x120));
      return;
    }
    lVar9 = *plVar7;
    iVar8 = 0xffffff;
    if (*(long *)(lVar9 + 0x340) != -1) {
      iVar8 = (int)*(long *)(lVar9 + 0x340);
    }
    if (iVar8 == param_3) {
      *param_1 = lVar9;
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x30);
        if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00ef86f0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
joined_r0x00ef8654:
        if (sVar2 == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar6;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      goto LAB_00ef8664;
    }
    plVar7 = plVar7 + 1;
  } while( true );
code_r0x00ef85e0:
  plVar7 = plVar7 + 1;
  if (plVar3 == plVar7) goto LAB_00ef85ec;
  goto LAB_00ef85d0;
}


