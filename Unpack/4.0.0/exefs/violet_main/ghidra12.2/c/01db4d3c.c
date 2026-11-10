/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db4d3c; name: FUN_01db4d3c
 */


ulong FUN_01db4d3c(long *param_1,undefined1 *param_2)

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
      FUN_01db4e40(param_1,param_2);
      goto LAB_01db4e20;
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
  *(undefined1 *)(puVar1 + 4) = *param_2;
  *puVar1 = &LAB_01db5130;
  puVar1[1] = &LAB_00a2dec0;
  puVar1[2] = &LAB_00a2dec4;
  puVar1[3] = &LAB_00a2ded0;
  if ((ulong)param_1[0x15] <= uVar5) {
LAB_01db4e20:
    param_1[0x15] = uVar5 + 1;
  }
  return uVar5;
}


