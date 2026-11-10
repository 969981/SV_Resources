/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003535e0; name: FUN_003535e0
 */


void FUN_003535e0(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined2 local_70 [4];
  undefined8 local_68;
  undefined4 local_60 [2];
  long local_58;
  char local_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  
  lVar7 = param_1[3];
  if ((param_2 & 1) == 0) {
    if (lVar7 == 0) {
      return;
    }
    if (param_1[2] != 0) {
      lVar7 = 0;
      uVar10 = 0;
      do {
        FUN_0038db40(param_1[1] + lVar7);
        lVar8 = param_1[1];
        *(undefined1 *)(lVar8 + lVar7 + 0x50) = 1;
        FUN_0038dc90(lVar8 + lVar7 + 0x30);
        FUN_0038db60(param_1[1] + lVar7);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x78;
      } while (uVar10 < (ulong)param_1[2]);
    }
    plVar1 = param_1 + 4;
    do {
      while (*plVar1 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1[4] = 0;
    puVar5 = PTR_LAB_047cba48;
    lVar7 = param_1[3];
    if (0 < lVar7) {
      lVar8 = 0;
      do {
        while( true ) {
          lVar2 = param_1[1] + lVar8;
          if (*(long **)(lVar2 + 0x60) == (long *)0x0) break;
          (**(code **)(**(long **)(lVar2 + 0x60) + 0x18))();
          puVar9 = *(undefined8 **)(lVar2 + 0x60);
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9);
            FUN_0049e790(puVar5,puVar9);
          }
          *(undefined4 *)(lVar2 + 0x58) = 3;
          *(undefined8 *)(lVar2 + 0x60) = 0;
          lVar7 = lVar7 + -1;
          lVar8 = lVar8 + 0x78;
          if (lVar7 == 0) goto LAB_003537cc;
        }
        if (*(int *)(lVar2 + 0x58) != 4) goto LAB_00353914;
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + 0x78;
      } while (lVar7 != 0);
    }
LAB_003537cc:
    param_1[3] = 0;
    if (param_1[2] != 0) {
      lVar7 = 0;
      uVar10 = 0;
      do {
        FUN_0038db20(param_1[1] + lVar7);
        uVar6 = FUN_0038dbc0(param_1[1] + lVar7 + 0x30);
        FUN_00353920(uVar6,*(undefined8 *)(param_1[1] + lVar7 + 0x38),
                     *(undefined8 *)(param_1[1] + lVar7 + 0x40));
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x78;
      } while (uVar10 < (ulong)param_1[2]);
    }
    free((void *)param_1[1]);
    thunk_FUN_00354860();
    return;
  }
  if (0 < lVar7) {
    return;
  }
  if (lVar7 != 0) goto LAB_00353914;
  param_1[3] = 1;
  lVar7 = FUN_0038c7b0(param_1[2] * 0x78);
  param_1[1] = lVar7;
  if (param_1[2] != 0) {
    lVar8 = 0;
    uVar10 = 1;
    while( true ) {
      FUN_0038db00(lVar7 + lVar8);
      FUN_0038db80(param_1[1] + lVar8 + 0x30);
      lVar7 = param_1[1] + lVar8;
      *(ulong *)(lVar7 + 0x20) = uVar10 - 1;
      *(undefined8 *)(lVar7 + 0x28) = *param_1;
      local_50 = '\x01';
      uStack_4f = 1;
      uStack_48 = 0;
      *(undefined4 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined8 *)(lVar7 + 0x70) = 0;
      *(ulong *)(lVar7 + 0x68) = CONCAT62(uStack_4e,0x101);
      lVar7 = param_1[1];
      *(undefined8 *)(lVar7 + lVar8 + 0x38) = 0;
      *(undefined8 *)(lVar7 + lVar8 + 0x40) = 0;
      if ((ulong)param_1[2] <= uVar10) break;
      lVar7 = param_1[1];
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x78;
    }
    lVar7 = param_1[1];
  }
  local_70[0] = 0x101;
  local_68 = 0;
  FUN_0038f3ac(local_60,*param_1,PTR_LAB_047ccdf0,lVar7,0,local_70);
  lVar7 = param_1[1];
  if ((undefined4 *)(lVar7 + 0x58) == local_60) {
    if (local_50 != '\0') goto LAB_003538bc;
  }
  else {
    *(undefined4 *)(lVar7 + 0x58) = local_60[0];
    *(long *)(lVar7 + 0x60) = local_58;
    *(undefined8 *)(lVar7 + 0x70) = uStack_48;
    *(ulong *)(lVar7 + 0x68) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,local_50));
    local_60[0] = 5;
    local_58 = 0;
    local_50 = '\x01';
    uStack_4f = 1;
    uStack_48 = 0;
LAB_003538bc:
    if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00353918 to 0035391b has its CatchHandler @ 0035391c */
      abort();
    }
  }
  lVar7 = param_1[1];
  if (*(long **)(lVar7 + 0x60) == (long *)0x0) {
    if (*(int *)(lVar7 + 0x58) != 4) goto LAB_00353914;
  }
  else {
    if (*(int *)(lVar7 + 0x58) != 1) {
LAB_00353914:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar7 + 0x58) = 2;
    (**(code **)(**(long **)(lVar7 + 0x60) + 0x10))();
  }
  return;
}


