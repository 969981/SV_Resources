/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02118030; name: FUN_02118030
 */


void FUN_02118030(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *local_28;
  undefined8 local_8;
  
  uVar5 = FUN_017e4fe4();
  uVar6 = FUN_019c99a4(uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar5 = FUN_014f5ef8();
    uVar6 = FUN_014f5f24(uVar5,0);
    if ((uVar6 & 1) != 0) {
      local_8 = 0x700000000;
      lVar7 = FUN_01498338(param_1);
      FUN_0106f6d8(&local_28,*(undefined8 *)(lVar7 + 0x20),&local_8);
      FUN_017e54a8(param_1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[6];
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
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0211836c;
      }
    }
  }
  uVar5 = FUN_017e4fe4(param_1);
  uVar6 = FUN_019c99a4(uVar5,1);
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar5 = FUN_014f5ef8();
    uVar6 = FUN_014f5f24(uVar5,1);
    if ((uVar6 & 1) != 0) {
      local_8 = 0x700000001;
      lVar7 = FUN_01498338(param_1);
      FUN_0106f6d8(&local_28,*(undefined8 *)(lVar7 + 0x20),&local_8);
      FUN_017e54a8(param_1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[6];
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
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0211836c;
      }
    }
  }
  uVar5 = FUN_017e4fe4(param_1);
  uVar6 = FUN_019c99a4(uVar5,2);
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar5 = FUN_014f5ef8();
    uVar6 = FUN_014f5f24(uVar5,2);
    if ((uVar6 & 1) != 0) {
      local_8 = 0x700000002;
      lVar7 = FUN_01498338(param_1);
      FUN_0106f6d8(&local_28,*(undefined8 *)(lVar7 + 0x20),&local_8);
      FUN_017e54a8(param_1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[6];
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
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0211836c;
      }
    }
  }
  uVar5 = FUN_017e4fe4(param_1);
  uVar6 = FUN_019c99a4(uVar5,3);
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar5 = FUN_014f5ef8();
    uVar6 = FUN_014f5f24(uVar5,3);
    if ((uVar6 & 1) != 0) {
      local_8 = 0x700000003;
      lVar7 = FUN_01498338(param_1);
      FUN_0106f6d8(&local_28,*(undefined8 *)(lVar7 + 0x20),&local_8);
      FUN_017e54a8(param_1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[6];
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
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0211836c;
      }
    }
  }
  uVar5 = FUN_017e4fe4(param_1);
  uVar6 = FUN_019c99a4(uVar5,4);
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar5 = FUN_014f5ef8();
    uVar6 = FUN_014f5f24(uVar5,4);
    if ((uVar6 & 1) != 0) {
      local_8 = 0x700000004;
      lVar7 = FUN_01498338(param_1);
      FUN_0106f6d8(&local_28,*(undefined8 *)(lVar7 + 0x20),&local_8);
      FUN_017e54a8(param_1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[6];
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
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_0211836c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


