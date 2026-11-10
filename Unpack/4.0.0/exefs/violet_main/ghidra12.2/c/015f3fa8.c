/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f3fa8; name: FUN_015f3fa8
 */


void FUN_015f3fa8(long param_1,int *param_2,undefined8 param_3)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ushort *puVar11;
  long *plVar12;
  long lVar13;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined4 local_30;
  long local_28;
  
  puVar11 = (ushort *)((long)param_2 - (long)*param_2);
  uVar5 = *puVar11;
  if (uVar5 < 7) {
    return;
  }
  if ((ulong)puVar11[3] != 0) {
    iVar4 = *(int *)((long)param_2 + (ulong)puVar11[3]);
    if (iVar4 == 1) {
      if (uVar5 < 0xb) {
        return;
      }
      if ((ulong)puVar11[5] == 0) {
        return;
      }
      puVar2 = (uint *)((long)param_2 + (ulong)puVar11[5]);
      local_28 = (long)puVar2 + (ulong)*puVar2 + 4;
      FUN_00e52f24(&local_58,&local_28);
      local_88 = local_58;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))();
      }
      local_80 = local_50;
      uStack_78 = uStack_48;
      local_70 = local_40;
      local_68 = local_38;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      local_60 = local_30;
      *(undefined1 *)(param_1 + 0x40) = 1;
      uVar9 = FUN_00dc5c18(param_1,1,&local_88,0,param_3);
      if (((uVar9 & 1) != 0) && (plVar12 = *(long **)(param_1 + 0x20), plVar12 != (long *)0x0)) {
        lVar13 = plVar12[6];
        if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar10;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar13 = plVar12[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (local_58 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_58 + 0x20))();
      return;
    }
    if (iVar4 != 0) {
      return;
    }
  }
  if (((uVar5 < 9) || ((ulong)puVar11[4] == 0)) ||
     (uVar8 = *(int *)((long)param_2 + (ulong)puVar11[4]) - 1, 5 < uVar8)) {
    return;
  }
  *(uint *)(param_1 + 0x44) = uVar8;
  nn::pl::RequestSharedFontLoad();
  return;
}


