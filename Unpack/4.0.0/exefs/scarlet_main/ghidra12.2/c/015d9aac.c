/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d9aac; name: FUN_015d9aac
 */


ulong FUN_015d9aac(undefined8 param_1,byte param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  uVar8 = param_3 & 0x1f;
  uVar4 = (param_3 & 0xffff) >> 5 & 0x1f;
  uVar6 = 7;
  bVar5 = 1;
  if ((param_2 != 0x12) && (uVar8 != 0x12)) {
    bVar2 = (&DAT_03d6286c)[(ulong)uVar8 + (ulong)param_2 * 0x12];
    uVar6 = (ulong)bVar2;
    if (bVar2 == 4) {
      uVar6 = 7;
    }
    else if (bVar2 == 2) {
      uVar6 = 6;
    }
    else if (bVar2 != 8) {
      bVar5 = 0;
      if (bVar2 != 0) {
        uVar6 = 0;
      }
      goto LAB_015d9afc;
    }
    bVar5 = 1;
  }
LAB_015d9afc:
  uVar7 = (param_3 & 0xffff) >> 10 & 0x1f;
  if ((uVar4 != 0x12) && (uVar4 != uVar8)) {
    if ((param_2 == 0x12) ||
       (cVar3 = (&DAT_03d6286c)[(ulong)uVar4 + (ulong)param_2 * 0x12], cVar3 == '\x04')) {
      bVar2 = 1;
      lVar10 = 7;
    }
    else if (cVar3 == '\x02') {
      bVar2 = 1;
      lVar10 = 6;
    }
    else if (cVar3 == '\b') {
      bVar2 = 1;
      lVar10 = 8;
    }
    else {
      bVar2 = 0;
      lVar10 = 0;
    }
    uVar11 = (uint)((&DAT_03d629b0)[lVar10] * (&DAT_03d629b0)[uVar6]) >> 6;
    if (0xfff < uVar11) {
      uVar11 = 0x1000;
    }
    uVar1 = 0xffffffff;
    if ((bool)(bVar2 & bVar5 & uVar11 == 0)) {
      uVar11 = 1;
    }
    do {
      uVar9 = uVar1;
      if (uVar9 == 0x1f) {
        uVar6 = 0;
        goto LAB_015d9bb0;
      }
      uVar1 = uVar9 + 1;
    } while ((uVar11 >> (ulong)(uVar1 & 0x1f) & 1) == 0);
    if (uVar1 < 0xc) {
      uVar6 = (ulong)(uVar9 + 2);
    }
    else {
      uVar6 = 0xd;
    }
  }
LAB_015d9bb0:
  if (((uVar7 != uVar4) && (uVar7 != 0x12)) && (uVar7 != uVar8)) {
    if ((param_2 == 0x12) ||
       (cVar3 = (&DAT_03d6286c)[(ulong)uVar7 + (ulong)param_2 * 0x12], cVar3 == '\x04')) {
      bVar5 = 1;
      lVar10 = 7;
    }
    else if (cVar3 == '\x02') {
      bVar5 = 1;
      lVar10 = 6;
    }
    else if (cVar3 == '\b') {
      bVar5 = 1;
      lVar10 = 8;
    }
    else {
      bVar5 = 0;
      lVar10 = 0;
    }
    uVar8 = (uint)((&DAT_03d629b0)[lVar10] * (&DAT_03d629b0)[uVar6 & 0xff]) >> 6;
    if (0xfff < uVar8) {
      uVar8 = 0x1000;
    }
    uVar4 = 0xffffffff;
    if ((bool)(bVar5 & ((uVar6 & 0xff) != 0 && uVar8 == 0))) {
      uVar8 = 1;
    }
    do {
      uVar7 = uVar4;
      if (uVar7 == 0x1f) {
        return 0;
      }
      uVar4 = uVar7 + 1;
    } while ((uVar8 >> (ulong)(uVar4 & 0x1f) & 1) == 0);
    if (uVar4 < 0xc) {
      uVar6 = (ulong)(uVar7 + 2);
    }
    else {
      uVar6 = 0xd;
    }
  }
  return uVar6;
}


