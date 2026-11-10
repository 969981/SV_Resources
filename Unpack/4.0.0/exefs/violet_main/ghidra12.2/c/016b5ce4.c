/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b5ce4; name: FUN_016b5ce4
 */


void FUN_016b5ce4(long *param_1,char *param_2,byte *param_3)

{
  short *psVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  bool bVar11;
  short sVar12;
  code *pcVar13;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar13 = (code *)*param_1;
  uVar2 = param_1[1];
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_60 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  cVar3 = *param_2;
  lVar8 = (long)uVar2 >> 1;
  if (cVar3 == '\x03') {
    lVar7 = *(long *)(param_2 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar12 = *(short *)(lVar7 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar12) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_016b5e10;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_016b5e10:
          bVar11 = false;
        }
        if (bVar11) {
          lVar7 = *(long *)(lVar7 + 0x10);
          plVar9 = (long *)(lVar7 + -0x28);
          if (lVar7 != 0) {
            if ((uVar2 & 1) != 0) {
              pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar9 + lVar8));
            }
            (*pcVar13)((long *)((long)plVar9 + lVar8),&local_60);
            lVar8 = *(long *)(lVar7 + 8);
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar12 = sVar5;
      } while (sVar5 != 0);
    }
  }
  else {
    if (cVar3 == '\x02') {
      if ((*(long *)(param_2 + 8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 == 0)) goto LAB_016b5d54;
      plVar9 = (long *)(lVar7 + lVar8 + -0x28);
    }
    else {
      if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_2 + 8) == 0))
      goto LAB_016b5d54;
      plVar9 = (long *)(*(long *)(param_2 + 8) + lVar8);
    }
    if ((uVar2 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *plVar9);
    }
    (*pcVar13)(plVar9,&local_60);
  }
LAB_016b5d54:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


