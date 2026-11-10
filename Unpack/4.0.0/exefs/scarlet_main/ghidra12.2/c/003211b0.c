/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003211b0; name: FUN_003211b0
 */


void FUN_003211b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 ulong param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 auStack_70 [8];
  long *local_68;
  long *local_60;
  
  lVar9 = *(long *)(param_1 + 8);
  if (param_4 == (undefined4 *)0x0) {
    if (param_6 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00321588(lVar9,param_5,1);
    return;
  }
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x50);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  plVar13 = puVar3 + 1;
  *plVar13 = 1;
  *puVar3 = &PTR_FUN_044954b8;
  puVar3[2] = lVar9;
  puVar3[3] = param_2;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = *param_4;
  puVar3[6] = param_4;
  puVar3[7] = param_5;
  puVar3[8] = param_6;
  *(undefined1 *)(puVar3 + 9) = 0;
                    /* try { // try from 00321238 to 0032123b has its CatchHandler @ 00321584 */
  FUN_00358050(puVar3 + 3,*(undefined8 *)(lVar9 + 0xc0));
  plVar5 = *(long **)(puVar3[2] + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar6 = puVar3[2];
                    /* try { // try from 0032125c to 00321263 has its CatchHandler @ 00321580 */
  FUN_0038db40(lVar6 + 0x1a0);
  puVar4 = (undefined8 *)(lVar9 + 0x1c8);
  puVar7 = puVar4;
  if (*(undefined8 **)(lVar9 + 0x1c8) == (undefined8 *)0x0) {
    puVar12 = puVar4;
  }
  else {
    puVar12 = *(undefined8 **)(lVar9 + 0x1c8);
    while( true ) {
      while (param_5 < (ulong)puVar12[4]) {
        puVar7 = puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)*puVar12;
          goto joined_r0x0032132c;
        }
        puVar12 = (undefined8 *)*puVar12;
      }
      if (param_5 <= (ulong)puVar12[4]) break;
      puVar7 = puVar12 + 1;
      if ((undefined8 *)*puVar7 == (undefined8 *)0x0) break;
      puVar12 = (undefined8 *)*puVar7;
    }
  }
  puVar11 = (undefined8 *)*puVar7;
joined_r0x0032132c:
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar11[4] = param_5;
    puVar11[5] = 0;
    puVar11[2] = puVar12;
    *puVar11 = 0;
    puVar11[1] = 0;
    *puVar7 = puVar11;
    if (**(long **)(lVar9 + 0x1c0) == 0) {
      puVar7 = puVar11;
    }
    else {
      *(long *)(lVar9 + 0x1c0) = **(long **)(lVar9 + 0x1c0);
      puVar7 = (undefined8 *)*puVar7;
    }
    FUN_010108e0(*(undefined8 *)(lVar9 + 0x1c8),puVar7);
    *(long *)(lVar9 + 0x1d0) = *(long *)(lVar9 + 0x1d0) + 1;
  }
  if (puVar11[5] != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0032151c to 0032151f has its CatchHandler @ 00321524 */
    abort();
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar7 = (undefined8 *)*puVar4;
  if (puVar7 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)(lVar9 + 0x1c8);
    do {
      uVar8 = puVar7[4];
      puVar4 = puVar7;
      if (param_5 <= uVar8 && uVar8 != param_5) {
        puVar12 = puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar7;
          goto joined_r0x003213d0;
        }
        puVar7 = (undefined8 *)*puVar7;
      }
      else {
        if (param_5 <= uVar8) goto LAB_003213a4;
        puVar12 = puVar7 + 1;
        puVar7 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_003213a4;
      }
    } while( true );
  }
  puVar7 = (undefined8 *)*puVar4;
  puVar12 = puVar4;
joined_r0x003213d0:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar7[4] = param_5;
    puVar7[5] = 0;
    puVar7[2] = puVar4;
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar12 = puVar7;
    if (**(long **)(lVar9 + 0x1c0) == 0) {
      puVar4 = puVar7;
    }
    else {
      *(long *)(lVar9 + 0x1c0) = **(long **)(lVar9 + 0x1c0);
      puVar4 = (undefined8 *)*puVar12;
    }
    FUN_010108e0(*(undefined8 *)(lVar9 + 0x1c8),puVar4);
    *(long *)(lVar9 + 0x1d0) = *(long *)(lVar9 + 0x1d0) + 1;
  }
  plVar5 = (long *)puVar7[5];
  if (plVar5 != (long *)0x0) {
    plVar13 = plVar5 + 1;
    do {
      lVar9 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
  }
  puVar7[5] = puVar3;
                    /* try { // try from 0032144c to 00321453 has its CatchHandler @ 0032157c */
  FUN_0038db60(lVar6 + 0x1a0);
  uVar10 = *(undefined8 *)(puVar3[2] + 0xb0);
  local_60 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  local_60[4] = (long)puVar3;
  *local_60 = (long)&PTR_LAB_044954e8;
  local_60[1] = 0;
  local_60[2] = 0;
  local_68 = local_60 + 3;
  *local_68 = (long)&PTR_LAB_04495520;
                    /* try { // try from 00321494 to 003214a3 has its CatchHandler @ 00321538 */
  FUN_003627bc(uVar10,&local_68,auStack_70);
  if (local_60 != (long *)0x0) {
    plVar5 = local_60 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
LAB_003213a4:
  puVar7 = (undefined8 *)*puVar12;
  goto joined_r0x003213d0;
}


