/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c7ae0; name: FUN_002c7ae0
 */


undefined1  [16]
FUN_002c7ae0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
  }
  else {
    plVar5 = param_1 + 1;
    while( true ) {
      while( true ) {
        uVar1 = FUN_002c66d8(param_2,plVar6 + 4);
        plVar7 = plVar6;
        if ((uVar1 & 1) == 0) break;
        if ((long *)*plVar6 == (long *)0x0) {
          puVar4 = (undefined8 *)*plVar6;
          goto joined_r0x002c7b60;
        }
        plVar5 = plVar6;
        plVar6 = (long *)*plVar6;
      }
      uVar1 = FUN_002c66d8(plVar6 + 4,param_2);
      if ((uVar1 & 1) == 0) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  puVar4 = (undefined8 *)*plVar5;
  plVar6 = plVar5;
joined_r0x002c7b60:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
                    /* try { // try from 002c7b94 to 002c7b97 has its CatchHandler @ 002c7c18 */
    FUN_002c7c38(puVar4 + 4,*param_4);
    puVar4[0xc] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = puVar4 + 0xb;
    puVar4[0x10] = 0;
    puVar4[0xf] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xd] = puVar4 + 0xe;
    puVar4[2] = plVar7;
    *puVar4 = 0;
    puVar4[1] = 0;
    *plVar6 = (long)puVar4;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar4;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar4;
  return auVar8;
}


