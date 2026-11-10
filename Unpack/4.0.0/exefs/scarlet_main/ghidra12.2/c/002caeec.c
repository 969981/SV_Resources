/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002caeec; name: FUN_002caeec
 */


ulong * FUN_002caeec(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *local_58;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    local_58 = param_1 + 1;
    uVar3 = 1;
    if (uVar2 >> 1 == 1) {
LAB_002caf50:
      puVar6 = local_58;
      uVar5 = uVar3 << 1;
      puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar3 * 0xd0);
      puVar7 = puVar4;
      goto LAB_002caf70;
    }
  }
  else {
    local_58 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    if (uVar2 >> 1 == uVar3) goto LAB_002caf50;
  }
  puVar4 = (ulong *)0x0;
  uVar5 = 0;
  puVar6 = local_58;
  puVar7 = local_58;
LAB_002caf70:
  uVar2 = uVar2 >> 1;
  puVar7 = puVar7 + uVar2 * 0xd;
  uVar8 = *param_2;
  uVar3 = param_2[2];
  puVar7[1] = param_2[1];
  *puVar7 = uVar8;
  puVar7[2] = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 002caf98 to 002caf9f has its CatchHandler @ 002cb09c */
  FUN_0028f3c0(puVar7 + 3,param_2 + 3);
  if (puVar4 == (ulong *)0x0) {
    uVar2 = *param_1;
  }
  else {
                    /* try { // try from 002cafa4 to 002cafb7 has its CatchHandler @ 002cb05c */
    FUN_002cae00(param_1,puVar4,&local_58,uVar2);
    puVar1 = PTR_LAB_047cba48;
    if ((uVar2 != 0) && (puVar6 != (ulong *)0x0)) {
      puVar6 = puVar6 + uVar2 * 0xd;
      do {
        uVar2 = uVar2 - 1;
        FUN_00288048(puVar6 + -10);
        if ((puVar6[-0xd] & 1) != 0) {
          FUN_0049e790(puVar1,puVar6[-0xb]);
        }
        puVar6 = puVar6 + -0xd;
      } while (uVar2 != 0);
    }
    uVar2 = *param_1;
    if ((uVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar2 = *param_1;
    }
    uVar2 = uVar2 | 1;
    param_1[1] = (ulong)puVar4;
    param_1[2] = uVar5;
    *param_1 = uVar2;
  }
  *param_1 = uVar2 + 2;
  return puVar7;
}


