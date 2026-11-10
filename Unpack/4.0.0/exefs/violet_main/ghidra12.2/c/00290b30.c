/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00290b30; name: FUN_00290b30
 */


undefined1  [16]
FUN_00290b30(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar5;
  }
  else {
    plVar5 = param_1 + 1;
    while( true ) {
      while (iVar1 = FUN_00290c34(*param_2,plVar6[4]), iVar1 < 0) {
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) {
          puVar4 = (undefined8 *)*plVar6;
          goto joined_r0x00290bbc;
        }
        plVar6 = (long *)*plVar6;
      }
      iVar1 = FUN_00290c34(plVar6[4],*param_2);
      if (-1 < iVar1) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  puVar4 = (undefined8 *)*plVar5;
joined_r0x00290bbc:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar4[4] = *(undefined8 *)*param_4;
    puVar4[5] = 0;
    puVar4[2] = plVar6;
    *puVar4 = 0;
    puVar4[1] = 0;
    *plVar5 = (long)puVar4;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar4;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar5;
    }
    FUN_010108e0(param_1[1],puVar3);
    uVar2 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar4;
  return auVar7;
}


