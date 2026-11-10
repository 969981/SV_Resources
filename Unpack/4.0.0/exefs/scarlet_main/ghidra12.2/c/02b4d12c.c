/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b4d12c; name: FUN_02b4d12c
 */


void FUN_02b4d12c(undefined1 *param_1,long *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02b4d188;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b4d188:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -8);
          lVar6 = *(long *)param_2[2];
          if (((param_3 < (ulong)(((long *)param_2[2])[1] - lVar6 >> 4)) &&
              (*(char *)(lVar6 + param_3 * 0x10) == '\a')) &&
             (lVar6 = *(long *)(lVar6 + param_3 * 0x10 + 8), lVar6 != 0)) {
            *param_1 = 0;
            plVar5 = *(long **)(lVar6 + 8);
            *(long **)(param_1 + 8) = plVar5;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))();
            }
            *param_1 = 1;
          }
          else {
            *param_1 = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x02b4d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x18))(plVar8);
          return;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = 0;
  return;
}


