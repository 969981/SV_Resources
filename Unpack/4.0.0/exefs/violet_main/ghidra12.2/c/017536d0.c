/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017536d0; name: FUN_017536d0
 */


ulong FUN_017536d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar5 = param_1[1] - *param_1 >> 6;
      FUN_017537d4(param_1,param_2);
      goto LAB_01753714;
    }
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar4) =
         *(ulong *)(param_1[7] + uVar4) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 6) <= uVar5);
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x40);
  pcVar3 = (code *)puVar1[1];
  if (pcVar3 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar3)(puVar1 + 4);
  }
  puVar1[4] = *param_2;
  *puVar1 = &LAB_00e5386c;
  puVar1[1] = FUN_02a24b70;
  puVar1[2] = &LAB_02a24b74;
  puVar1[3] = &LAB_02a24b80;
  if ((ulong)param_1[0x15] <= uVar5) {
LAB_01753714:
    param_1[0x15] = uVar5 + 1;
  }
  return uVar5;
}


