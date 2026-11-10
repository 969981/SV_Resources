/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03267fa8; name: FUN_03267fa8
 */


void FUN_03267fa8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  undefined8 *puVar13;
  void *__src;
  int iVar14;
  void *__src_00;
  ulong uVar15;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_046c22d8;
  puVar13 = param_1 + 3;
  *puVar13 = 0;
  param_1[4] = 0x8000000000000000;
  plVar12 = param_1 + 5;
  *plVar12 = 0;
  param_1[6] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  iVar5 = *(int *)(param_2 + 0x20);
  __src = *(void **)(param_2 + 0x18);
  if (iVar5 < 1) {
    if (iVar5 == 0) {
      uVar2 = 0;
      iVar14 = 0;
      goto LAB_032680cc;
    }
    __dest = (void *)0x0;
  }
  else {
    FUN_032681b8(puVar13,PTR_PTR_047d1a50,(long)iVar5);
    __dest = (void *)*puVar13;
  }
  uVar15 = (long)iVar5 * 0x28 - 0x28;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  if ((SUB164(auVar7 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
    memcpy(__dest,__src,0x28);
    __dest = (void *)((long)__dest + 0x28);
    __src_00 = (void *)((long)__src + 0x28);
  }
  else {
    __src_00 = __src;
  }
  if (0x27 < uVar15) {
    do {
      memcpy(__dest,__src_00,0x28);
      memcpy((void *)((long)__dest + 0x28),(void *)((long)__src_00 + 0x28),0x28);
      __src_00 = (void *)((long)__src_00 + 0x50);
      __dest = (void *)((long)__dest + 0x50);
    } while (__src_00 != (void *)((long)__src + (long)iVar5 * 0x28));
  }
  iVar14 = *(int *)(param_1 + 6);
  uVar2 = *(uint *)((long)param_1 + 0x34) & 0x7fffffff;
LAB_032680cc:
  *(int *)(param_1 + 4) = iVar5;
  iVar6 = *(int *)(param_2 + 0x30);
  puVar13 = *(undefined8 **)(param_2 + 0x28);
  iVar5 = iVar6 + iVar14;
  if ((int)uVar2 < iVar5) {
    FUN_02ebb550(plVar12,PTR_PTR_047d1a50,(long)iVar5);
  }
  if (iVar6 != 0) {
    puVar8 = (undefined8 *)(*plVar12 + (long)iVar14 * 0x20);
    lVar11 = (long)iVar6 * 0x20 + -0x20;
    puVar10 = puVar13;
    if (((uint)lVar11 >> 5 & 1) == 0) {
      uVar9 = puVar13[3];
      puVar8[1] = puVar13[1];
      puVar8[3] = uVar9;
      uVar9 = *puVar13;
      puVar8[2] = puVar13[2];
      *puVar8 = uVar9;
      puVar10 = puVar13 + 4;
      puVar8 = puVar8 + 4;
    }
    if (lVar11 != 0) {
      do {
        uVar9 = puVar10[3];
        puVar8[1] = puVar10[1];
        puVar8[3] = uVar9;
        uVar9 = *puVar10;
        puVar8[2] = puVar10[2];
        *puVar8 = uVar9;
        uVar9 = puVar10[4];
        uVar3 = puVar10[5];
        puVar1 = puVar10 + 6;
        uVar4 = puVar10[7];
        puVar10 = puVar10 + 8;
        puVar8[6] = *puVar1;
        puVar8[7] = uVar4;
        puVar8[4] = uVar9;
        puVar8[5] = uVar3;
        puVar8 = puVar8 + 8;
      } while (puVar10 != puVar13 + (long)iVar6 * 4);
    }
  }
  *(int *)(param_1 + 6) = iVar5;
  return;
}


