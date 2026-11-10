/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b2ee0; name: FUN_002b2ee0
 */


undefined1  [16] FUN_002b2ee0(long *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_002b3048(param_1,&local_38,param_2);
  puVar9 = (undefined8 *)*puVar1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x78);
    uVar10 = param_3[1];
    uVar2 = *param_3;
    puVar9[6] = param_3[2];
    puVar9[5] = uVar10;
    puVar9[4] = uVar2;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    puVar9[7] = 0;
    uVar4 = *param_4;
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar4 >> 1;
      if (uVar3 != 0) {
        puVar6 = param_4 + 2;
        puVar5 = puVar9 + 8;
        do {
          while( true ) {
            *puVar5 = puVar6[-1];
            uVar4 = *puVar6;
            puVar7 = puVar5 + 1;
            *puVar7 = uVar4;
            uVar8 = puVar6[1];
            puVar5[2] = uVar8;
            if (uVar8 != 0) break;
            *puVar5 = (ulong)puVar7;
            puVar6 = puVar6 + 3;
            uVar3 = uVar3 - 1;
            puVar5 = puVar5 + 3;
            if (uVar3 == 0) goto LAB_002b2fb4;
          }
          *(ulong **)(uVar4 + 0x10) = puVar7;
          puVar6[1] = 0;
          puVar6[-1] = (ulong)puVar6;
          *puVar6 = 0;
          puVar6 = puVar6 + 3;
          uVar3 = uVar3 - 1;
          puVar5 = puVar5 + 3;
        } while (uVar3 != 0);
LAB_002b2fb4:
        uVar4 = *param_4;
      }
      puVar9[7] = uVar4 & 0xfffffffffffffffe;
    }
    else {
      uVar4 = param_4[1];
      puVar9[9] = param_4[2];
      puVar9[8] = uVar4;
      puVar9[7] = *param_4 | 1;
      *param_4 = 0;
    }
    puVar9[0xe] = 0;
    puVar9[0xe] = param_4[7];
    param_4[7] = 0;
    puVar9[2] = local_38;
    *puVar9 = 0;
    puVar9[1] = 0;
    *puVar1 = puVar9;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar9;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar1);
    uVar2 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = puVar9;
  return auVar11;
}


