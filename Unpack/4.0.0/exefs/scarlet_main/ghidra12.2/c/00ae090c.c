/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae090c; name: FUN_00ae090c
 */


uint FUN_00ae090c(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  lVar14 = *param_2;
  uVar12 = FUN_00cf4cfc(*(undefined8 *)(lVar14 + 0x70));
  if ((uVar12 & 1) != 0) {
    return 1;
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar14 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) {
    return 1;
  }
  uVar6 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
  uVar7 = FUN_00cf41a8(*(undefined8 *)(*param_2 + 0x70));
  uVar12 = FUN_00e974e0(*(undefined8 *)(*param_2 + 0x70));
  if (*param_1 == 0) {
    return 0x8000;
  }
  lVar14 = *(long *)(*param_1 + 0x40);
  if (lVar14 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)*(byte *)(lVar14 + 0x808);
  }
  lVar14 = *param_2;
  if (*(long *)(*(long *)(lVar14 + 0x70) + 8) == 0) {
    uVar9 = FUN_00cf44f4();
    uVar10 = FUN_00cf41a8(*(undefined8 *)(lVar14 + 0x70));
    uVar11 = FUN_00f14b64(*(undefined8 *)(lVar14 + 0x70));
    uVar8 = FUN_00f13da0(uVar9,uVar10,uVar11);
    uVar8 = uVar8 & 0xff;
  }
  else {
    uVar8 = FUN_00e9987c();
  }
  lVar14 = *(long *)(*param_1 + 0x40);
  if (lVar14 == 0) {
    uVar15 = 0;
    goto LAB_00ae0a64;
  }
  if (*(char *)(lVar14 + 0x809) == '\x02') {
    bVar2 = uVar15 < uVar8;
LAB_00ae09f8:
    uVar15 = (uint)bVar2 << 4;
  }
  else {
    if (*(char *)(lVar14 + 0x809) == '\x01') {
      bVar2 = uVar8 < uVar15;
      goto LAB_00ae09f8;
    }
    uVar15 = 0;
  }
  if ((uVar6 >> 0xd & 7) == 0) {
    if ((*(uint *)(lVar14 + (ulong)(ushort)uVar6 * 4 + 0x80c) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
      uVar15 = uVar15 | 4;
    }
  }
  uVar6 = (uint)uVar12 & 0xffff;
  uVar13 = (uVar12 & 0xffffffff) >> 3 & 0x1fff;
  if (uVar6 < 0x800) {
    bVar1 = *(byte *)(lVar14 + uVar13 + 0x288e);
  }
  else {
    if (0xfff < uVar6) goto LAB_00ae0a64;
    bVar1 = *(byte *)(uVar13 + lVar14 + 0x608);
  }
  if ((bVar1 >> (ulong)((uint)uVar12 & 7) & 1) != 0) {
    uVar15 = uVar15 | 8;
  }
LAB_00ae0a64:
  lVar14 = *param_2;
  sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),0);
  sVar5 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),1);
  uVar6 = 2;
  if (sVar4 == 0) {
    uVar6 = 1;
  }
  uVar7 = (uint)(sVar4 != 0);
  if (sVar5 != 0) {
    uVar7 = uVar6;
  }
  sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),2);
  if (sVar4 != 0) {
    uVar7 = uVar7 + 1;
  }
  sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),3);
  lVar14 = *param_2;
  if (uVar7 != -(uint)(sVar4 != 0)) {
    uVar6 = 0;
    do {
      uVar12 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),uVar6);
      if (*(long *)(*param_1 + 0x40) != 0) {
        if ((*(byte *)(*(long *)(*param_1 + 0x40) + ((uVar12 & 0xfff8) >> 3) + 0x280e) >>
             (ulong)((uint)uVar12 & 7) & 1) != 0) {
          uVar15 = uVar15 | 2;
        }
      }
      lVar14 = *param_2;
      uVar6 = uVar6 + 1;
      sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),0);
      sVar5 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),1);
      uVar7 = 2;
      if (sVar4 == 0) {
        uVar7 = 1;
      }
      uVar8 = (uint)(sVar4 != 0);
      if (sVar5 != 0) {
        uVar8 = uVar7;
      }
      sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),2);
      if (sVar4 != 0) {
        uVar8 = uVar8 + 1;
      }
      sVar4 = FUN_00eedbc8(*(undefined8 *)(lVar14 + 0x70),3);
      lVar14 = *param_2;
      if (sVar4 != 0) {
        uVar8 = uVar8 + 1;
      }
    } while ((uVar6 & 0xff) < uVar8);
  }
  uVar9 = FUN_01539950(*(undefined8 *)(lVar14 + 0x70));
  lVar14 = *param_1;
  uVar12 = FUN_00ae0e58(lVar14,uVar9);
  if ((uVar12 & 1) == 0) {
    uVar15 = uVar15 | 4;
  }
  lVar14 = *(long *)(lVar14 + 0x40);
  uVar6 = uVar15;
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x29b9) == '\x02')) {
    lVar14 = *param_2;
    cVar3 = FUN_010ca6e8(*(undefined8 *)(lVar14 + 0x70));
    if (cVar3 == '\x13') {
      cVar3 = FUN_00e9782c();
    }
    else {
      cVar3 = FUN_010ca6e8(*(undefined8 *)(lVar14 + 0x70));
    }
    uVar6 = uVar15 | 0x2000;
    if (cVar3 != 'c') {
      uVar6 = uVar15;
    }
  }
  return uVar6;
}


