/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0dc50; name: FUN_00c0dc50
 */


byte FUN_00c0dc50(uint *param_1,uint *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  
  *param_4 = 0;
  if (param_3 == 0) {
    return 0xf1;
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3);
  lVar13 = *(long *)(param_1 + 8) + (ulong)*param_1;
  lVar10 = *(long *)(param_1 + 0xe);
  puVar8 = param_2;
joined_r0x00c0dc84:
  do {
    uVar7 = (ulong)puVar8 & 7;
    if ((puVar8 < puVar1) && (bVar4 = uVar7 != 0, uVar7 = 0, bVar4)) {
      if (*(char *)(lVar10 + (ulong)(byte)*puVar8) == '\0') {
        puVar8 = (uint *)((long)puVar8 + 1);
        goto joined_r0x00c0dc84;
      }
    }
    else if (uVar7 == 0) {
      for (; puVar8 < (uint *)((long)puVar1 - 7U); puVar8 = puVar8 + 2) {
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        if (((uVar2 - param_1[6] | uVar2 + param_1[7] | uVar3 - param_1[6] | uVar3 + param_1[7]) &
            0x80808080) != 0) {
          if (((*(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 1)) != '\0' ||
               *(char *)(lVar10 + ((ulong)uVar2 & 0xff)) != '\0') ||
              *(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 2)) != '\0') ||
              *(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 3)) != '\0') break;
          if (((*(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 5)) != '\0' ||
               *(char *)(lVar10 + ((ulong)uVar3 & 0xff)) != '\0') ||
              *(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 6)) != '\0') ||
              *(char *)(lVar10 + (ulong)*(byte *)((long)puVar8 + 7)) != '\0') {
            puVar8 = puVar8 + 1;
            break;
          }
        }
      }
    }
    iVar9 = (int)lVar13;
    if (puVar1 <= puVar8) {
LAB_00c0ddcc:
      if (param_1[1] <= (uint)((int)lVar13 - iVar9)) goto LAB_00c0ddf0;
      bVar6 = 0xf1;
      break;
    }
    puVar11 = (uint *)((long)puVar8 + -1);
    lVar12 = lVar13;
    while( true ) {
      puVar5 = (uint *)((long)puVar8 + 1);
      bVar6 = *(byte *)(lVar12 + (ulong)(byte)*puVar8);
      if (0xef < bVar6) break;
      lVar12 = lVar13 + (int)((uint)bVar6 << (ulong)(param_1[4] & 0x1f));
      puVar11 = (uint *)((long)puVar11 + 1);
      puVar8 = puVar5;
      if (puVar1 == puVar5) {
        puVar8 = puVar1;
        lVar13 = lVar12;
        goto LAB_00c0ddcc;
      }
    }
    if (param_1[1] <= (uint)((int)lVar12 - iVar9)) {
      do {
        puVar8 = puVar11;
        if (puVar8 <= param_2) break;
        puVar11 = (uint *)((long)puVar8 + -1);
      } while ((*puVar8 & 0xc0) == 0x80);
    }
  } while (bVar6 == 0xfd);
  goto LAB_00c0de14;
  while ((*puVar8 & 0xc0) == 0x80) {
LAB_00c0ddf0:
    puVar8 = (uint *)((long)puVar8 - 1);
    if (puVar8 <= param_2) break;
  }
  bVar6 = 0xf0;
LAB_00c0de14:
  *param_4 = (int)puVar8 - (int)param_2;
  return bVar6;
}


