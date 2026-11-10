/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02363aac; name: FUN_02363aac
 */


void FUN_02363aac(undefined8 *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  
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
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      puVar6 = (undefined8 *)(*param_3)();
      uVar9 = puVar6[1];
      *param_1 = *puVar6;
      param_1[1] = uVar9;
      plVar8 = (long *)puVar6[3];
      param_1[2] = puVar6[2];
      param_1[3] = plVar8;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02363b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))();
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
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      puVar6 = (undefined8 *)(*param_3)();
      uVar9 = puVar6[1];
      *param_1 = *puVar6;
      param_1[1] = uVar9;
      plVar8 = (long *)puVar6[3];
      param_1[2] = puVar6[2];
      param_1[3] = plVar8;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02363be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))();
        return;
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar10 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar10 + lVar1 + -0x28));
      }
      puVar6 = (undefined8 *)(*param_3)();
      uVar9 = puVar6[1];
      *param_1 = *puVar6;
      param_1[1] = uVar9;
      plVar8 = (long *)puVar6[3];
      param_1[2] = puVar6[2];
      param_1[3] = plVar8;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02363c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))();
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
  lVar10 = *(long *)(param_2 + 8);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02363d20;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02363d20:
        bVar7 = false;
      }
      if (bVar7) {
        plVar8 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        if (*(long *)(lVar10 + 0x10) != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar8 + lVar1));
          }
          puVar6 = (undefined8 *)(*param_3)();
          uVar9 = puVar6[1];
          *param_1 = *puVar6;
          param_1[1] = uVar9;
          plVar3 = (long *)puVar6[3];
          param_1[2] = puVar6[2];
          param_1[3] = plVar3;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))();
          }
                    /* WARNING: Could not recover jumptable at 0x02363d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x60))(plVar8);
          return;
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


