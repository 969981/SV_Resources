/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002532b0; name: FUN_002532b0
 */


uint FUN_002532b0(undefined8 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = *param_3;
  if (param_3[1] - uVar3 != 0) {
    uVar1 = (param_3[1] - uVar3) + 1;
    if (uVar1 == 0) {
      lVar8 = *(long *)(param_2 + 0x9c0);
      uVar6 = (lVar8 + 1U) % 0x270;
      uVar3 = *(uint *)(param_2 + uVar6 * 4);
      uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(param_2 + ((lVar8 + 0x18dU) % 0x270) * 4) ^
              (uVar3 & 0x7ffffffe | *(uint *)(param_2 + lVar8 * 4) & 0x80000000) >> 1;
      *(uint *)(param_2 + lVar8 * 4) = uVar3;
      uVar3 = uVar3 ^ uVar3 >> 0xb;
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
      *(ulong *)(param_2 + 0x9c0) = uVar6;
      return uVar3 ^ uVar3 >> 0x12;
    }
    lVar8 = 0x1f;
    if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
      lVar8 = 0x20;
    }
    uVar5 = lVar8 - LZCOUNT(uVar1);
    uVar6 = uVar5 >> 5;
    if ((uVar5 & 0x1f) != 0) {
      uVar6 = uVar6 + 1;
    }
    iVar4 = 0;
    if (uVar6 != 0) {
      iVar4 = (int)(uVar5 / uVar6);
    }
    uVar7 = *(ulong *)(param_2 + 0x9c0);
    uVar2 = 0;
    if (uVar6 <= uVar5) {
      uVar2 = 0xffffffff >> (ulong)(-iVar4 & 0x1f);
    }
    do {
      lVar8 = uVar7 * 4;
      uVar6 = uVar7 + 0x18d;
      uVar7 = (uVar7 + 1) % 0x270;
      uVar3 = *(uint *)(param_2 + uVar7 * 4);
      uVar3 = (uVar3 & 1) * -0x66f74f21 ^ *(uint *)(param_2 + (uVar6 % 0x270) * 4) ^
              (uVar3 & 0x7ffffffe | *(uint *)(param_2 + lVar8) & 0x80000000) >> 1;
      *(uint *)(param_2 + lVar8) = uVar3;
      uVar3 = uVar3 ^ uVar3 >> 0xb;
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
      uVar3 = (uVar3 ^ uVar3 >> 0x12) & uVar2;
    } while (uVar1 <= uVar3);
    *(ulong *)(param_2 + 0x9c0) = uVar7;
    uVar3 = *param_3 + uVar3;
  }
  return uVar3;
}


