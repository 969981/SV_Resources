/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0302b544; name: FUN_0302b544
 */


void FUN_0302b544(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  *param_1 = (long)&PTR_LAB_04618ac0;
  plVar7 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    if (*plVar7 != 0) {
      lVar6 = *plVar7 + (long)plVar7;
    }
    plVar9 = (long *)(lVar6 + (ulong)uVar3 * 8);
    uVar8 = 0;
    do {
      plVar9 = plVar9 + -1;
      if (((*plVar9 != 0) && (plVar2 = (long *)(*plVar9 + (long)plVar9), plVar2 != (long *)0x0)) &&
         (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar6 = 0;
    if (*plVar7 != 0) {
      lVar6 = *plVar7 + (long)plVar7;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar6,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


