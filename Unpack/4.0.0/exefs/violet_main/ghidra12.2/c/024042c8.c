/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024042c8; name: FUN_024042c8
 */


ulong FUN_024042c8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  do {
    lVar1 = param_1[0xf] - param_1[0xe];
    if (lVar1 == 0) {
      uVar3 = param_1[1] - *param_1 >> 7;
      FUN_02404368(param_1);
      goto LAB_02404350;
    }
    uVar3 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar1 + param_1[0xe] + -8;
    uVar2 = uVar3 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar2) =
         *(ulong *)(param_1[7] + uVar2) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar3);
  FUN_024043b8(*param_1 + uVar3 * 0x80);
  if ((ulong)param_1[0x15] <= uVar3) {
LAB_02404350:
    param_1[0x15] = uVar3 + 1;
  }
  return uVar3;
}


