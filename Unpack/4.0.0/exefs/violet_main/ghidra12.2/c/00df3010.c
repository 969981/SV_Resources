/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df3010; name: FUN_00df3010
 */


ulong FUN_00df3010(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  do {
    lVar1 = param_1[0xf] - param_1[0xe];
    if (lVar1 == 0) {
      uVar6 = param_1[1] - *param_1 >> 5;
      FUN_00df30f8(param_1);
      goto LAB_00df3048;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar1 + param_1[0xe] + -8;
    uVar3 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar3) =
         *(ulong *)(param_1[7] + uVar3) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
    lVar1 = *param_1;
  } while ((ulong)(param_1[1] - lVar1 >> 5) <= uVar6);
  uVar4 = *param_2;
  *param_2 = 0;
  lVar2 = *(long *)(lVar1 + uVar6 * 0x20);
  *(undefined8 *)(lVar1 + uVar6 * 0x20) = uVar4;
  if (lVar2 != 0) {
    FUN_00df40ec(lVar1 + uVar6 * 0x20 + 8,lVar2);
  }
  lVar1 = lVar1 + uVar6 * 0x20;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  *(undefined8 *)(lVar1 + 0x10) = param_2[2];
  *(undefined8 *)(lVar1 + 0x18) = uVar5;
  *(undefined8 *)(lVar1 + 8) = uVar4;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_00df3048:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


