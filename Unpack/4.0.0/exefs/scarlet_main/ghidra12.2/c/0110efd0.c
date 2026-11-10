/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110efd0; name: FUN_0110efd0
 */


void FUN_0110efd0(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *local_50 [2];
  
  plVar10 = (long *)(param_1 + 0x18);
  plVar6 = (long *)*plVar10;
  if ((long *)*plVar10 == (long *)0x0) {
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar7 = *(long *)PTR_DAT_047d8c48;
    *(long *)PTR_DAT_047d8c50 = lVar7;
    FUN_0110f1c4(local_50,*(undefined8 *)(lVar7 + 0x3a0));
    plVar6 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0110f110;
    }
    *plVar10 = (long)local_50[0];
    plVar6 = local_50[0];
  }
  pcVar8 = (code *)plVar6[0x19];
  if (pcVar8 != (code *)0x0) {
    plVar6[0x1a] = 0;
    plVar6[0x1b] = 0;
    plVar6[0x18] = 0;
    plVar6[0x19] = 0;
    (*pcVar8)(plVar6 + 0x1c);
  }
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,plVar6 + 0x1c);
    lVar7 = param_2[1];
    plVar6[0x1b] = param_2[3];
    lVar9 = param_2[2];
    plVar6[0x18] = *param_2;
    plVar6[0x19] = lVar7;
    plVar6[0x1a] = lVar9;
    pcVar8 = (code *)param_2[1];
    if (pcVar8 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar8)(param_2 + 4);
    }
  }
  FUN_00db27cc(local_50,param_1 + 8);
  if ((local_50[0] != (long *)0x0) &&
     (FUN_00cfe35c(local_50[0],plVar10,2), local_50[0] != (long *)0x0)) {
    lVar7 = local_50[0][6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_50[0] + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0110f110:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


