/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013c1c0; name: FUN_0013c1c0
 */


ulong FUN_0013c1c0(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  uVar7 = param_3 & 0xffffffff;
  lVar4 = 0x20;
  if ((int)param_3 != 0) {
    lVar4 = (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4) + 0x28;
  }
  if (0x7fffffffffffffffU - lVar4 < param_2) {
    lVar4 = FUN_0012d6a0();
    uVar1 = *(uint *)(lVar4 + 0xc);
    uVar7 = (ulong)uVar1;
    if ((*(char *)(lVar4 + 10) < '\0') &&
       (uVar2 = uVar1 - (uVar1 >> 1 & 0x55555555),
       uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333),
       1 < (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
      uVar1 = uVar1 | uVar1 >> 1;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar1 = uVar1 | uVar1 >> 4;
      uVar1 = uVar1 | uVar1 >> 8;
      uVar7 = (ulong)((uVar1 | uVar1 >> 0x10) + 1);
    }
    return uVar7;
  }
  uVar3 = FUN_00129fd0(param_1,7,lVar4 + param_2);
  *(short *)(uVar3 + 10) = (short)uVar7;
  *(ulong *)(uVar3 + 0x10) = param_2;
  *(undefined8 *)(uVar3 + 0x18) = 0;
  if (0 < (int)param_3) {
    uVar7 = param_3 & 3;
    if ((param_3 & 0xffffffff) - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar6 = (undefined1 *)(uVar3 + 0x60);
      do {
        uVar5 = uVar5 + 4;
        puVar6[-0x30] = 0;
        puVar6[-0x20] = 0;
        puVar6[-0x10] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x40;
      } while ((param_3 & 0xfffffffc) != uVar5);
    }
    if (uVar7 != 0) {
      puVar6 = (undefined1 *)(uVar3 + uVar5 * 0x10 + 0x30);
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x10;
      } while (uVar7 != 0);
    }
  }
  return uVar3;
}


