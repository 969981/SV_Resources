/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b56e5c; name: FUN_00b56e5c
 */


long FUN_00b56e5c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1[4] == 0) {
    uVar6 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    uVar4 = 0;
    do {
      do {
        lVar3 = *param_1;
        lVar5 = *(long *)(lVar3 + 0x9c0);
        uVar6 = (lVar5 + 1U) % 0x270;
        uVar1 = *(uint *)(lVar3 + uVar6 * 4);
        *(uint *)(lVar3 + lVar5 * 4) =
             (uVar1 & 1) * -0x66f74f21 ^ *(uint *)(lVar3 + ((lVar5 + 0x18dU) % 0x270) * 4) ^
             (uVar1 & 0x7ffffffe | *(uint *)(lVar3 + lVar5 * 4) & 0x80000000) >> 1;
        uVar1 = *(uint *)(lVar3 + *(long *)(lVar3 + 0x9c0) * 4);
        *(ulong *)(lVar3 + 0x9c0) = uVar6;
        uVar1 = uVar1 ^ uVar1 >> 0xb;
        uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
        uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
        uVar1 = uVar1 ^ uVar1 >> 0x12;
      } while ((ulong)param_1[5] <= (ulong)uVar1);
      lVar2 = lVar2 << (param_1[2] & 0x3fU);
      if (0x3f < (ulong)param_1[2]) {
        lVar2 = 0;
      }
      lVar2 = lVar2 + (ulong)(*(uint *)(param_1 + 7) & uVar1);
      uVar6 = param_1[4];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  if (uVar6 < (ulong)param_1[3]) {
    do {
      do {
        lVar3 = *param_1;
        lVar5 = *(long *)(lVar3 + 0x9c0);
        uVar4 = (lVar5 + 1U) % 0x270;
        uVar1 = *(uint *)(lVar3 + uVar4 * 4);
        *(uint *)(lVar3 + lVar5 * 4) =
             (uVar1 & 1) * -0x66f74f21 ^ *(uint *)(lVar3 + ((lVar5 + 0x18dU) % 0x270) * 4) ^
             (uVar1 & 0x7ffffffe | *(uint *)(lVar3 + lVar5 * 4) & 0x80000000) >> 1;
        uVar1 = *(uint *)(lVar3 + *(long *)(lVar3 + 0x9c0) * 4);
        *(ulong *)(lVar3 + 0x9c0) = uVar4;
        uVar1 = uVar1 ^ uVar1 >> 0xb;
        uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
        uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
        uVar1 = uVar1 ^ uVar1 >> 0x12;
      } while ((ulong)param_1[6] <= (ulong)uVar1);
      lVar2 = lVar2 << (param_1[2] + 1U & 0x3f);
      if (0x3e < (ulong)param_1[2]) {
        lVar2 = 0;
      }
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + (ulong)(*(uint *)((long)param_1 + 0x3c) & uVar1);
    } while (uVar6 < (ulong)param_1[3]);
  }
  return lVar2;
}


