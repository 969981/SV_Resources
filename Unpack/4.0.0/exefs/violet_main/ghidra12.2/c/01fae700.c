/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fae700; name: FUN_01fae700
 */


void FUN_01fae700(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 long param_5,undefined8 param_6,ulong param_7)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined4 extraout_s0;
  float fVar9;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_50;
  float local_4c;
  undefined1 local_48;
  undefined4 local_28;
  float local_24;
  
  lVar6 = *(long *)(param_4 + 0x70);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01fae85c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fae85c:
        bVar5 = false;
      }
      if (bVar5) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  FUN_0140731c(plVar8,param_5,param_6,param_4 + 0x1620);
  uVar2 = *(undefined4 *)(param_4 + 0x1618);
  local_24 = nextafterf(1.0,3.4028235e+38);
  local_28 = 0;
  fVar9 = (float)FUN_01096038(param_4 + 0x15b0,&local_28);
  local_48 = 0;
  local_4c = -1.0;
  if ((param_7 & 1) == 0) {
    local_4c = *(float *)(param_5 + 0x40) +
               fVar9 * (*(float *)(param_5 + 0x44) - *(float *)(param_5 + 0x40));
  }
  local_80 = CONCAT44(extraout_var,extraout_s0);
  uStack_78 = extraout_var_00;
  uStack_70 = param_2;
  local_60 = param_3;
  local_50 = uVar2;
  FUN_014071f4(plVar8,&local_80);
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x13];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01fae824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x50))(plVar8);
      return;
    }
    if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


