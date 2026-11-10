/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e59e4; name: FUN_007e59e4
 */


void FUN_007e59e4(long param_1,void *param_2,uint param_3,short param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  
  if (param_3 < 8) {
    return;
  }
  bVar2 = *(byte *)((long)param_2 + 3);
  bVar3 = *(byte *)((long)param_2 + 4);
  if (bVar2 <= bVar3) {
    return;
  }
  uVar6 = *(ushort *)((long)param_2 + 1) >> 8 | *(ushort *)((long)param_2 + 1) << 8;
  uVar5 = *(ushort *)((long)param_2 + 5);
  if (((*(short *)(param_1 + 0x5ec) == param_4) &&
      (uVar4 = *(ushort *)(param_1 + 0x5e8), uVar4 != 0xffff)) && (uVar6 <= uVar4)) {
    if (uVar4 != uVar6) {
      return;
    }
    if (*(byte *)(param_1 + 0x5ea) == bVar2) {
      if ((*(byte *)(param_1 + 0x5eb) >> (ulong)(bVar3 & 0x1f) & 1) != 0) {
        return;
      }
      goto LAB_007e5ab0;
    }
  }
  memset(*(void **)(param_1 + 0x18),0,(ulong)*(uint *)(param_1 + 0x20));
  memcpy(*(void **)(param_1 + 0x18),param_2,3);
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(ushort *)(param_1 + 0x5e8) = uVar6;
  *(byte *)(param_1 + 0x5ea) = bVar2;
  *(undefined1 *)(param_1 + 0x5eb) = 0;
  *(short *)(param_1 + 0x5ec) = param_4;
LAB_007e5ab0:
  uVar7 = ((ulong)uVar5 & 0xff00) << 0x28 | (ulong)uVar5 << 0x38;
  uVar1 = (param_3 - 7) + (uint)(ushort)(uVar7 >> 0x30);
  if (uVar1 <= *(uint *)(param_1 + 0x20)) {
    memcpy((void *)(*(long *)(param_1 + 0x18) + (uVar7 >> 0x30)),(void *)((long)param_2 + 7),
           (ulong)(param_3 - 7));
    if (*(uint *)(param_1 + 0x24) < uVar1) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    *(byte *)(param_1 + 0x5eb) = *(byte *)(param_1 + 0x5eb) | (byte)(1 << (ulong)(bVar3 & 0x1f));
  }
  return;
}


