/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a6edc; name: FUN_024a6edc
 */


void FUN_024a6edc(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((long)-param_2 < 0) {
    lVar2 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0) * 0x10;
    uVar7 = lVar2 - 0x10;
    do {
      plVar6 = *(long **)(uVar7 + 8);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          piVar8 = (int *)((long)plVar6 + 0xc);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          do {
            iVar5 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
      }
      uVar7 = uVar7 - 0x10;
    } while (lVar2 + ~param_2 * 0x10 < uVar7);
  }
  return;
}


