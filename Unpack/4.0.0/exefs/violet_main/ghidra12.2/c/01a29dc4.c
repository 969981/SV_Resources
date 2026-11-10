/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a29dc4; name: FUN_01a29dc4
 */


void FUN_01a29dc4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined4 local_a8;
  char acStack_a0 [64];
  long *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined4 local_38;
  
  local_40 = (long *)0x0;
  local_38 = 0;
  local_60 = (long *)0x0;
  puStack_58 = &DAT_cbf29ce484222645;
  local_50 = &DAT_03c886bc;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x38) + 0x720);
    plVar8 = (long *)PTR_PTR_047d4508;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      plVar8 = plVar9 + 7;
    }
    iVar5 = snprintf(acStack_a0,0x40,"%sai_common_raid01.bin",(char *)*plVar8);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (-1 < iVar5) {
      FUN_01a2a00c(&local_d0,acStack_a0);
      local_60 = local_d0;
      local_d0 = (long *)0x0;
      puStack_58 = puStack_c8;
      local_50 = local_c0;
      uStack_48 = uStack_b8;
      local_40 = local_b0;
      local_38 = local_a8;
      uVar6 = FUN_00dc5c18(param_1 + 0x198,1,&local_60,0,*(undefined8 *)(param_1 + 8));
      if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x1b8), plVar8 != (long *)0x0)) {
        lVar10 = plVar8[6];
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar7;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar10 = plVar8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
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
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


