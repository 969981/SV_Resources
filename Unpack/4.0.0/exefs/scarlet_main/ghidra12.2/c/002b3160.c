/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b3160; name: FUN_002b3160
 */


void FUN_002b3160(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    puVar4 = param_1 + 1;
    uVar3 = 2;
    if (param_3 < 3) goto LAB_002b3194;
LAB_002b31cc:
    uVar10 = uVar1 >> 1;
    uVar9 = param_3;
    if (param_3 <= uVar3 << 1) {
      uVar9 = uVar3 << 1;
    }
    puVar8 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar9 * 0x18);
    puVar2 = puVar4;
    puVar5 = puVar8;
joined_r0x002b31b4:
    uVar3 = param_3 - (uVar1 >> 1);
    if (uVar3 != 0) {
      uVar1 = uVar1 >> 1;
      if (~uVar1 + param_3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar6 = puVar5 + uVar1 * 3 + 4;
        do {
          uVar7 = uVar7 + 2;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = (ulong)puVar6;
          puVar6[-4] = (ulong)(puVar6 + -3);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = puVar6 + 6;
        } while ((uVar3 & 0xfffffffffffffffe) != uVar7);
      }
      if ((uVar3 & 1) != 0) {
        puVar5 = puVar5 + uVar1 * 3 + uVar7 * 3;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = (ulong)(puVar5 + 1);
      }
    }
    if (uVar10 == 0) goto LAB_002b3314;
    puVar4 = puVar4 + 1;
    puVar5 = puVar8 + 1;
    uVar1 = uVar10;
    do {
      while( true ) {
        puVar5[-1] = puVar4[-1];
        uVar3 = *puVar4;
        *puVar5 = uVar3;
        uVar7 = puVar4[1];
        puVar5[1] = uVar7;
        if (uVar7 != 0) break;
        puVar5[-1] = (ulong)puVar5;
        puVar4 = puVar4 + 3;
        uVar1 = uVar1 - 1;
        puVar5 = puVar5 + 3;
        if (uVar1 == 0) goto LAB_002b32e8;
      }
      *(ulong **)(uVar3 + 0x10) = puVar5;
      puVar4[1] = 0;
      puVar4[-1] = (ulong)puVar4;
      *puVar4 = 0;
      puVar4 = puVar4 + 3;
      uVar1 = uVar1 - 1;
      puVar5 = puVar5 + 3;
    } while (uVar1 != 0);
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    if (uVar3 < param_3) goto LAB_002b31cc;
LAB_002b3194:
    uVar10 = (uVar1 >> 1) - param_3;
    if (uVar1 >> 1 < param_3) {
      uVar10 = 0;
      puVar8 = (ulong *)0x0;
      uVar9 = 0;
      puVar2 = (ulong *)0x0;
      puVar5 = puVar4;
      goto joined_r0x002b31b4;
    }
    uVar9 = 0;
    puVar2 = puVar4 + param_3 * 3;
    puVar8 = (ulong *)0x0;
  }
LAB_002b32e8:
  if ((puVar2 != (ulong *)0x0) && (uVar10 != 0)) {
    puVar4 = puVar2 + uVar10 * 3;
    do {
      uVar10 = uVar10 - 1;
      FUN_0028bf34(puVar4 + -3,puVar4[-2]);
      puVar4 = puVar4 + -3;
    } while (uVar10 != 0);
  }
LAB_002b3314:
  uVar1 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar1 = *param_1;
    }
    uVar1 = uVar1 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar9;
    *param_1 = uVar1;
  }
  *param_1 = uVar1 & 1 | param_3 << 1;
  return;
}


