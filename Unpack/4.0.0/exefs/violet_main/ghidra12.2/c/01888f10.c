/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01888f10; name: FUN_01888f10
 */


uint FUN_01888f10(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  uint unaff_w20;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined3 uStack_28;
  
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_01888f28:
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01888f7c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01888f7c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        unaff_w20 = 0;
        if (lVar6 != 0) {
          local_38 = *param_2;
          plVar8 = (long *)(lVar6 + -0x28);
          uStack_30 = (undefined7)param_2[1];
          uStack_28 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xf) >> 8);
          local_29 = (undefined1)((ulong)param_2[1] >> 0x38);
          uVar5 = FUN_018f5e28(plVar8,0,&local_38);
          lVar6 = *(long *)(lVar6 + 0x70);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          unaff_w20 = uVar5 >> 8 & 0xff;
          if (sVar7 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_01888f28;
      }
      uVar5 = 0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return uVar5 & 0xff | (unaff_w20 & 0xff) << 8;
}


