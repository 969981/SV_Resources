/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0276b5b8; name: FUN_0276b5b8
 */


ulong FUN_0276b5b8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  do {
    lVar4 = param_1[0xf] - param_1[0xe];
    if (lVar4 == 0) {
      uVar8 = param_1[1] - *param_1 >> 7;
      FUN_0276b6e4(param_1,param_2);
      goto LAB_0276b6c4;
    }
    uVar8 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar4 + param_1[0xe] + -8;
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar8);
  puVar1 = (undefined8 *)(*param_1 + uVar8 * 0x80);
  pcVar5 = (code *)puVar1[1];
  if (pcVar5 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar5)(puVar1 + 4);
  }
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  puVar1[6] = param_2[2];
  puVar1[7] = uVar3;
  puVar1[4] = uVar6;
  puVar1[5] = uVar2;
  uVar6 = param_2[4];
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = uVar6;
  FUN_00c6c994(puVar1 + 9,param_2 + 5);
  *puVar1 = &LAB_0276bb00;
  puVar1[1] = &LAB_0276bcd0;
  puVar1[2] = &LAB_0276f8f8;
  puVar1[3] = &LAB_0276f928;
  if ((ulong)param_1[0x15] <= uVar8) {
LAB_0276b6c4:
    param_1[0x15] = uVar8 + 1;
  }
  return uVar8;
}


