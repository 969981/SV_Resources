/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124fb2c; name: FUN_0124fb2c
 */


ulong FUN_0124fb2c(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ushort *puVar6;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_0124fc70(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
    uVar3 = *param_2;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar3 & 0xfffffffffffffff0 | 0xc;
    uVar2 = (ulong)*(byte *)(param_1 + 0x5c) << 4;
    *param_2 = uVar3 & 0xfffffffffff00000 | 0xc | uVar2;
    *param_2 = uVar3 & 0xfff00000 | 0xc | uVar2 | (ulong)*(ushort *)(param_1 + 0x60) << 0x20;
    uVar2 = (ulong)*(uint *)(param_1 + 0x7c);
    if (1 < *(uint *)(param_1 + 0x7c)) {
      uVar1 = FUN_0124fc70(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
      uVar3 = param_2[2];
      *(undefined4 *)(param_2 + 3) = uVar1;
      param_2[2] = uVar3 & 0xfffffffffffffff0 | 0xc;
      uVar2 = (ulong)*(byte *)(param_1 + 100) << 4;
      param_2[2] = uVar3 & 0xfffffffffff00000 | 0xc | uVar2;
      param_2[2] = uVar3 & 0xfff00000 | 0xc | uVar2 | (ulong)*(ushort *)(param_1 + 0x68) << 0x20;
      uVar2 = (ulong)*(uint *)(param_1 + 0x7c);
      if (2 < *(uint *)(param_1 + 0x7c)) {
        uVar3 = 2;
        puVar5 = param_2 + 4;
        puVar6 = (ushort *)(param_1 + 0x70);
        do {
          uVar1 = FUN_0124fc70(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
          uVar4 = *puVar5;
          *(undefined4 *)(puVar5 + 1) = uVar1;
          uVar3 = uVar3 + 1;
          *puVar5 = uVar4 & 0xfffffffffffffff0 | 0xc;
          uVar2 = (ulong)(byte)puVar6[-2] << 4;
          *puVar5 = uVar4 & 0xfffffffffff00000 | 0xc | uVar2;
          *puVar5 = uVar4 & 0xfff00000 | 0xc | uVar2 | (ulong)*puVar6 << 0x20;
          uVar2 = (ulong)*(uint *)(param_1 + 0x7c);
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 4;
        } while (uVar3 < uVar2);
      }
    }
  }
  return uVar2;
}


