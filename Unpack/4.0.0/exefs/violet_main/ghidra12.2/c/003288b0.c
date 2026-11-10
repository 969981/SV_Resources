/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003288b0; name: FUN_003288b0
 */


void FUN_003288b0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_50 [8];
  long *local_48;
  long *local_40;
  
  lVar8 = param_1[0xd];
  *param_1 = (long)&PTR_FUN_044951d8;
  param_1[0xd] = 0;
  uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xb0);
  local_40 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  local_40[4] = lVar8;
  *local_40 = (long)&PTR_LAB_04495238;
  local_40[1] = 0;
  local_40[2] = 0;
  local_48 = local_40 + 3;
  *local_48 = (long)&PTR_LAB_04495270;
                    /* try { // try from 00328918 to 00328927 has its CatchHandler @ 00328a74 */
  FUN_003627bc(uVar6,&local_48,auStack_50);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar7 = (undefined8 *)param_1[0xd];
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
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
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      puVar7 = (undefined8 *)param_1[0xc];
      param_1[0xc] = 0;
      goto joined_r0x00328988;
    }
  }
  puVar7 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
joined_r0x00328988:
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
  }
  *param_1 = (long)(PTR_DAT_047ccbe0 + 0x10);
                    /* try { // try from 003289c0 to 003289c3 has its CatchHandler @ 00328a70 */
  FUN_0038db20(param_1 + 8);
  FUN_00328ce4(param_1 + 2);
  puVar5 = PTR_LAB_047cba48;
  puVar7 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[4];
  if (puVar7 != puVar2) {
    do {
      puVar9 = puVar7 + 1;
      FUN_0049e790(puVar5,*puVar7);
      puVar7 = puVar9;
    } while (puVar2 != puVar9);
    lVar8 = param_1[4] - param_1[3];
    if (lVar8 != 0) {
      param_1[4] = param_1[4] + (lVar8 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (param_1[2] != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


