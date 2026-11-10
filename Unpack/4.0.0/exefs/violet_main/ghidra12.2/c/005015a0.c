/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005015a0; name: FUN_005015a0
 */


undefined1  [16] FUN_005015a0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar8 = plVar6;
LAB_00501624:
    puVar4 = (undefined8 *)*plVar6;
    plVar7 = plVar6;
  }
  else {
    plVar6 = param_1 + 1;
    while( true ) {
      while (uVar1 = FUN_00500d2c(*(undefined8 *)*param_2,*(undefined8 *)plVar7[4]), plVar8 = plVar7
            , (uVar1 & 1) == 0) {
        uVar1 = FUN_00500d2c(*(undefined8 *)plVar7[4],*(undefined8 *)*param_2);
        if ((uVar1 & 1) == 0) goto LAB_00501624;
        plVar6 = plVar7 + 1;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00501624;
        plVar7 = (long *)*plVar6;
      }
      if ((long *)*plVar7 == (long *)0x0) break;
      plVar6 = plVar7;
      plVar7 = (long *)*plVar7;
    }
    puVar4 = (undefined8 *)*plVar7;
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      puVar4 = (undefined8 *)FUN_0049e6c0(0x28);
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x28);
      }
      puVar4 = (undefined8 *)FUN_00520c00(lVar5,0x28);
    }
    puVar4[4] = *param_3;
    puVar4[2] = plVar8;
    *puVar4 = 0;
    puVar4[1] = 0;
    *plVar7 = (long)puVar4;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar4;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = puVar4;
  return auVar9;
}


