/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021c8f10; name: FUN_021c8f10
 */


ulong FUN_021c8f10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar6 = param_1[1] - *param_1 >> 7;
      FUN_021c9014(param_1,param_2);
      goto LAB_021c8ff4;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
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
  puVar1[4] = *param_2;
  *puVar1 = PTR_LAB_047dd818;
  puVar1[1] = PTR_LAB_047dd820;
  puVar3 = PTR_LAB_047dd830;
  puVar1[2] = PTR_LAB_047dd828;
  puVar1[3] = puVar3;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_021c8ff4:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


