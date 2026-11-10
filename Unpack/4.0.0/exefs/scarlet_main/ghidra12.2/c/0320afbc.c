/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320afbc; name: FUN_0320afbc
 */


void FUN_0320afbc(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar9 = *param_1;
  *(undefined4 *)(lVar9 + 8) = 0;
  FUN_0320f0e8(lVar9 + 0x10);
  FUN_031fb44c(lVar9 + 0x58);
  plVar10 = *(long **)(lVar9 + 0x30);
  if (plVar10 != (long *)0x0) {
    if ((int)plVar10[1] != 0) {
      lVar11 = *plVar10;
      lVar9 = lVar11 + (long)(int)plVar10[1] * 0x20;
      do {
        puVar1 = (ulong *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x20;
        if ((*puVar1 & 1) != 0) {
          plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
          plVar8 = plVar6 + 1;
          do {
            lVar5 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *(int *)plVar8 = (int)lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      } while (lVar9 != lVar11);
    }
    *(undefined4 *)(plVar10 + 1) = 0;
    if ((int)plVar10[4] != 0) {
      plVar6 = (long *)plVar10[3];
      plVar8 = plVar6 + (int)plVar10[4];
      do {
        plVar8 = plVar8 + -1;
        plVar7 = (long *)*plVar8;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar2 = plVar7 + 2;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      } while (plVar8 != plVar6);
    }
    plVar8 = (long *)plVar10[2];
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[2] = 0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar10 = plVar8 + 2;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0320b0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))();
        return;
      }
    }
  }
  return;
}


