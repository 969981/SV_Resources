/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01111e24; name: FUN_01111e24
 */


void FUN_01111e24(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar12 = (code *)*param_2;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar13 = *(undefined1 **)PTR_DAT_047d3e30;
    param_3 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar13 = &DAT_cbf29ce484222645;
    sVar8 = strlen((char *)param_3);
    bVar3 = *param_3;
    pbVar9 = param_3;
    while (bVar3 != 0) {
      pbVar9 = pbVar9 + 1;
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar9;
    }
    plVar11 = (long *)0x0;
  }
  local_60 = puVar13;
  pbStack_58 = param_3;
  local_50 = sVar8;
  local_48 = plVar11;
  (*pcVar12)(&local_68,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar11 = local_68;
  if (local_68 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar10 = local_68[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar11;
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) {
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


