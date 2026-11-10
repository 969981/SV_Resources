/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230a5f0; name: FUN_0230a5f0
 */


void FUN_0230a5f0(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4,undefined8 param_5,
                 undefined4 *param_6)

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
  
  if (3 < *param_2) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
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
      puVar7 = (undefined8 *)(*param_3)(plVar6,param_5,*param_6);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0230a6b4. Too many branches */
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
      puVar7 = (undefined8 *)(*param_3)(plVar6,param_5,*param_6);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0230a744. Too many branches */
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
      puVar7 = (undefined8 *)(*param_3)(plVar6,param_5,*param_6);
      uVar9 = puVar7[1];
      *param_1 = *puVar7;
      param_1[1] = uVar9;
      plVar6 = (long *)puVar7[3];
      param_1[2] = puVar7[2];
      param_1[3] = plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0230a7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
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
        if (cVar4 != '\0') goto LAB_0230a898;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0230a898:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + lVar1));
          }
          puVar7 = (undefined8 *)(*param_3)((long *)(local_8 + lVar1),param_5,*param_6);
          uVar9 = puVar7[1];
          *param_1 = *puVar7;
          param_1[1] = uVar9;
          plVar6 = (long *)puVar7[3];
          param_1[2] = puVar7[2];
          param_1[3] = plVar6;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))();
          }
          FUN_02309fe8(&local_8);
          return;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_02309fe8(&local_8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


