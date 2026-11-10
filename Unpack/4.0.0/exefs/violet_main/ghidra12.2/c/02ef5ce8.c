/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef5ce8; name: FUN_02ef5ce8
 */


void FUN_02ef5ce8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_0460e398;
  if (0 < (int)*(uint *)((long)param_1 + 0x54)) {
    lVar7 = 0;
    lVar8 = (ulong)*(uint *)((long)param_1 + 0x54) + 1;
    do {
      if (*(long *)(param_1[9] + lVar7) != -1) {
        *(undefined8 *)(param_1[9] + lVar7) = 0xffffffffffffffff;
      }
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 10);
  *(uint *)(param_1 + 10) = uVar2 & 0x80000000;
  if ((-1 < (int)uVar2) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(long)*(int *)((long)param_1 + 0x54) * 0x10 + 0x10);
  }
  param_1[9] = 0;
  param_1[10] = -0x100000000;
  if (0 < (int)*(uint *)((long)param_1 + 0x44)) {
    lVar7 = 0;
    lVar8 = (ulong)*(uint *)((long)param_1 + 0x44) + 1;
    do {
      if (*(long *)(param_1[7] + lVar7) != -1) {
        *(undefined8 *)(param_1[7] + lVar7) = 0xffffffffffffffff;
      }
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar2 & 0x80000000;
  if ((-1 < (int)uVar2) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(long)*(int *)((long)param_1 + 0x44) * 0x10 + 0x10);
  }
  plVar6 = (long *)param_1[6];
  param_1[7] = 0;
  param_1[8] = -0x100000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 1);
  }
  param_1[4] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02ef5e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


