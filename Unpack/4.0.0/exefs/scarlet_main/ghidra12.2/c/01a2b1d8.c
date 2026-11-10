/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2b1d8; name: FUN_01a2b1d8
 */


void FUN_01a2b1d8(long param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *local_58;
  long *local_38;
  
  if (((*PTR_DAT_047dd000 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  lVar11 = *param_3;
  uVar3 = *(undefined8 *)(lVar11 + 0x88);
  uVar5 = *(undefined8 *)(lVar11 + 0x90);
  uVar4 = *(undefined8 *)(lVar11 + 0x98);
  plVar6 = *(long **)(lVar11 + 0xa0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar10 = *(long **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  *(undefined8 *)(param_1 + 0x218) = uVar5;
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x231) = 1;
  *(long **)(param_1 + 0x228) = plVar6;
  if (*(long *)(param_1 + 400) != 0) {
    FUN_01a2b3b0(&local_38,param_2);
    FUN_01a2b3b0(&local_58,param_3);
    FUN_01a2b470(param_1 + 400,&local_38,&local_58);
    if (local_58 != (long *)0x0) {
      lVar11 = local_58[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01a2b324;
    }
    if (local_38 != (long *)0x0) {
      lVar11 = local_38[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_01a2b324:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


