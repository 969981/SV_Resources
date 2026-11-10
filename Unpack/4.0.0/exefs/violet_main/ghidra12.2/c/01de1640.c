/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de1640; name: FUN_01de1640
 */


void FUN_01de1640(long param_1,uint param_2)

{
  int param3;
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  bool bVar9;
  short sVar10;
  byte *pbVar11;
  int param3_00;
  undefined1 *local_c0;
  byte *pbStack_b8;
  undefined8 local_b0;
  long *local_a8;
  byte local_a0 [64];
  
  uVar5 = FUN_01dd66b8();
  lVar6 = *(long *)(param_1 + 0x68);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar10 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01de16c8;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de16c8:
        bVar9 = false;
      }
      if (bVar9) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 == 0) {
          return;
        }
        pbVar11 = (byte *)((ulong)local_a0 | 1);
        param3_00 = 0;
        do {
          snprintf((char *)local_a0,0x40,"Button_box_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar8 = pbVar11;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar7,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          param3 = param3_00 + 1;
          snprintf((char *)local_a0,0x40,"Button_search_%02d",param3);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar8 = pbVar11;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar7,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          snprintf((char *)local_a0,0x40,"Button_ride_small_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar8 = pbVar11;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar7,&local_c0,uVar5 & param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          snprintf((char *)local_a0,0x40,"Button_temochi_small_%02d",param3_00);
          local_c0 = &DAT_cbf29ce484222645;
          if (local_a0[0] != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar8 = pbVar11;
            bVar2 = local_a0[0];
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_b0 = 0x3f;
          local_a8 = (long *)0x0;
          pbStack_b8 = local_a0;
          FUN_0111e3d4(plVar7,&local_c0,param_2 & 1);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          param3_00 = param3;
        } while (param3 != 3);
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


