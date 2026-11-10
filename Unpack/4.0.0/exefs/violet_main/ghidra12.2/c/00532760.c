/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00532760; name: FUN_00532760
 */


byte FUN_00532760(uint *param_1,uint *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  
  *param_4 = 0;
  if (param_3 == 0) {
    return 0xf1;
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3);
  puVar3 = param_2;
  if (6 < param_3) {
    puVar3 = (uint *)((long)puVar1 - 7);
  }
  lVar11 = *(long *)(param_1 + 0xe);
  lVar2 = *(long *)(param_1 + 8) + (ulong)*param_1;
  puVar10 = param_2;
joined_r0x0053279c:
  do {
    uVar9 = (ulong)puVar10 & 7;
    if ((puVar10 < puVar1) && (bVar6 = uVar9 != 0, uVar9 = 0, bVar6)) {
      if (*(char *)(lVar11 + (ulong)(byte)*puVar10) == '\0') {
        puVar10 = (uint *)((long)puVar10 + 1);
        goto joined_r0x0053279c;
      }
    }
    else if (uVar9 == 0) {
      for (; puVar10 < puVar3; puVar10 = puVar10 + 2) {
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        if (((uVar4 - param_1[6] | uVar4 + param_1[7] | uVar5 - param_1[6] | uVar5 + param_1[7]) &
            0x80808080) != 0) {
          if (((*(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 1)) != '\0' ||
               *(char *)(lVar11 + ((ulong)uVar4 & 0xff)) != '\0') ||
              *(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 2)) != '\0') ||
              *(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 3)) != '\0') break;
          if (((*(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 5)) != '\0' ||
               *(char *)(lVar11 + ((ulong)uVar5 & 0xff)) != '\0') ||
              *(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 6)) != '\0') ||
              *(char *)(lVar11 + (ulong)*(byte *)((long)puVar10 + 7)) != '\0') {
            puVar10 = puVar10 + 1;
            break;
          }
        }
      }
    }
    if (puVar1 <= puVar10) {
      if (param_1[1] == 0) break;
LAB_005328f4:
      bVar8 = 0xf1;
      goto LAB_005328f8;
    }
    puVar12 = (uint *)((long)puVar10 + -1);
    lVar13 = lVar2;
    while( true ) {
      puVar7 = (uint *)((long)puVar10 + 1);
      bVar8 = *(byte *)(lVar13 + (ulong)(byte)*puVar10);
      if (0xef < bVar8) break;
      lVar13 = lVar2 + (int)((uint)bVar8 << (ulong)(param_1[4] & 0x1f));
      puVar12 = (uint *)((long)puVar12 + 1);
      puVar10 = puVar7;
      if (puVar1 == puVar7) {
        puVar10 = puVar1;
        if ((uint)((int)lVar13 - (int)lVar2) < param_1[1]) goto LAB_005328f4;
        goto LAB_00532928;
      }
    }
    if (param_1[1] <= (uint)((int)lVar13 - (int)lVar2)) {
      do {
        puVar10 = puVar12;
        if (puVar10 <= param_2) break;
        puVar12 = (uint *)((long)puVar10 + -1);
      } while ((*puVar10 & 0xc0) == 0x80);
    }
    if (bVar8 != 0xfd) {
LAB_005328f8:
      *param_4 = (int)puVar10 - (int)param_2;
      return bVar8;
    }
  } while( true );
  while ((*puVar10 & 0xc0) == 0x80) {
LAB_00532928:
    puVar10 = (uint *)((long)puVar10 - 1);
    if (puVar10 <= param_2) break;
  }
  *param_4 = (int)puVar10 - (int)param_2;
  return 0xf0;
}


