/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3384c; name: FUN_01a3384c
 */


void FUN_01a3384c(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a338c4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a338c4:
        bVar6 = false;
      }
      if (bVar6) {
        plVar7 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        if (*(long *)(lVar9 + 0x10) != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar7 + ((long)param_4 >> 1)));
          }
          puVar5 = (undefined8 *)(*param_3)();
          uVar8 = puVar5[1];
          *param_1 = *puVar5;
          param_1[1] = uVar8;
          plVar2 = (long *)puVar5[3];
          param_1[2] = puVar5[2];
          param_1[3] = plVar2;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x18))();
          }
                    /* WARNING: Could not recover jumptable at 0x01a33940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x60))(plVar7);
          return;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


