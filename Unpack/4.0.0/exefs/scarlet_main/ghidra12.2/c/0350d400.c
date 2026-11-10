/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350d400; name: FUN_0350d400
 */


/* WARNING: Removing unreachable block (ram,0x0350d494) */

void FUN_0350d400(long param_1,undefined8 *param_2)

{
  long *__dest;
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  long lVar13;
  long *__src;
  size_t __n;
  uint uVar14;
  float fVar15;
  ushort uVar16;
  float fVar17;
  
  if (*(int *)((long)param_2 + 0x2c) == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  __dest = (long *)(param_1 + 0x80);
  if (*(short *)(param_1 + 0x92) == 0) {
    if (*__dest == 0) {
      if (*(short *)((long)param_2 + 0x12) == 0) goto LAB_0350d4a8;
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
LAB_0350d4a8:
      if (*(int *)((long)param_2 + 0x2c) == 0x2d) {
        iVar6 = 0x2b;
        goto LAB_0350d828;
      }
    }
    memcpy(__dest,param_2,0x2c);
    *(undefined8 *)((long)param_2 + 0x14) = 0;
  }
  puVar5 = PTR_DAT_047e6d08;
  __src = (long *)(param_1 + 0xb0);
  if (*__src == 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x88);
    *(short *)(param_1 + 0xc0) = (short)*(undefined4 *)puVar5;
    iVar6 = FUN_034768d8(__src);
    if (iVar6 != 1) {
      iVar6 = 2;
      goto LAB_0350d828;
    }
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)puVar5);
      fVar17 = *(float *)(*(long *)(param_1 + 0xe8) + 0x264);
      fVar17 = ((float)*(int *)(*(long *)(param_1 + 0xe8) + 0x2d8) + fVar15 * fVar17) / fVar17;
      uVar16 = 0x3f00;
      if (fVar17 <= 0.0) {
        uVar16 = 0xbf00;
      }
      uVar14 = (uint)((float)((uint)uVar16 << 0x10) + fVar17);
      if (0 < (int)uVar14) {
        bVar3 = *(byte *)(param_1 + 0xb8);
        if (bVar3 != 0) {
          __n = (ulong)uVar14 << 2;
          if (bVar3 == 1) {
            lVar9 = 0;
          }
          else {
            lVar10 = -((ulong)bVar3 & 0xfe);
            lVar13 = 4;
            do {
              lVar9 = lVar13;
              memset((void *)(*(long *)(param_1 + 0xb0) +
                             (lVar9 + -4) * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n);
              memset((void *)(*(long *)(param_1 + 0xb0) + lVar9 * (ulong)*(ushort *)(param_1 + 0xc0)
                             ),0,__n);
              lVar10 = lVar10 + 2;
              lVar13 = lVar9 + 8;
            } while (lVar10 != 0);
            lVar9 = lVar9 + 4;
          }
          if ((bVar3 & 1) != 0) {
            memset((void *)(*(long *)(param_1 + 0xb0) + lVar9 * (ulong)*(ushort *)(param_1 + 0xc0)),
                   0,__n);
          }
        }
        *(uint *)(param_1 + 0x3c) = uVar14;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0xe8);
  puVar1 = (uint *)(lVar10 + 699);
  if (((*puVar1 >> 0x16 & 1) == 0) && (iVar6 = *(int *)(lVar10 + 0x2b4), iVar6 != 0)) {
    uVar16 = *(ushort *)(param_1 + 0x92);
    if ((int)(uint)uVar16 <= iVar6) {
      *(uint *)(lVar10 + 0x2b4) = iVar6 - (uint)uVar16;
      *puVar1 = *puVar1 & 0xfe3fffff;
      *(undefined2 *)(param_1 + 0x92) = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
      iVar6 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        iVar6 = 0x11;
      }
      goto LAB_0350d828;
    }
    *(int *)(param_1 + 0x38) = iVar6;
    *(ushort *)(param_1 + 0x92) = uVar16 - (short)iVar6;
    *(undefined4 *)(lVar10 + 0x2b4) = 0;
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  uVar14 = *(uint *)(param_1 + 0x38);
  sVar4 = *(short *)(param_1 + 0x92);
  if (sVar4 == 0) {
    sVar12 = 0;
    iVar6 = 0x11;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x70);
    uVar2 = *(uint *)(param_1 + 0x54);
    do {
      iVar6 = (*(code *)(&DAT_048b0a20)[(ulong)uVar7 * 6 + (ulong)*(byte *)(param_1 + 0x7c)])
                        (__dest,__src,uVar2,param_1 + 0x10);
      uVar7 = *(uint *)(param_1 + 0x70);
      if (uVar7 == 2) {
        if (*(uint *)(param_1 + 0x4c) < 0x400) {
          uVar7 = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
        }
      }
      sVar12 = *(short *)(param_1 + 0x92);
    } while ((sVar12 != 0) &&
            (uVar2 = *(uint *)(param_1 + 0x54), *(ushort *)(param_1 + 0xc2) < uVar2));
  }
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0x140) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0xe0) + 0x138);
  }
  uVar7 = *(uint *)(param_1 + 0x98);
  if (uVar7 != 0) {
    uVar11 = 0;
    iVar8 = 0;
    lVar10 = lVar10 + 0x10;
    do {
      lVar13 = (ulong)*(uint *)(param_1 + 0x94) * 0x20;
      uVar2 = *(uint *)(lVar10 + lVar13);
      if (uVar14 <= uVar2 && uVar2 < uVar14 + (ushort)(sVar4 - sVar12)) {
        *(undefined4 *)(lVar10 + lVar13) = 0;
        uVar7 = *(uint *)(param_1 + 0x98);
        iVar8 = iVar8 + 1;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x20;
    } while (uVar11 < uVar7);
    *(uint *)(param_1 + 0x98) = uVar7 - iVar8;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar8;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + iVar8;
  }
  iVar8 = *(int *)(param_1 + 0x9c);
  if ((iVar8 != -1) && (*(char *)(param_1 + 0xf1) == '\0')) {
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0xcc) = iVar8 + uVar14;
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
  *(float *)(param_1 + 0xd0) = (fVar15 * 1.5258789e-05) / *(float *)(param_1 + 0x74);
  if (*(short *)(param_1 + 0x92) == 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    *param_2 = 0;
    *(undefined2 *)((long)param_2 + 0x12) = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    if (*(char *)(param_1 + 0xf0) == '\0') goto LAB_0350d728;
    if (*(long *)(*(long *)(param_1 + 0xe0) + 0x120) != 0) {
      iVar6 = FUN_0350ba28(*(long *)(param_1 + 0xe0),__src);
      goto LAB_0350d728;
    }
    iVar6 = 0x11;
  }
  else {
LAB_0350d728:
    if ((iVar6 != 0x2d) && (iVar6 != 0x11)) goto LAB_0350d828;
  }
  memcpy(param_2,__src,0x2c);
  *(undefined8 *)(param_1 + 0xc4) = 0;
LAB_0350d828:
  *(int *)((long)param_2 + 0x2c) = iVar6;
  return;
}


