/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f526d4; name: FUN_02f526d4
 */


void FUN_02f526d4(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  fVar6 = (float)((uint)*(ushort *)(param_2 + 0x1a) << 0x10);
  lVar8 = (ulong)CONCAT42(fVar6,*(ushort *)(param_2 + 0x1a)) << 0x10;
  bVar1 = *(byte *)(param_2 + 0x20);
  if (*(byte *)(param_2 + 0x20) <= *(byte *)(param_3 + 0x20)) {
    bVar1 = *(byte *)(param_3 + 0x20);
  }
  fVar7 = (float)((uint)*(ushort *)(param_3 + 0x1a) << 0x10);
  lVar10 = (ulong)CONCAT42(fVar7,*(ushort *)(param_3 + 0x1a)) << 0x10;
  uVar2 = *(ushort *)(param_2 + 0x1c);
  uVar3 = *(ushort *)(param_3 + 0x1c);
  if (bVar1 == 2) {
    uVar13 = NEON_fmax(lVar8,lVar10,4);
  }
  else if (bVar1 == 1) {
    uVar13 = NEON_fmin(lVar8,lVar10,4);
  }
  else if (bVar1 == 0) {
    uVar13 = CONCAT44(SQRT(fVar6 * fVar7),SQRT((float)lVar8 * (float)lVar10));
  }
  else {
    uVar13 = CONCAT44((fVar6 + fVar7) * 0.5,((float)lVar8 + (float)lVar10) * 0.5);
  }
  uVar4 = *(ushort *)(param_2 + 0x1e);
  bVar1 = *(byte *)(param_2 + 0x21);
  if (*(byte *)(param_2 + 0x21) <= *(byte *)(param_3 + 0x21)) {
    bVar1 = *(byte *)(param_3 + 0x21);
  }
  uVar5 = *(ushort *)(param_3 + 0x1e);
  lVar8 = (ulong)CONCAT42((uint)uVar4 << 0x10,uVar4) << 0x10;
  lVar10 = (ulong)CONCAT42((uint)uVar5 << 0x10,uVar5) << 0x10;
  if (bVar1 == 2) {
    uVar12 = NEON_fmax(lVar8,lVar10,4);
    uVar11 = (undefined2)((ulong)uVar12 >> 0x10);
  }
  else if (bVar1 == 1) {
    uVar12 = NEON_fmin(lVar8,lVar10,4);
    uVar11 = (undefined2)((ulong)uVar12 >> 0x10);
  }
  else {
    uVar11 = (short)((uint)(((float)((uint)uVar4 << 0x10) + (float)((uint)uVar5 << 0x10)) * 0.5) >>
                    0x10);
    if (bVar1 == 0) {
      uVar11 = (short)((uint)SQRT((float)((uint)uVar4 << 0x10) * (float)((uint)uVar5 << 0x10)) >>
                      0x10);
    }
  }
  *(undefined2 *)(param_1 + 0x34) = uVar11;
  *(short *)(param_1 + 0x30) = (short)((ulong)uVar13 >> 0x10);
  uVar12 = NEON_fmax((ulong)CONCAT42((uint)uVar2 << 0x10,uVar2) << 0x10,
                     (ulong)CONCAT42((uint)uVar3 << 0x10,uVar3) << 0x10,4);
  uVar13 = NEON_fmax(CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar13 >> 0x20),
                              (float)uVar12 - (float)uVar13),0,4);
  *(short *)(param_1 + 0x32) = (short)((ulong)uVar13 >> 0x10);
  lVar8 = 0;
  if ((*(byte *)(param_5 + 0x1a) & 1) != 0) {
    lVar8 = param_5;
  }
  if ((param_4 == 0) || ((*(ushort *)(param_4 + 0x1a) & 1) == 0)) {
    if (*(char *)(param_4 + 0x18) == '\x11') {
      lVar9 = *(long *)(param_4 + 0x40);
      lVar10 = 0;
      if (lVar9 != 0) {
        lVar10 = lVar9 + param_4 + 0x40;
      }
      param_4 = 0;
      if ((*(byte *)(lVar10 + 0x1a) & 1) != 0) {
        param_4 = lVar10;
      }
      goto LAB_02f52828;
    }
    lVar10 = 0x7f7fffee7f7fffee;
  }
  else {
LAB_02f52828:
    lVar10 = (ulong)CONCAT42((uint)*(ushort *)(param_4 + 0x70) << 0x10,*(ushort *)(param_4 + 0x70))
             << 0x10;
  }
  if (lVar8 == 0) {
    if (*(char *)(param_5 + 0x18) != '\x11') {
      lVar8 = 0x7f7fffee7f7fffee;
      goto LAB_02f52898;
    }
    lVar8 = *(long *)(param_5 + 0x40);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 + param_5 + 0x40;
    }
    lVar8 = 0;
    if ((*(byte *)(lVar9 + 0x1a) & 1) != 0) {
      lVar8 = lVar9;
    }
  }
  lVar8 = (ulong)CONCAT42((uint)*(ushort *)(lVar8 + 0x70) << 0x10,*(ushort *)(lVar8 + 0x70)) << 0x10
  ;
LAB_02f52898:
  uVar13 = NEON_fmin(lVar10,lVar8,4);
  uVar12 = NEON_fmax(CONCAT44(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x24)),
                     CONCAT44(*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x24)),4);
  uVar13 = NEON_fmin(uVar12,uVar13,4);
  *(short *)(param_1 + 0x38) = (short)((uint)((float)uVar13 * 1.0039062) >> 0x10);
  return;
}


