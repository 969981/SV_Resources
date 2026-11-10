/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340c180; name: FUN_0340c180
 */


undefined8 FUN_0340c180(uint *param_1,long param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar8 = PTR_DAT_047e6c20;
  param_1[5] = 0;
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(PTR_DAT_047e6c20 + 8);
  uVar10 = (ulong)bVar15 + 2;
  uVar14 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *param_1 = uVar4 & (uint)(uVar13 >> ((ulong)bVar15 & 0x3f));
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar8 + 0x60);
  uVar10 = (ulong)bVar15 + 0x18;
  uVar14 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  param_1[6] = uVar4 & (uint)(uVar13 >> ((ulong)bVar15 & 0x3f));
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar8 + 0x60);
  uVar10 = (ulong)bVar15 + 0x18;
  uVar14 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  param_1[7] = uVar4 & (uint)(uVar13 >> ((ulong)bVar15 & 0x3f));
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar8 + 0x60);
  uVar10 = (ulong)bVar15 + 0x18;
  uVar14 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  param_1[8] = (uVar4 & (uint)(uVar13 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar5 = *(undefined4 *)(puVar8 + 0x18);
  uVar10 = (ulong)bVar15 + 6;
  uVar14 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(byte *)(param_1 + 9) = ((byte)uVar5 & (byte)(uVar13 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar4 = *(uint *)(puVar8 + 0x20) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar10 = (ulong)*(byte *)(param_3 + 1) + 8;
  uVar13 = uVar10 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar10 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(char *)((long)param_1 + 0x25) = (char)uVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
    return 1;
  }
  bVar15 = (byte)param_1[9];
  if (bVar15 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
LAB_0340c39c:
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar10 = (ulong)(bVar15 + 3) & 0x1fc;
    uVar4 = *(int *)(param_4 + 0x50) + (int)uVar10;
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      lVar9 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar9 + uVar10;
      *(uint *)(param_4 + 0x50) = uVar4;
      *(long *)(param_1 + 2) = lVar9;
      bVar15 = (byte)param_1[9];
      if (bVar15 == 0) goto LAB_0340c39c;
    }
    puVar11 = param_1 + 2;
    uVar4 = *(int *)(param_4 + 0x50) + (uint)bVar15 * 8;
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else {
      lVar9 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar9 + (ulong)bVar15 * 8;
      *(uint *)(param_4 + 0x50) = uVar4;
      *(long *)(param_1 + 4) = lVar9;
      if ((char)param_1[9] == '\0') goto LAB_0340c8b8;
    }
    puVar12 = param_1 + 4;
    uVar10 = 0;
    do {
      uVar13 = (ulong)*(byte *)(param_3 + 1) + 3;
      uVar14 = uVar13 >> 5;
      puVar2 = (uint *)(*param_3 + uVar14 * 4);
      bVar15 = (byte)*(undefined4 *)(puVar8 + 0xc) &
               (byte)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
      uVar16 = (uint)uVar13;
      uVar4 = uVar16 & 0x1f;
      iVar7 = *(int *)((long)param_3 + 0xc) - (int)uVar14;
      *(char *)(param_3 + 1) = (char)uVar4;
      *(int *)((long)param_3 + 0xc) = iVar7;
      uVar4 = uVar4 + 1;
      *param_3 = (long)puVar2;
      uVar6 = *puVar2;
      uVar3 = uVar4 & 0x1f;
      iVar7 = iVar7 - (uVar4 >> 5);
      puVar1 = (ulong *)(puVar2 + (uVar4 >> 5));
      *(char *)(param_3 + 1) = (char)uVar3;
      *(int *)((long)param_3 + 0xc) = iVar7;
      *param_3 = (long)puVar1;
      if ((uVar6 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
        uVar13 = *puVar1;
        uVar6 = *(uint *)(puVar8 + 0x14);
        uVar4 = uVar3 + 5;
        *(byte *)(param_3 + 1) = (byte)uVar4 & 0x1f;
        bVar15 = bVar15 | (byte)((uVar6 & (uint)(uVar13 >> uVar3)) << 3);
        *(uint *)((long)param_3 + 0xc) = iVar7 - (uVar4 >> 5);
        *param_3 = (long)((long)puVar1 + (ulong)(uVar4 >> 5) * 4);
      }
      *(byte *)(*(long *)(param_1 + 2) + uVar10) = bVar15;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (byte)param_1[9]);
    if ((byte)param_1[9] != 0) {
      uVar10 = 0;
      lVar9 = 7;
      do {
        if ((*(byte *)(*(long *)puVar11 + uVar10) & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -7) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -7) = (char)uVar4;
          if (*(char *)((long)param_1 + 0x26) == '\0') {
            *(undefined1 *)((long)param_1 + 0x26) = 1;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 1 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -6) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -6) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 2) {
            *(undefined1 *)((long)param_1 + 0x26) = 2;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 2 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -5) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -5) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 3) {
            *(undefined1 *)((long)param_1 + 0x26) = 3;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 3 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -4) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -4) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 4) {
            *(undefined1 *)((long)param_1 + 0x26) = 4;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 4 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -3) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -3) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 5) {
            *(undefined1 *)((long)param_1 + 0x26) = 5;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 5 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -2) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 6) {
            *(undefined1 *)((long)param_1 + 0x26) = 6;
          }
        }
        if ((*(byte *)(*(long *)puVar11 + uVar10) >> 6 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar9 + -1) = 0xff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 7) {
            *(undefined1 *)((long)param_1 + 0x26) = 7;
          }
        }
        if (*(char *)(*(long *)puVar11 + uVar10) < '\0') {
          uVar4 = *(uint *)(puVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 8) {
            *(undefined1 *)((long)param_1 + 0x26) = 8;
          }
        }
        else {
          *(undefined1 *)(*(long *)puVar12 + lVar9) = 0xff;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar10 < (byte)param_1[9]);
    }
  }
LAB_0340c8b8:
  if (*(int *)((long)param_3 + 0xc) < 0) {
    return 1;
  }
  return 0;
}


