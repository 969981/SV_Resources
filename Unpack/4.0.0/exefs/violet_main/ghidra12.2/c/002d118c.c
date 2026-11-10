/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d118c; name: FUN_002d118c
 */


void FUN_002d118c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_9c;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  
  local_4b8 = 0;
  uStack_4b0 = 0;
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0x8000000000000000;
  local_9c = DAT_03cb5510;
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_002d15f8:
                    /* try { // try from 002d1600 to 002d1607 has its CatchHandler @ 002d1658 */
    FUN_002d0fcc(&local_4b8,param_1 + 0x98,param_1 + 0x14);
    if (lStack_78 != 0) {
      local_70 = lStack_78;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    if (local_90 != 0) {
      lStack_88 = local_90;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    return;
  }
  lVar13 = 0;
  bVar4 = 0;
  bVar5 = 0;
LAB_002d121c:
  puVar1 = (uint *)(*(long *)(param_1 + 0x60) + lVar13 * 8);
  if ((*puVar1 & 7) == 4) {
    uVar12 = puVar1[1];
    if (!(bool)(bVar4 | (uVar12 & 3) == 0)) {
                    /* try { // try from 002d12dc to 002d12f3 has its CatchHandler @ 002d1664 */
      FUN_002d0a74(&local_4b8,10,10);
      FUN_002d0b8c(&local_4b8);
      uVar12 = puVar1[1];
      bVar4 = 1;
    }
    if (!(bool)(bVar5 | (uVar12 & 0x30) == 0)) {
      uVar12 = 0;
LAB_002d132c:
      uVar11 = uVar12 + 1;
      if ((int)uVar12 < 0xff) {
        uVar8 = (uVar12 & 0xffffffdf) - 0x41;
        bVar6 = (uVar12 - 0x30 & 0xff) < 10;
        bVar7 = (uVar12 & 0xff) == 0x5f;
        uVar9 = uVar12;
        if ((uVar8 & 0xff) < 0x1a) {
          do {
            uVar11 = uVar9 + 1;
            if (((0x19 < ((uVar11 & 0xffffffdf) - 0x41 & 0xff)) && ((uVar11 & 0xff) != 0x5f)) &&
               (9 < (uVar9 - 0x2f & 0xff))) goto LAB_002d13b8;
            uVar9 = uVar11;
          } while (uVar11 != 0xff);
          uVar11 = 0x100;
        }
        else {
          do {
            if (((uVar9 + 1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
              if (!bVar7 && !bVar6) goto joined_r0x002d13c8;
            }
            else if (((uVar9 + 1 & 0xff) == 0x5f || (uVar9 - 0x2f & 0xff) < 10) != (bVar7 || bVar6))
            goto LAB_002d13b8;
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar9 != 0xff);
          uVar11 = 0x100;
        }
        goto joined_r0x002d13c8;
      }
      uVar9 = 0xff;
      uVar10 = 0xff;
      goto LAB_002d1448;
    }
  }
  else if ((*puVar1 & 7) == 2) {
    bVar2 = (byte)puVar1[1];
    bVar3 = *(byte *)((long)puVar1 + 5);
    FUN_002d0a74(&local_4b8,bVar2,bVar3);
    if (((0x60 < bVar3) && (bVar2 < 0x7b)) && ((*(ushort *)((long)puVar1 + 6) & 1) != 0)) {
      uVar12 = (uint)bVar2;
      if (uVar12 < 0x62) {
        uVar12 = 0x61;
      }
      uVar11 = (uint)bVar3;
      if (0x79 < bVar3) {
        uVar11 = 0x7a;
      }
      if (uVar12 <= uVar11) {
                    /* try { // try from 002d1290 to 002d1297 has its CatchHandler @ 002d165c */
        FUN_002d0a74(&local_4b8,uVar12 - 0x20,uVar11 - 0x20);
      }
    }
    if ((((*puVar1 >> 3 & 1) != 0) ||
        (uVar12 = *(uint *)(*(long *)(param_1 + 0x60) + lVar13 * 8 + 8), (uVar12 & 7) != 2)) ||
       (0xf < (uVar12 ^ *puVar1))) {
                    /* try { // try from 002d1204 to 002d1257 has its CatchHandler @ 002d1668 */
      FUN_002d0b8c(&local_4b8);
    }
  }
  goto LAB_002d120c;
LAB_002d13b8:
  uVar11 = uVar9 + 1;
joined_r0x002d13c8:
  uVar10 = uVar12;
  if (0x19 < (uVar8 & 0xff)) {
LAB_002d1448:
    if (((uVar10 & 0xff) != 0x5f) && (9 < (uVar10 - 0x30 & 0xff))) goto LAB_002d1320;
  }
                    /* try { // try from 002d1314 to 002d131f has its CatchHandler @ 002d1670 */
  FUN_002d0a74(&local_4b8,uVar12,uVar9);
LAB_002d1320:
  uVar12 = uVar11;
  if (0xff < (int)uVar11) goto LAB_002d1480;
  goto LAB_002d132c;
LAB_002d1480:
                    /* try { // try from 002d1480 to 002d1487 has its CatchHandler @ 002d1660 */
  FUN_002d0b8c(&local_4b8);
  uVar12 = 0;
LAB_002d149c:
  uVar11 = uVar12 + 1;
  if ((int)uVar12 < 0xff) {
    uVar9 = (uVar12 & 0xffffffdf) - 0x41;
    bVar6 = (uVar12 - 0x30 & 0xff) < 10;
    bVar7 = (uVar12 & 0xff) == 0x5f;
    uVar8 = uVar12;
    if ((uVar9 & 0xff) < 0x1a) {
      do {
        uVar10 = uVar8 + 1;
        if (((0x19 < ((uVar10 & 0xffffffdf) - 0x41 & 0xff)) && ((uVar10 & 0xff) != 0x5f)) &&
           (9 < (uVar8 - 0x2f & 0xff))) goto LAB_002d157c;
        uVar8 = uVar10;
      } while (uVar10 != 0xff);
    }
    else {
      do {
        if (((uVar8 + 1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
          if (!bVar7 && !bVar6) goto joined_r0x002d158c;
        }
        else if (((uVar8 + 1 & 0xff) == 0x5f || (uVar8 - 0x2f & 0xff) < 10) != (bVar7 || bVar6))
        goto LAB_002d157c;
        uVar10 = uVar8 + 1;
        uVar11 = uVar11 + 1;
        uVar8 = uVar10;
      } while (uVar10 != 0xff);
    }
    uVar11 = 0x100;
    uVar8 = uVar10;
    goto joined_r0x002d158c;
  }
  uVar8 = 0xff;
  uVar9 = 0xff;
  goto LAB_002d15b4;
LAB_002d157c:
  uVar11 = uVar8 + 1;
joined_r0x002d158c:
  if ((0x19 < (uVar9 & 0xff)) && (uVar9 = uVar12, (uVar12 & 0xff) != 0x5f)) {
LAB_002d15b4:
    if (9 < (uVar9 - 0x30 & 0xff)) {
                    /* try { // try from 002d15c4 to 002d15cb has its CatchHandler @ 002d166c */
      FUN_002d0a74(&local_4b8,uVar12,uVar8);
    }
  }
  uVar12 = uVar11;
  if (0xff < (int)uVar11) goto LAB_002d15e8;
  goto LAB_002d149c;
LAB_002d15e8:
                    /* try { // try from 002d15e8 to 002d15ef has its CatchHandler @ 002d1660 */
  FUN_002d0b8c(&local_4b8);
  bVar5 = 1;
LAB_002d120c:
  lVar13 = lVar13 + 1;
  if (*(int *)(param_1 + 0x10) <= lVar13) goto LAB_002d15f8;
  goto LAB_002d121c;
}


