/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011200c4; name: FUN_011200c4
 */


ulong FUN_011200c4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  do {
    lVar4 = param_1[0xf] - param_1[0xe];
    if (lVar4 == 0) {
      uVar9 = param_1[1] - *param_1 >> 7;
      FUN_01120780(param_1,param_2);
      goto LAB_011201b4;
    }
    uVar9 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar4 + param_1[0xe] + -8;
    uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar8) =
         *(ulong *)(param_1[7] + uVar8) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar9);
  puVar1 = (undefined8 *)(*param_1 + uVar9 * 0x80);
  pcVar6 = (code *)puVar1[1];
  if (pcVar6 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar6)(puVar1 + 4);
  }
  uVar7 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  puVar1[6] = param_2[2];
  puVar1[7] = uVar3;
  puVar1[4] = uVar7;
  puVar1[5] = uVar2;
  uVar7 = param_2[4];
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = uVar7;
  FUN_00fd9730(puVar1 + 9,param_2 + 5);
  *puVar1 = PTR_LAB_047dc4d0;
  puVar1[1] = PTR_LAB_047dc4d8;
  puVar5 = PTR_LAB_047dc4e8;
  puVar1[2] = PTR_LAB_047dc4e0;
  puVar1[3] = puVar5;
  if ((ulong)param_1[0x15] <= uVar9) {
LAB_011201b4:
    param_1[0x15] = uVar9 + 1;
  }
  return uVar9;
}


