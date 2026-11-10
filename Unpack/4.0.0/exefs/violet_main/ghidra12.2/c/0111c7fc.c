/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111c7fc; name: FUN_0111c7fc
 */


void FUN_0111c7fc(undefined8 *param_1,char *param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  long local_8;
  
  cVar3 = *param_2;
  lVar1 = (long)param_4 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar8 != 0)) {
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
      if (plVar6 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0111c87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar8 = *(long *)(param_2 + 8);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar8 + 0x1a);
        sVar10 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar10) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0111ca9c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0111ca9c:
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
              FUN_02330148(&local_8);
              return;
            }
            break;
          }
          sVar10 = sVar4;
        } while (sVar4 != 0);
      }
      local_8 = 0;
      FUN_02330148(&local_8);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
      return;
    }
    if (cVar3 == '\x01') {
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
                    /* WARNING: Could not recover jumptable at 0x0111c9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x18))();
          return;
        }
      }
      return;
    }
    if (cVar3 == '\0') {
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
                    /* WARNING: Could not recover jumptable at 0x0111c958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x18))();
          return;
        }
      }
      return;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


