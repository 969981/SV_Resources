/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e8e80; name: FUN_026e8e80
 */


void FUN_026e8e80(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined1 local_80;
  long *local_78;
  undefined8 local_70;
  ulong uStack_68;
  
  lVar12 = *param_1;
  plVar8 = *(long **)param_1[2];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
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
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
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
  plVar10 = (long *)param_2[3];
  lVar9 = lVar12 + 0x168;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_70 = param_2[4];
  bVar3 = *(byte *)(param_2 + 5);
  plVar11 = (long *)param_2[6];
  uStack_68 = (ulong)bVar3;
  if (plVar11 == (long *)0x0) {
    FUN_026e910c(lVar9,&local_70);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    FUN_026e910c(lVar9,&local_70);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  local_90 = (long *)param_2[3];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  local_88 = param_2[4];
  local_80 = *(undefined1 *)(param_2 + 5);
  local_78 = (long *)param_2[6];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  uVar7 = *(undefined8 *)param_1[3];
  puVar6 = (undefined8 *)FUN_00c8f0cc(lVar12 + 0x60,&local_a8);
  *puVar6 = uVar7;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(long *)param_1[3] = *(long *)param_1[3] + 1;
  return;
}


