/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01893468; name: FUN_01893468
 */


void FUN_01893468(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar12 = *(long **)(param_1 + 0x128);
  local_58 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50[0] = 0;
    local_50[1] = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(local_50,param_1 + 0x30,&local_70);
    plVar12 = local_58;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_50[0] != 0) {
    if (*(short *)(local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_50[0] + 0x1a);
      sVar11 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar11) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0189353c;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0189353c:
          bVar10 = false;
        }
        if (bVar10) {
          lVar9 = *(long *)(local_50[0] + 0x10);
          if (lVar9 == 0) goto LAB_01893604;
          lVar6 = FUN_00f0bb80(lVar9 + 0xe0,&local_90);
          if (lVar6 != 0) {
            local_90 = 0x1d7288a2dd6119c9;
            uVar5 = FUN_022490f4();
            puVar7 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_90);
            puVar4 = PTR_LAB_047dce18;
            *(undefined4 *)(puVar7 + 2) = uVar5;
            *puVar7 = puVar4;
            local_90 = 0x1d7288a2dd6119c9;
            pcStack_88 = "Priority";
            local_80 = 8;
            local_78 = (long *)0x0;
            uVar8 = FUN_01470908(param_1,&local_90);
            uVar5 = 0;
            if ((uVar8 & 0xff) != 0) {
              uVar5 = (undefined4)(uVar8 >> 0x20);
            }
            FUN_011e465c(lVar6,uVar5);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
          break;
        }
        sVar11 = sVar2;
      } while (sVar2 != 0);
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_01893604:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar11 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      FUN_0116e168();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


