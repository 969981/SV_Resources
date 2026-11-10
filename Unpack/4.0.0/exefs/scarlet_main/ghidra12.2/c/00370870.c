/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00370870; name: FUN_00370870
 */


undefined1  [16] FUN_00370870(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar8 = plVar6;
  }
  else {
    uVar1 = *param_2;
    plVar6 = param_1 + 1;
    while( true ) {
      while( true ) {
        uVar4 = plVar7[4];
        plVar8 = plVar7;
        if ((uVar4 <= uVar1) && ((uVar4 < uVar1 || ((ulong)plVar7[5] <= param_2[1])))) break;
        if ((long *)*plVar7 == (long *)0x0) {
          puVar5 = (undefined8 *)*plVar7;
          goto joined_r0x003708f4;
        }
        plVar6 = plVar7;
        plVar7 = (long *)*plVar7;
      }
      if ((uVar1 <= uVar4) && (param_2[1] <= (ulong)plVar7[5])) break;
      plVar6 = plVar7 + 1;
      if ((long *)*plVar6 == (long *)0x0) break;
      plVar7 = (long *)*plVar6;
    }
  }
  puVar5 = (undefined8 *)*plVar6;
  plVar7 = plVar6;
joined_r0x003708f4:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    uVar3 = *param_3;
    puVar5[5] = param_3[1];
    puVar5[4] = uVar3;
    puVar5[6] = param_3[2];
    puVar5[7] = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = plVar8;
    *plVar7 = (long)puVar5;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar5;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = puVar5;
  return auVar9;
}


