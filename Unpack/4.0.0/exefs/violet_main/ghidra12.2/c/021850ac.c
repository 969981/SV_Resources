/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021850ac; name: FUN_021850ac
 */


ulong FUN_021850ac(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar6 = param_1[1] - *param_1 >> 7;
      FUN_021851c8(param_1,param_2);
      goto LAB_021851a8;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar5) =
         *(ulong *)(param_1[7] + uVar5) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar6);
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x80);
  pcVar3 = (code *)puVar1[1];
  if (pcVar3 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar3)(puVar1 + 4);
  }
  uVar4 = *param_2;
  puVar1[5] = 0;
  puVar1[4] = uVar4;
  puVar1[6] = 0;
  FUN_01160880(puVar1 + 5,param_2 + 1);
  *puVar1 = &LAB_021855ec;
  puVar1[1] = &LAB_021855f0;
  puVar1[2] = &LAB_02185700;
  puVar1[3] = &LAB_02185720;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_021851a8:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


