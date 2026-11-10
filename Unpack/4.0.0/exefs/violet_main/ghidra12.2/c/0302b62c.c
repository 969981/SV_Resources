/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0302b62c; name: FUN_0302b62c
 */


void FUN_0302b62c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_04618ac0;
  plVar8 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    plVar10 = (long *)(lVar7 + (ulong)uVar3 * 8);
    uVar9 = 0;
    do {
      plVar10 = plVar10 + -1;
      if (((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  puVar6 = PTR_DAT_047d1a08;
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0302b720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar6 + 8))(0,param_1,0);
  return;
}


