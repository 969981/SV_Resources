/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a8850; name: FUN_003a8850
 */


uint FUN_003a8850(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar1 = param_4 + 1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0) {
    uVar7 = *(ulong *)(param_2 + 8);
    if (uVar7 < uVar1) {
      return 0;
    }
    lVar10 = *(long *)(param_2 + 0x20);
  }
  else {
    if (*(ulong *)(param_2 + 8) < uVar1 + param_3) {
      return 0;
    }
    lVar10 = *(long *)(param_2 + 0x20) + param_3;
    *(long *)(param_2 + 0x20) = lVar10;
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + param_3;
    uVar7 = *(ulong *)(param_2 + 8) - param_3;
    *(ulong *)(param_2 + 8) = uVar7;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) - param_3;
  }
  bVar2 = *(byte *)(uVar7 + lVar10 + -1);
  uVar7 = (ulong)bVar2;
  FUN_0043b170(*(undefined8 *)(param_1 + 0x500));
  uVar3 = FUN_0043b160();
  if ((uVar3 >> 0x15 & 1) != 0) {
    *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + ~uVar7;
    return 1;
  }
  uVar8 = *(ulong *)(param_2 + 8);
  uVar1 = uVar1 + uVar7;
  uVar11 = (long)((uVar8 - uVar1 ^ uVar1 | uVar8 ^ uVar1) ^ uVar8) >> 0x3f ^ 0xffffffffffffffff;
  bVar9 = (byte)uVar11;
  uVar1 = uVar8;
  if (0xff < uVar8) {
    uVar1 = 0x100;
  }
  if (uVar1 != 0) {
    lVar10 = *(long *)(param_2 + 0x20);
    if (uVar1 < 4) {
      uVar13 = 0;
    }
    else {
      uVar16 = 0xffffffffffffffff;
      uVar15 = 0;
      uVar13 = uVar1 & 0x1fc;
      uVar18 = 0xffffffffffffffff;
      uVar19 = 0xffffffffffffffff;
      pbVar12 = (byte *)(uVar8 + lVar10 + -1);
      uVar17 = uVar7;
      do {
        uVar4 = uVar15 ^ 0xfffffffffffffffe;
        uVar5 = uVar15 ^ 0xfffffffffffffffd;
        uVar6 = uVar15 ^ 0xfffffffffffffffc;
        uVar15 = uVar15 + 4;
        uVar11 = uVar11 & ~((uint)(*pbVar12 ^ bVar2) & ((uint)((long)uVar17 >> 0x3f) ^ 0xffffffff));
        uVar16 = uVar16 & ~((uint)(*(byte *)(lVar10 + uVar8 + uVar4) ^ bVar2) &
                           ((uint)((long)(uVar17 - 1) >> 0x3f) ^ 0xffffffff));
        uVar18 = uVar18 & ~((uint)(*(byte *)(lVar10 + uVar8 + uVar5) ^ bVar2) &
                           ((uint)((long)(uVar17 - 2) >> 0x3f) ^ 0xffffffff));
        uVar19 = uVar19 & ~((uint)(*(byte *)(lVar10 + uVar8 + uVar6) ^ bVar2) &
                           ((uint)((long)(uVar17 - 3) >> 0x3f) ^ 0xffffffff));
        uVar17 = uVar17 - 4;
        pbVar12 = pbVar12 + -4;
      } while (uVar13 != uVar15);
      uVar11 = uVar19 & uVar18 & uVar16 & uVar11;
      bVar9 = (byte)uVar11;
      if (uVar1 == uVar13) goto LAB_003a8a68;
    }
    pbVar12 = (byte *)((uVar8 - uVar13) + lVar10);
    lVar10 = uVar1 - uVar13;
    lVar14 = uVar7 - uVar13;
    do {
      pbVar12 = pbVar12 + -1;
      uVar11 = uVar11 & ~((uint)(*pbVar12 ^ bVar2) & ((uint)(lVar14 >> 0x3f) ^ 0xffffffff));
      bVar9 = (byte)uVar11;
      lVar10 = lVar10 + -1;
      lVar14 = lVar14 + -1;
    } while (lVar10 != 0);
  }
LAB_003a8a68:
  uVar3 = (uint)((long)(0xfe - (ulong)bVar9) >> 0x3f);
  *(ulong *)(param_2 + 8) = uVar8 - ((long)(0xfe - (ulong)bVar9) >> 0x3f & uVar7 + 1);
  return uVar3 & 1 | ~uVar3;
}


