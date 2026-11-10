/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005167d0; name: FUN_005167d0
 */


long FUN_005167d0(long *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  piVar7 = (int *)*param_1;
  if ((int)((ulong)(param_1[1] - (long)piVar7) >> 4) < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    uVar8 = (ulong)(param_1[1] - (long)piVar7) >> 4 & 0xffffffff;
    do {
      switch(piVar7[1]) {
      case 0:
        lVar6 = lVar6 + ((LZCOUNT(*(ulong *)(piVar7 + 2) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) +
                (ulong)(((uint)LZCOUNT(*piVar7 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        break;
      case 1:
        lVar6 = lVar6 + (ulong)(((uint)LZCOUNT(*piVar7 << 3 | 5) ^ 0x1f) * 9 + 0x49 >> 6) + 4;
        break;
      case 2:
        lVar6 = lVar6 + (ulong)(((uint)LZCOUNT(*piVar7 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 8;
        break;
      case 3:
        pbVar4 = *(byte **)(piVar7 + 2);
        bVar2 = *pbVar4;
        if ((bVar2 & 1) == 0) {
          uVar5 = (uint)(bVar2 >> 1);
        }
        else {
          uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
        }
        lVar6 = lVar6 + (ulong)(((uint)LZCOUNT(*piVar7 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
                (ulong)(((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        if ((bVar2 & 1) == 0) {
          lVar6 = lVar6 + (ulong)(bVar2 >> 1);
        }
        else {
          lVar6 = lVar6 + *(long *)(pbVar4 + 8);
        }
        break;
      case 4:
        iVar1 = *piVar7;
        lVar3 = FUN_005167d0(*(undefined8 *)(piVar7 + 2));
        lVar6 = lVar3 + lVar6 + (ulong)(((uint)LZCOUNT(iVar1 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
                (ulong)(((uint)LZCOUNT(iVar1 << 3 | 5) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      piVar7 = piVar7 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return lVar6;
}


