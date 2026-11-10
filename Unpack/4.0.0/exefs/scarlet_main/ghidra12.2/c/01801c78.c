/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01801c78; name: FUN_01801c78
 */


void FUN_01801c78(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_2e0 [64];
  long *local_2a0 [4];
  long *local_280;
  undefined **local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  long *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  char acStack_230 [512];
  long *local_18;
  
  snprintf(acStack_230,0x200,"data:/%s.trpre",*(char **)(param_1 + 8));
  local_270 = &PTR_FUN_045e5e20;
  uStack_268 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = (long *)0x0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  FUN_01801ea8(local_2a0,acStack_230);
  uVar5 = FUN_00dc5c18(&local_270,1,local_2a0,0,0);
  plVar8 = local_250;
  if ((uVar5 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else if (local_250 != (long *)0x0) {
    lVar7 = local_250[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar6;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_01801fb8(auStack_2e0,&local_270);
  FUN_01802148(&local_18,auStack_2e0,plVar8);
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01801d90;
  }
  FUN_00db239c(auStack_2e0);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
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
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) {
LAB_01801d90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_280 != (long *)0x0) {
    (**(code **)(*local_280 + 0x20))();
  }
  if (local_2a0[0] != (long *)0x0) {
    (**(code **)(*local_2a0[0] + 0x20))();
  }
  FUN_00db239c(&local_270);
  return;
}


