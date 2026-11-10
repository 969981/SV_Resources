/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022eba5c; name: FUN_022eba5c
 */


void FUN_022eba5c(undefined8 *param_1,undefined1 *param_2,code *param_3,ulong param_4,
                 undefined4 *param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  long local_8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar6 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar6);
      }
      puVar7 = (undefined8 *)(*param_3)(plVar6,*param_5);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022ebb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar6 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar6);
      }
      puVar7 = (undefined8 *)(*param_3)(plVar6,*param_5);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022ebba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar8 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar6 = (long *)(lVar8 + lVar1 + -0x28);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar6);
      }
      puVar7 = (undefined8 *)(*param_3)(plVar6,*param_5);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022ebc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 3:
    break;
  default:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  lVar8 = *(long *)(param_2 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_022ebccc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022ebccc:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + lVar1));
          }
          puVar7 = (undefined8 *)(*param_3)((long *)(local_8 + lVar1),*param_5);
          uVar9 = puVar7[1];
          *param_1 = *puVar7;
          param_1[1] = uVar9;
          plVar6 = (long *)puVar7[3];
          param_1[2] = puVar7[2];
          param_1[3] = plVar6;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))();
          }
          FUN_022eb7d4(&local_8);
          return;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_022eb7d4(&local_8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


