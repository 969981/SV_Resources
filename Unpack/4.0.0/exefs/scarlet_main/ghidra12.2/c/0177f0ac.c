/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177f0ac; name: FUN_0177f0ac
 */


void FUN_0177f0ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *__s;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  size_t __n;
  int *piVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined1 *local_60;
  char *pcStack_58;
  size_t local_50;
  long *local_48;
  
  piVar6 = (int *)*param_2;
  puVar10 = (ushort *)((long)piVar6 - (long)*piVar6);
  if ((*puVar10 < 0xd) || ((ulong)puVar10[6] == 0)) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((long)piVar6 + (ulong)puVar10[6]);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
  }
  uVar12 = (ulong)*puVar7;
  puVar20 = &DAT_cbf29ce484222645;
  if (*puVar7 != 0) {
    uVar14 = 0;
    do {
      piVar2 = (int *)((long)(puVar7 + uVar14 + 1) + (ulong)puVar7[uVar14 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar13 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar13 = 0;
        if (uVar18 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar18);
          lVar13 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      bVar5 = *(byte *)(lVar13 + 4);
      if (bVar5 != 0) {
        puVar19 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)(lVar13 + 5);
        do {
          puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar5 != 0);
        if (puVar19 == (undefined1 *)0xa5d87c9ff14c683c) {
          uVar12 = uVar14 & 0xffffffff;
          break;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
  }
  puVar7 = (uint *)((long)((long)piVar6 + (ulong)puVar10[6]) +
                   uVar12 * 4 + (ulong)*(uint *)((long)piVar6 + (ulong)puVar10[6]) + 4);
  piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (8 - (long)*piVar6)));
  piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar12 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar7 = (uint *)((long)piVar6 + uVar12);
    lVar13 = (long)puVar7 + (ulong)*puVar7;
  }
  __s = (char *)(lVar13 + 4);
  local_50 = strlen(__s);
  bVar5 = *(byte *)(lVar13 + 4);
  if (bVar5 != 0) {
    pbVar8 = (byte *)(lVar13 + 5);
    do {
      puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar5 != 0);
  }
  local_48 = (long *)0x0;
  puVar19 = *(undefined1 **)(param_1 + 0x530);
  local_60 = puVar20;
  pcStack_58 = __s;
  if (puVar19 != (undefined1 *)0x0) {
    uVar12 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar19 + -1) & (ulong)puVar20);
    }
    else {
      puVar11 = puVar20;
      if (puVar19 <= puVar20) {
        uVar14 = 0;
        if (puVar19 != (undefined1 *)0x0) {
          uVar14 = (ulong)puVar20 / (ulong)puVar19;
        }
        puVar11 = puVar20 + -(uVar14 * (long)puVar19);
      }
    }
    lVar13 = *(long *)(param_1 + 0x528);
    plVar16 = *(long **)(lVar13 + (long)puVar11 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar16[1] == puVar20) {
            if ((undefined1 *)plVar16[2] == puVar20) goto LAB_0177f31c;
          }
          else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar19 + -1)) != puVar11) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar16[1];
          if (puVar17 == puVar20) {
            if ((undefined1 *)plVar16[2] == puVar20) goto LAB_0177f31c;
          }
          else {
            if (puVar19 <= puVar17) {
              uVar14 = 0;
              if (puVar19 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar17 / (ulong)puVar19;
              }
              puVar17 = puVar17 + -(uVar14 * (long)puVar19);
            }
            if (puVar17 != puVar11) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_0177f3d8;
LAB_0177f31c:
  if (uVar12 < 2) {
    plVar16 = *(long **)(lVar13 + ((ulong)(puVar19 + -1) & (ulong)puVar20) * 8);
    do {
      do {
        plVar16 = (long *)*plVar16;
      } while ((undefined1 *)plVar16[1] != puVar20);
    } while ((undefined1 *)plVar16[2] != puVar20);
  }
  else {
    puVar11 = puVar20;
    if (puVar19 <= puVar20) {
      uVar12 = 0;
      if (puVar19 != (undefined1 *)0x0) {
        uVar12 = (ulong)puVar20 / (ulong)puVar19;
      }
      puVar11 = puVar20 + -(uVar12 * (long)puVar19);
    }
    plVar16 = *(long **)(lVar13 + (long)puVar11 * 8);
    do {
      do {
        plVar16 = (long *)*plVar16;
      } while ((undefined1 *)plVar16[1] != puVar20);
    } while ((undefined1 *)plVar16[2] != puVar20);
  }
  puVar9 = *(undefined8 **)((long)plVar16 + 0x18);
  puVar4 = *(undefined8 **)((long)plVar16 + 0x20);
  puVar21 = puVar9;
  if ((puVar9 != puVar4) && ((undefined8 *)*puVar9 != param_2)) {
    puVar15 = puVar9;
    do {
      if (puVar4 + -1 == puVar15) {
        puVar21 = puVar4;
        break;
      }
      puVar21 = puVar15 + 1;
      puVar1 = puVar15 + 1;
      puVar15 = puVar21;
    } while ((undefined8 *)*puVar1 != param_2);
  }
  if (puVar4 != puVar21) {
    __n = (long)puVar4 - (long)(puVar21 + 1);
    if (__n != 0) {
      memmove(puVar21,puVar21 + 1,__n);
      puVar9 = *(undefined8 **)((long)plVar16 + 0x18);
    }
    *(undefined8 **)((long)plVar16 + 0x20) = (undefined8 *)((long)puVar21 + __n);
    if (puVar9 == (undefined8 *)((long)puVar21 + __n)) {
      FUN_0177f844(param_1,param_2);
      FUN_0177f478((long *)(param_1 + 0x528),&local_60);
    }
  }
LAB_0177f3d8:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


