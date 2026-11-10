/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039a45c; name: FUN_0039a45c
 */


ulong FUN_0039a45c(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_3 < 0x21) {
    if (0x10 < param_3) {
      uVar7 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      lVar2 = *(long *)((long)param_2 + (param_3 - 8));
      uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar6 = *param_2 * -0x4b6d499041670d8d + param_3 + lVar2 * 0x651e95c4d06fbfb1 +
              (uVar6 >> 0x14 | uVar6 << 0x2c);
      uVar7 = ((uVar7 >> 0x2b | uVar7 * 0x200000) +
               *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
               (lVar2 * -0x41befec400000000 | (ulong)(lVar2 * -0x651e95c4d06fbfb1) >> 0x1e) ^ uVar6)
              * -0x622015f714c7d297;
      uVar6 = (uVar7 ^ uVar6 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    }
    if (8 < param_3) {
      uVar7 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar6 = uVar7 + param_3;
      uVar8 = uVar6 >> (param_3 & 0x3f) | uVar6 << 0x40 - (param_3 & 0x3f);
      uVar6 = (uVar8 ^ *param_2) * -0x622015f714c7d297;
      uVar6 = (uVar6 ^ uVar8 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar7;
    }
    if (3 < param_3) {
      uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar6 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar7) * -0x622015f714c7d297;
      uVar6 = (uVar6 ^ uVar7 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    }
    uVar6 = 0x9ae16a3b2f90404f;
    if (param_3 != 0) {
      uVar6 = (param_3 + (ulong)*(byte *)((long)param_2 + (param_3 - 1)) * 4) * -0x36b62838af619aa9
              ^ (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                -0x651e95c4d06fbfb1;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar8 = *param_2 + (lVar14 + param_3) * -0x3c5a37a36834ced9;
      uVar12 = param_2[3];
      lVar2 = *(long *)((long)param_2 + (param_3 - 8)) + uVar12;
      uVar6 = uVar8 + param_2[1];
      uVar7 = uVar6 + param_2[2];
      lVar10 = (uVar6 >> 7 | uVar6 << 0x39) + (uVar8 >> 0x25 | uVar8 * 0x8000000) +
               (uVar8 + uVar12 >> 0x34 | (uVar8 + uVar12) * 0x1000) +
               (uVar7 >> 0x1f | uVar7 << 0x21);
      uVar6 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar6;
      uVar9 = lVar2 + uVar6;
      uVar11 = uVar8 + lVar14;
      uVar6 = (uVar11 + lVar2 + lVar10) * -0x3c5a37a36834ced9 +
              (uVar7 + uVar12 + (uVar6 >> 0x25 | uVar6 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39) +
               (uVar9 >> 0x34 | uVar9 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar6 = lVar10 + (uVar6 ^ uVar6 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar10 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar13 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar9 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar4 = *(long *)((long)param_2 + (param_3 - 8));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar8 = (uVar9 ^ lVar10 + param_3) * -0x622015f714c7d297;
    uVar6 = lVar3 + lVar14;
    uVar7 = lVar2 + lVar3 + lVar10;
    lVar10 = uVar6 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar12 = (uVar8 ^ uVar9 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = uVar7 + lVar13;
    uVar9 = lVar10 + uVar9 + lVar14;
    uVar11 = uVar9 + lVar4;
    uVar16 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = lVar10 + lVar13 + lVar4;
    puVar5 = param_2 + 4;
    uVar15 = *param_2;
    uVar1 = lVar13 + lVar2 + uVar16;
    uVar9 = (uVar9 >> 0x2c | uVar9 * 0x100000) + lVar10 + (uVar12 >> 0x15 | uVar12 << 0x2b);
    lVar14 = uVar15 + lVar13 * -0x4b6d499041670d8d;
    lVar10 = -(param_3 - 1 & 0xffffffffffffffc0);
    uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar2 + (uVar1 >> 0x15 | uVar1 << 0x2b);
    while( true ) {
      lVar10 = lVar10 + 0x40;
      lVar13 = uVar15 + uVar7 * -0x4b6d499041670d8d;
      uVar12 = lVar14 + uVar8 + uVar6 + puVar5[-3];
      uVar6 = uVar6 + uVar7 + puVar5[2];
      uVar6 = puVar5[1] + uVar8 + (uVar6 >> 0x2a | uVar6 * 0x400000) * -0x4b6d499041670d8d;
      lVar14 = (uVar16 + uVar11 >> 0x21 | (uVar16 + uVar11) * 0x80000000) * -0x4b6d499041670d8d;
      uVar7 = lVar13 + puVar5[-3] + puVar5[-2];
      uVar8 = uVar7 + puVar5[-1];
      uVar16 = (uVar12 >> 0x25 | uVar12 * 0x8000000) * -0x4b6d499041670d8d ^ uVar9;
      uVar11 = lVar13 + uVar11 + puVar5[-1] + uVar16;
      lVar2 = lVar14 + uVar9 + *puVar5;
      uVar9 = uVar6 + puVar5[-2] + lVar2 + puVar5[3];
      uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar13 + (uVar11 >> 0x15 | uVar11 << 0x2b);
      uVar12 = lVar2 + puVar5[1] + puVar5[2];
      uVar11 = uVar12 + puVar5[3];
      uVar9 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar2 + (uVar9 >> 0x15 | uVar9 << 0x2b);
      if (lVar10 == 0) break;
      uVar15 = puVar5[4];
      puVar5 = puVar5 + 8;
    }
    uVar8 = (uVar11 ^ uVar8) * -0x622015f714c7d297;
    uVar7 = (uVar9 ^ uVar7) * -0x622015f714c7d297;
    uVar8 = (uVar8 ^ uVar11 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar9 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = lVar14 + (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar7 ^ uVar16 + (uVar6 ^ uVar6 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar7 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  return uVar6;
}


