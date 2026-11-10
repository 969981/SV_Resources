/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346c424; name: FUN_0346c424
 */


undefined8 FUN_0346c424(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  int *piVar19;
  uint uVar20;
  ushort *puVar21;
  void *__dest;
  uint uVar22;
  void *pvVar23;
  ulong uVar24;
  byte *pbVar26;
  byte *pbVar25;
  void *pvVar27;
  uint uVar28;
  long lVar29;
  uint *puVar30;
  
  bVar6 = (*(char *)(param_2 + 4) != '\0') << 1;
  bVar7 = *(byte *)(param_1 + 0xdf) & 0xfc;
  *(byte *)(param_1 + 0xdf) = bVar7 | *(byte *)(param_1 + 0xdf) & 1 | bVar6;
  cVar5 = *(char *)(param_2 + 5);
  *(byte *)(param_1 + 0xdf) = bVar7 | bVar6 | cVar5 != '\0';
  if (cVar5 == '\0') {
    puVar15 = (undefined1 *)(param_2 + 6);
  }
  else {
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 6) * 0.008726647;
    *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 10) * 0.008726647;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x12);
    puVar15 = (undefined1 *)(param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x16);
  }
  *(undefined1 *)(param_1 + 0xd8) = *puVar15;
  *(undefined1 *)(param_1 + 0xd9) = puVar15[1];
  *(undefined1 *)(param_1 + 0xda) = puVar15[2];
  *(undefined1 *)(param_1 + 0xdb) = puVar15[3];
  *(undefined1 *)(param_1 + 0xdc) = puVar15[4];
  *(undefined1 *)(param_1 + 0xdd) = puVar15[5];
  *(undefined1 *)(param_1 + 0xde) = puVar15[6];
  bVar6 = puVar15[7];
  if ((ulong)bVar6 == 0) {
LAB_0346c974:
    uVar12 = 2;
  }
  else {
    uVar24 = 0;
    puVar21 = (ushort *)(puVar15 + 8);
    do {
      uVar10 = *puVar21;
      uVar8 = *(ushort *)((long)puVar21 + 1);
      plVar18 = (long *)(param_1 + uVar24 * 0x18 + 0x30);
      if (*plVar18 != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *plVar18 = 0;
      }
      lVar29 = param_1 + uVar24 * 0x18;
      puVar30 = (uint *)(lVar29 + 0x38);
      puVar30[0] = 0;
      puVar30[1] = 0;
      if (uVar8 == 0) {
        return 0x1f;
      }
      *(undefined4 *)(param_1 + uVar24 * 0x18 + 0x40) = 1;
      lVar11 = (ulong)uVar8 + 2;
      *puVar30 = (uint)lVar11;
      lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,lVar11 * 0x14);
      *plVar18 = lVar11;
      if (lVar11 == 0) {
        *puVar30 = 0;
        return 0x34;
      }
      puVar1 = (uint *)(lVar29 + 0x3c);
      *puVar1 = (uint)(byte)uVar10;
      memcpy((void *)(lVar11 + 0xc),(byte *)((long)puVar21 + 3),(ulong)uVar8 * 0xc);
      *(undefined4 *)(*plVar18 + 8) = 9;
      *(undefined4 *)*plVar18 = 0xff7fffff;
      *(undefined4 *)(*plVar18 + 4) = *(undefined4 *)(*plVar18 + 0x10);
      *(undefined4 *)(*plVar18 + (ulong)(*puVar30 - 1) * 0xc + 8) = 9;
      *(undefined4 *)(*plVar18 + (ulong)(*puVar30 - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(*plVar18 + (ulong)(*puVar30 - 1) * 0xc + 4) =
           *(undefined4 *)(*plVar18 + (ulong)(*puVar30 - 2) * 0xc + 4);
      FUN_0346cdac(plVar18);
      if (((uVar24 == *(byte *)(param_1 + 0xd8)) || (uVar24 == *(byte *)(param_1 + 0xd9))) ||
         (uVar24 == *(byte *)(param_1 + 0xda))) {
        if (*puVar1 == 0) {
          *puVar1 = 4;
        }
        else if (*puVar1 == 2) {
          if (*puVar30 != 0) {
            uVar16 = 0;
            lVar29 = 4;
            do {
              uVar16 = uVar16 + 1;
              *(float *)(*plVar18 + lVar29) = *(float *)(*plVar18 + lVar29) + 1.0;
              lVar29 = lVar29 + 0xc;
            } while (uVar16 < *puVar30);
          }
          *puVar1 = 0;
          FUN_0346cdac(plVar18);
        }
      }
      puVar21 = (ushort *)((byte *)((long)puVar21 + 3) + (ulong)(uint)uVar8 * 0xc);
      uVar24 = uVar24 + 1;
    } while (uVar24 != bVar6);
    uVar8 = *puVar21;
    uVar12 = 1;
    if (uVar8 != 0) {
      uVar28 = 0;
      puVar21 = puVar21 + 1;
      do {
        uVar3 = *(undefined4 *)puVar21;
        uVar10 = puVar21[2];
        bVar6 = *(byte *)((long)puVar21 + 5);
        pbVar25 = (byte *)((long)puVar21 + 7);
        uVar14 = (byte)puVar21[3] & 0x7f;
        pbVar26 = pbVar25;
        if ((char)(byte)puVar21[3] < '\0') {
          do {
            pbVar25 = pbVar26 + 1;
            bVar7 = *pbVar26;
            uVar14 = bVar7 & 0x7f | uVar14 << 7;
            pbVar26 = pbVar25;
          } while ((char)bVar7 < '\0');
        }
        iVar4 = *(int *)pbVar25;
        bVar7 = pbVar25[4];
        uVar9 = *(ushort *)(pbVar25 + 5);
        uVar24 = (ulong)uVar9;
        pvVar13 = *(void **)(param_1 + 0xe0);
        uVar22 = *(uint *)(param_1 + 0xe8);
        if (uVar22 != 0) {
          pvVar23 = pvVar13;
          do {
            if ((*(uint *)((long)pvVar23 + 0xc) == uVar14) &&
               (*(int *)((long)pvVar23 + 0x10) == iVar4)) {
              if (*(long *)((long)pvVar23 + 0x18) != 0) {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                *(undefined8 *)((long)pvVar23 + 0x18) = 0;
              }
              *(undefined8 *)((long)pvVar23 + 0x20) = 0;
              pvVar13 = *(void **)(param_1 + 0xe0);
              uVar22 = *(uint *)(param_1 + 0xe8);
              pvVar27 = (void *)((long)pvVar13 + (ulong)uVar22 * 0x30 + -0x30);
              __dest = pvVar23;
              if (pvVar23 < pvVar27) {
                do {
                  pvVar13 = (void *)((long)__dest + 0x30);
                  memcpy(__dest,pvVar13,0x30);
                  __dest = pvVar13;
                } while (pvVar13 < pvVar27);
                uVar22 = *(uint *)(param_1 + 0xe8);
                pvVar13 = *(void **)(param_1 + 0xe0);
              }
              uVar22 = uVar22 - 1;
              *(uint *)(param_1 + 0xe8) = uVar22;
            }
            else {
              pvVar23 = (void *)((long)pvVar23 + 0x30);
            }
          } while ((void *)((long)pvVar13 + (ulong)uVar22 * 0x30) != pvVar23);
        }
        uVar20 = *(uint *)(param_1 + 0xec);
        if (uVar20 <= uVar22) {
          iVar2 = uVar20 + (uVar20 >> 1);
          if (uVar20 == 0) {
            iVar2 = 1;
          }
          uVar20 = iVar2 + uVar20;
          pvVar13 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,pvVar13,(ulong)uVar20 * 0x30);
          if (pvVar13 == (void *)0x0) goto LAB_0346c974;
          *(void **)(param_1 + 0xe0) = pvVar13;
          *(uint *)(param_1 + 0xec) = uVar20;
        }
        if (uVar20 <= uVar22) goto LAB_0346c974;
        uVar16 = (ulong)*(uint *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) + 1;
        if (pvVar13 == (void *)0x0) goto LAB_0346c974;
        puVar17 = (undefined4 *)((long)pvVar13 + uVar16 * 0x30);
        plVar18 = (long *)(puVar17 + 6);
        *plVar18 = 0;
        puVar17[10] = 1;
        puVar17[2] = (uint)bVar6;
        puVar17[3] = uVar14;
        *puVar17 = uVar3;
        puVar17[1] = (uint)(byte)uVar10;
        puVar17[4] = iVar4;
        *(undefined8 *)(puVar17 + 8) = 0;
        if (uVar9 != 0) {
          puVar30 = (uint *)((long)pvVar13 + uVar16 * 0x30 + 0x24);
          *puVar30 = 0;
          puVar17[10] = 1;
          piVar19 = (int *)((long)pvVar13 + uVar16 * 0x30 + 0x20);
          *piVar19 = (int)(uVar24 + 2);
          lVar29 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(uVar24 + 2) * 0x14);
          *plVar18 = lVar29;
          if (lVar29 == 0) {
            *piVar19 = 0;
            return 0x34;
          }
          *puVar30 = (uint)bVar7;
          memcpy((void *)(lVar29 + 0xc),pbVar25 + 7,uVar24 * 0xc);
          *(undefined4 *)(*plVar18 + 8) = 9;
          *(undefined4 *)*plVar18 = 0xff7fffff;
          *(undefined4 *)(*plVar18 + 4) = *(undefined4 *)(*plVar18 + 0x10);
          *(undefined4 *)(*plVar18 + (ulong)(*piVar19 - 1) * 0xc + 8) = 9;
          *(undefined4 *)(*plVar18 + (ulong)(*piVar19 - 1) * 0xc) = 0x7f7fffff;
          *(undefined4 *)(*plVar18 + (ulong)(*piVar19 - 1) * 0xc + 4) =
               *(undefined4 *)(*plVar18 + (ulong)(*piVar19 - 2) * 0xc + 4);
          FUN_0346cdac(plVar18);
        }
        puVar21 = (ushort *)(pbVar25 + 7 + uVar24 * 0xc);
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar8);
      uVar12 = 1;
    }
  }
  return uVar12;
}


