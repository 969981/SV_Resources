/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c64e8; name: FUN_002c64e8
 */


undefined1  [16] FUN_002c64e8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
  }
  else {
    plVar7 = param_1 + 1;
    while( true ) {
      while( true ) {
        uVar1 = FUN_002c66d8(param_2,plVar8 + 4);
        plVar9 = plVar8;
        if ((uVar1 & 1) == 0) break;
        if ((long *)*plVar8 == (long *)0x0) {
          puVar6 = (undefined8 *)*plVar8;
          goto joined_r0x002c6568;
        }
        plVar7 = plVar8;
        plVar8 = (long *)*plVar8;
      }
      uVar1 = FUN_002c66d8(plVar8 + 4,param_2);
      if ((uVar1 & 1) == 0) break;
      plVar7 = plVar8 + 1;
      if ((long *)*plVar7 == (long *)0x0) break;
      plVar8 = (long *)*plVar7;
    }
  }
  puVar6 = (undefined8 *)*plVar7;
  plVar8 = plVar7;
joined_r0x002c6568:
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xa0);
    uVar10 = param_3[1];
    uVar3 = *param_3;
    puVar6[6] = param_3[2];
    puVar6[5] = uVar10;
    puVar6[4] = uVar3;
    uVar10 = param_3[4];
    uVar3 = param_3[3];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    puVar6[9] = param_3[5];
    puVar6[8] = uVar10;
    puVar6[7] = uVar3;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[3] = 0;
    puVar6[10] = param_3[6];
    lVar4 = param_3[7];
    plVar7 = puVar6 + 0xb;
    *plVar7 = lVar4;
    lVar5 = param_3[8];
    puVar6[0xc] = lVar5;
    if (lVar5 == 0) {
      puVar6[10] = plVar7;
    }
    else {
      *(long **)(lVar4 + 0x10) = plVar7;
      param_3[7] = 0;
      param_3[6] = param_3 + 7;
      param_3[8] = 0;
    }
    puVar6[0xd] = param_3[9];
    lVar4 = param_3[10];
    plVar7 = puVar6 + 0xe;
    *plVar7 = lVar4;
    lVar5 = param_3[0xb];
    puVar6[0xf] = lVar5;
    if (lVar5 == 0) {
      puVar6[0xd] = plVar7;
    }
    else {
      *(long **)(lVar4 + 0x10) = plVar7;
      param_3[10] = 0;
      param_3[9] = param_3 + 10;
      param_3[0xb] = 0;
    }
    puVar6[0x10] = param_3[0xc];
    lVar4 = param_3[0xd];
    plVar7 = puVar6 + 0x11;
    *plVar7 = lVar4;
    lVar5 = param_3[0xe];
    puVar6[0x12] = lVar5;
    if (lVar5 == 0) {
      puVar6[0x10] = plVar7;
    }
    else {
      *(long **)(lVar4 + 0x10) = plVar7;
      param_3[0xd] = 0;
      param_3[0xc] = param_3 + 0xd;
      param_3[0xe] = 0;
    }
    puVar6[0x13] = param_3[0xf];
    puVar6[2] = plVar9;
    *puVar6 = 0;
    puVar6[1] = 0;
    *plVar8 = (long)puVar6;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar6;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar8;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = puVar6;
  return auVar11;
}


