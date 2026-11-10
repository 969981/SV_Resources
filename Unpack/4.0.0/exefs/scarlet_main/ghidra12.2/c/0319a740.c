/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319a740; name: FUN_0319a740
 */


void FUN_0319a740(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)&PTR_LAB_0469a988;
  if ((int)param_1[0x2a] != 0) {
    plVar7 = (long *)param_1[0x29];
    plVar8 = plVar7 + (long)(int)param_1[0x2a] * 3;
    do {
      plVar8 = plVar8 + -3;
      plVar5 = (long *)*plVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar8 != plVar7);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x29],(ulong)*(uint *)((long)param_1 + 0x154) * 0x18);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x144)) && (param_1[0x27] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x27],(ulong)*(uint *)((long)param_1 + 0x144) << 1);
  }
  plVar7 = (long *)param_1[0x26];
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) * 7);
  }
  param_1[0x24] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


