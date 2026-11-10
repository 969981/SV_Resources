/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010568f0; name: FUN_010568f0
 */


void FUN_010568f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  FUN_01056a08();
  uVar10 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (uVar10 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    uVar5 = (int)(uVar10 >> 3) * -0x55555555;
    if (uVar5 == 1) {
      uVar8 = 0;
    }
    else if (uVar5 == 0) {
      uVar10 = *(ulong *)(param_2 + 0x78);
      uVar8 = (int)*(ulong *)(param_2 + 0x80) + (int)uVar10;
      uVar9 = *(ulong *)(param_2 + 0x80) ^ uVar10;
      *(ulong *)(param_2 + 0x78) = uVar9 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar9 << 0x10;
      *(ulong *)(param_2 + 0x80) = uVar9 >> 0x1b | uVar9 << 0x25;
    }
    else {
      lVar1 = 0x1f;
      if ((uVar5 << (ulong)((uint)LZCOUNT(uVar5) & 0x1f) & 0x7fffffff) != 0) {
        lVar1 = 0x20;
      }
      uVar9 = lVar1 - LZCOUNT(uVar5);
      uVar10 = uVar9 >> 6;
      if ((uVar9 & 0x3f) != 0) {
        uVar10 = uVar10 + 1;
      }
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar3 = *(ulong *)(param_2 + 0x78);
      uVar11 = uVar3 ^ *(ulong *)(param_2 + 0x80);
      lVar1 = uVar3 + *(ulong *)(param_2 + 0x80);
      uVar2 = 0;
      if (uVar10 <= uVar9) {
        uVar2 = (uint)(0xffffffffffffffff >> (-uVar12 & 0x3f));
      }
      uVar10 = uVar11 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar11 << 0x10;
      uVar9 = uVar11 >> 0x1b | uVar11 << 0x25;
      while (uVar8 = (uint)lVar1 & uVar2, uVar5 <= uVar8) {
        uVar12 = uVar10 ^ uVar9;
        lVar1 = uVar10 + uVar9;
        uVar10 = uVar12 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar12 << 0x10;
        uVar9 = uVar12 >> 0x1b | uVar12 << 0x25;
      }
      *(ulong *)(param_2 + 0x78) = uVar10;
      *(ulong *)(param_2 + 0x80) = uVar9;
    }
    puVar6 = (undefined8 *)(*(long *)(param_2 + 0x40) + (long)(int)uVar8 * 0x18);
    uVar4 = *puVar6;
    uVar7 = puVar6[2];
    param_1[1] = puVar6[1];
    param_1[2] = uVar7;
    *param_1 = uVar4;
  }
  return;
}


