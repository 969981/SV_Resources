/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0227be68; name: FUN_0227be68
 */


ulong FUN_0227be68(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar5 = param_1[1] - *param_1 >> 7;
      FUN_0227bf6c(param_1,param_2);
      goto LAB_0227bf4c;
    }
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar4) =
         *(ulong *)(param_1[7] + uVar4) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar5);
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x80);
  pcVar3 = (code *)puVar1[1];
  if (pcVar3 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar3)(puVar1 + 4);
  }
  puVar1[4] = *param_2;
  *puVar1 = &LAB_02b801c4;
  puVar1[1] = &LAB_02b801d0;
  puVar1[2] = &LAB_02b801d4;
  puVar1[3] = &LAB_02b801e0;
  if ((ulong)param_1[0x15] <= uVar5) {
LAB_0227bf4c:
    param_1[0x15] = uVar5 + 1;
  }
  return uVar5;
}


