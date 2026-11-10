/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a3608; name: FUN_025a3608
 */


uint FUN_025a3608(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (3 < *param_1) {
    return 0;
  }
  lVar7 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = (long *)*param_4;
      local_38 = (long *)param_4[1];
      plVar10 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return uVar5 & 1;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = (long *)*param_4;
      local_38 = (long *)param_4[1];
      plVar10 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return uVar5 & 1;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = (long *)*param_4;
      local_38 = (long *)param_4[1];
      plVar10 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return uVar5 & 1;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_025a3854;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_025a3854:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + -0x28);
          local_58 = *param_4;
          uStack_50 = param_4[1];
          local_48 = param_4[2];
          plVar6 = (long *)param_4[3];
          param_4[3] = 0;
          local_40 = plVar6;
          local_38 = plVar10;
          uVar5 = FUN_025a391c(&local_38,param_2,param_3,&local_58);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          lVar7 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_025a3808;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  uVar5 = 0;
LAB_025a3808:
  return uVar5 & 1;
}


