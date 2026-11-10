/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de1958; name: FUN_01de1958
 */


void FUN_01de1958(long param_1,uint param_2)

{
  int param3;
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  bool bVar8;
  short sVar9;
  byte *pbVar10;
  int param3_00;
  undefined1 *local_c0;
  byte *pbStack_b8;
  undefined8 local_b0;
  long *local_a8;
  byte local_a0 [64];
  
  lVar5 = *(long *)(param_1 + 0x68);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar9 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01de19d8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de19d8:
        bVar8 = false;
      }
      if (bVar8) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar6 = (long *)(lVar5 + -0x28);
        if (lVar5 == 0) {
          return;
        }
        pbVar10 = (byte *)((ulong)local_a0 | 1);
        param3_00 = 0;
        do {
          snprintf((char *)local_a0,0x40,"Button_box_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar7 = pbVar10;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar6,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          param3 = param3_00 + 1;
          snprintf((char *)local_a0,0x40,"Button_search_%02d",param3);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar7 = pbVar10;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar6,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          snprintf((char *)local_a0,0x40,"Button_ride_small_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar7 = pbVar10;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar6,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          snprintf((char *)local_a0,0x40,"Button_temochi_small_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar7 = pbVar10;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar6,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          param3_00 = param3;
        } while (param3 != 3);
        lVar5 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


