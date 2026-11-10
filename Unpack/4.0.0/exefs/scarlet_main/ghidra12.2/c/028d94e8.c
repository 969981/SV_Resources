/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028d94e8; name: FUN_028d94e8
 */


ulong FUN_028d94e8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    lVar3 = param_1[0xf] - param_1[0xe];
    if (lVar3 == 0) {
      uVar6 = param_1[1] - *param_1 >> 7;
      FUN_028d95ec(param_1,param_2);
      goto LAB_028d95cc;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar3 + param_1[0xe] + -8;
    uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar5) =
         *(ulong *)(param_1[7] + uVar5) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar6);
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x80);
  pcVar4 = (code *)puVar1[1];
  if (pcVar4 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar4)(puVar1 + 4);
  }
  uVar2 = param_2[1];
  puVar1[4] = *param_2;
  puVar1[5] = uVar2;
  *puVar1 = &LAB_028d99d0;
  puVar1[1] = &LAB_02de8e54;
  puVar1[2] = &LAB_02de8e58;
  puVar1[3] = &LAB_02de8e64;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_028d95cc:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


