/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d27da8; name: FUN_00d27da8
 */


void FUN_00d27da8(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  undefined1 *puVar21;
  int *local_68;
  undefined1 *local_60;
  char *local_58;
  size_t local_50;
  long *local_48;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  param_1[1] = param_1[1] + 1;
  puVar13 = (ushort *)((long)param_2 - (long)*param_2);
  lVar12 = -(long)*param_2;
  uVar8 = *puVar13;
  if (uVar8 < 0xd) {
LAB_00d27f28:
    if (10 < uVar8) goto LAB_00d27f30;
LAB_00d27f3c:
    param_1[6] = param_1[6] + 1;
  }
  else {
    uVar16 = (ulong)puVar13[6];
    if (uVar16 != 0) {
      uVar17 = (ulong)*(uint *)((long)param_2 + uVar16);
      puVar20 = (uint *)((long)((long)param_2 + uVar16) + uVar17);
      puVar10 = puVar20 + 1;
      uVar14 = (ulong)*puVar20;
      if (uVar14 != 0) {
        puVar20 = puVar10 + uVar14;
        lVar15 = param_1[2];
        lVar12 = (long)param_2 + uVar16 + uVar17 + 0x10;
        do {
          uVar5 = *puVar10;
          lVar15 = lVar15 + 1;
          param_1[2] = lVar15;
          piVar1 = (int *)((long)puVar10 + (ulong)uVar5);
          if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar16 != 0)) {
            uVar14 = (ulong)*(uint *)((long)piVar1 + uVar16);
            puVar2 = (uint *)((long)((long)piVar1 + uVar16) + uVar14);
            param_1[5] = param_1[5] + (ulong)(*puVar2 * 2 - 1);
            puVar18 = puVar2 + 1;
            uVar6 = *puVar2;
            uVar17 = (ulong)uVar6;
            if (uVar17 != 0) {
              piVar1 = (int *)((long)puVar18 + (ulong)*puVar18);
              if (((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
                  (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 != 0)) &&
                 (*(char *)((long)piVar1 + uVar9) != '\0')) {
                param_1[4] = param_1[4] + 1;
              }
              if (uVar6 != 1) {
                piVar1 = (int *)((long)(puVar2 + 2) + (ulong)puVar2[2]);
                if (((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
                    (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 != 0)) &&
                   (*(char *)((long)piVar1 + uVar9) != '\0')) {
                  param_1[4] = param_1[4] + 1;
                }
                if (puVar2 + 3 != puVar18 + uVar17) {
                  lVar19 = 0;
                  lVar3 = lVar12 + uVar5 + uVar14 + uVar16;
                  do {
                    uVar16 = (ulong)*(uint *)(lVar3 + lVar19);
                    lVar4 = lVar19 + (uVar16 - (long)*(int *)(lVar3 + uVar16 + lVar19));
                    if (((8 < *(ushort *)(lVar3 + lVar4)) &&
                        (uVar14 = (ulong)*(ushort *)(lVar3 + lVar4 + 8), uVar14 != 0)) &&
                       (*(char *)(lVar3 + uVar16 + uVar14 + lVar19) != '\0')) {
                      param_1[4] = param_1[4] + 1;
                    }
                    lVar19 = lVar19 + 4;
                  } while (uVar17 * 4 + -8 != lVar19);
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
          lVar12 = lVar12 + 4;
        } while (puVar10 != puVar20);
        lVar12 = -(long)*param_2;
        uVar8 = *(ushort *)((long)param_2 - (long)*param_2);
        goto LAB_00d27f28;
      }
    }
LAB_00d27f30:
    uVar16 = (ulong)*(ushort *)((long)param_2 + lVar12 + 10);
    if (uVar16 == 0) goto LAB_00d27f3c;
    puVar10 = (uint *)((long)param_2 + uVar16);
    piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar16 != 0)) {
      puVar10 = (uint *)((long)piVar1 + uVar16);
      puVar21 = &DAT_cbf29ce484222645;
      local_68 = (int *)((long)puVar10 + (ulong)*puVar10);
      local_60 = &DAT_cbf29ce484222645;
      local_48 = (long *)0x0;
      local_58 = "";
      local_50 = 0;
      if ((*(ushort *)((long)local_68 - (long)*local_68) < 5) ||
         (uVar16 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2], uVar16 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar10 = (uint *)((long)local_68 + uVar16);
        lVar12 = (long)puVar10 + (ulong)*puVar10;
      }
      local_50 = strlen((char *)(lVar12 + 4));
      bVar7 = *(byte *)(lVar12 + 4);
      if (bVar7 != 0) {
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar7 != 0);
      }
      local_48 = (long *)0x0;
      local_60 = puVar21;
      local_58 = (char *)(lVar12 + 4);
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_1 + 6,&local_68);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  puVar13 = (ushort *)((long)param_2 - (long)*param_2);
  lVar12 = -(long)*param_2;
  uVar8 = *puVar13;
  if (0x10 < uVar8) {
    uVar16 = (ulong)puVar13[8];
    if (uVar16 == 0) goto LAB_00d27f98;
    puVar10 = (uint *)((long)param_2 + uVar16);
    param_1[3] = param_1[3] + (ulong)*(uint *)((long)puVar10 + (ulong)*puVar10);
    lVar12 = -(long)*param_2;
    uVar8 = *(ushort *)((long)param_2 - (long)*param_2);
  }
  if (uVar8 < 0xf) {
    return;
  }
LAB_00d27f98:
  uVar16 = (ulong)*(ushort *)((long)param_2 + lVar12 + 0xe);
  if (uVar16 != 0) {
    puVar10 = (uint *)((long)param_2 + uVar16);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    puVar20 = puVar10 + 1;
    uVar5 = *puVar10;
    uVar16 = (ulong)uVar5;
    if (uVar16 != 0) {
      FUN_00d27da8(param_1,(long)puVar20 + (ulong)*puVar20);
      if (uVar5 != 1) {
        FUN_00d27da8(param_1,(long)(puVar10 + 2) + (ulong)puVar10[2]);
        if (puVar10 + 3 != puVar20 + uVar16) {
          lVar12 = uVar16 * 4 + -8;
          puVar10 = puVar10 + 3;
          do {
            FUN_00d27da8(param_1,(long)puVar10 + (ulong)*puVar10);
            lVar12 = lVar12 + -4;
            puVar10 = puVar10 + 1;
          } while (lVar12 != 0);
        }
      }
    }
  }
  return;
}


