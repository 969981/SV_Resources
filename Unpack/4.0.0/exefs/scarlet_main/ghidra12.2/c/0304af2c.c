/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304af2c; name: FUN_0304af2c
 */


void FUN_0304af2c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  
  *param_1 = (long)(PTR_DAT_047e4a50 + 0x10);
  puVar4 = PTR_DAT_047d1a08;
  if ((param_1[0xb] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[0xb] - 1,0);
  }
  if ((int)param_1[10] != 0) {
    plVar8 = (long *)param_1[9];
    plVar10 = plVar8 + (long)(int)param_1[10] * 6;
    do {
      puVar9 = (ulong *)(plVar10 + -2);
      plVar10 = plVar10 + -6;
      if ((*puVar9 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,*puVar9 - 1,0);
      }
      plVar5 = (long *)*plVar10;
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
    } while (plVar10 != plVar8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) * 0x30);
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if ((int)param_1[8] != 0) {
    lVar7 = param_1[7];
    lVar6 = (long)(int)param_1[8] * 0xb0;
    do {
      FUN_00cb081c(lVar7 + -0xb0 + lVar6);
      lVar6 = lVar6 + -0xb0;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) * 0xb0);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) * 0x70);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if ((int)param_1[4] != 0) {
    puVar9 = (ulong *)param_1[3];
    puVar11 = puVar9 + (long)(int)param_1[4] * 10;
    do {
      plVar8 = (long *)puVar11[-9];
      puVar11 = puVar11 + -10;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar10 = plVar8 + 2;
        do {
          lVar6 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if ((*puVar11 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,*puVar11 - 1,0);
      }
    } while (puVar11 != puVar9);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x50);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


