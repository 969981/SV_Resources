/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e56a0; name: FUN_017e56a0
 */


undefined8 FUN_017e56a0(long param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *local_2620;
  undefined8 local_2618;
  long *local_2610;
  undefined1 auStack_2608 [8];
  undefined1 auStack_2600 [344];
  undefined1 local_24a8 [4];
  undefined8 local_24a4;
  undefined1 local_249c [2];
  undefined2 local_249a;
  undefined4 local_2498;
  undefined1 local_2494 [4];
  undefined2 local_2490;
  undefined1 local_248e [2];
  undefined2 local_248c [4614];
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  
  lVar6 = FUN_017e59a4();
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    local_70 = (long *)0x0;
    local_80 = FUN_01497d84(param_1);
    local_78 = FUN_014f5f08(param_1);
    plVar7 = (long *)FUN_017e59a4(param_1);
    uVar8 = (**(code **)(*plVar7 + 0x90))(plVar7,&local_80);
    if (((uVar8 & 1) == 0) || (local_70 == (long *)0x0)) {
      uVar9 = 0;
    }
    else {
      lVar6 = 0;
      do {
        memset(auStack_2600 + lVar6,0,0x158);
        FUN_017a6624(local_249c + lVar6 + 2);
        memset(auStack_2608 + lVar6,0,0x180);
        lVar2 = lVar6 + 0x180;
        local_24a8[lVar6] = 5;
        *(undefined8 *)(local_24a8 + lVar6 + 4) = 0;
        local_249c[lVar6] = 0;
        *(undefined2 *)(local_249c + lVar6 + 2) = 10;
        *(undefined4 *)(local_249c + lVar6 + 4) = 0xa0a0a0a;
        local_2494[lVar6] = 10;
        *(undefined2 *)(local_2494 + lVar6 + 4) = 0;
        local_248e[lVar6] = 0;
        *(undefined2 *)((long)local_248c + lVar6) = 0;
        lVar6 = lVar2;
      } while (lVar2 != 0x2580);
      FUN_013702c0(auStack_2608);
      memcpy(auStack_2608,local_70 + 9,0x2582);
      uVar9 = *(undefined8 *)(param_1 + 8);
      local_2618 = FUN_01498338(param_1);
      FUN_021183a8(&local_2610,uVar9,&local_2618,auStack_2608);
      local_2620 = local_2610;
      if (local_2610 != (long *)0x0) {
        lVar6 = local_2610[6];
        if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
          *(undefined8 *)(lVar6 + 8) = uVar9;
          *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      FUN_01498340(param_1,&local_2620);
      if (local_2620 != (long *)0x0) {
        lVar6 = local_2620[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_2620 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_017e5764;
      }
      if (local_2610 != (long *)0x0) {
        lVar6 = local_2610[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_2610 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_017e5764;
      }
      uVar9 = 1;
    }
    if (local_70 != (long *)0x0) {
      lVar6 = local_70[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_017e5764:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return uVar9;
}


