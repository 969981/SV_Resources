/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028cfc4c; name: FUN_028cfc4c
 */


ulong FUN_028cfc4c(long *param_1,undefined8 *param_2)

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
      FUN_028cfd50(param_1,param_2);
      goto LAB_028cfd30;
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
  *puVar1 = &LAB_028d0134;
  puVar1[1] = &LAB_02de8b98;
  puVar1[2] = &LAB_02de8b9c;
  puVar1[3] = &LAB_02de8ba8;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_028cfd30:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


