/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef5018; name: FUN_02ef5018
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ef5018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar17 = *(long *)(param_1 + 0x50);
  lVar18 = *(long *)(lVar17 + 0x18);
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  if ((0 < *(int *)(lVar18 + 0x20)) && (FUN_02ef5318(&local_b0), 0 < *(int *)(lVar18 + 0x20))) {
    iVar5 = (int)local_a8;
    lVar20 = 0;
    puVar1 = PTR_DAT_047e3378 + 0x10;
    do {
      iVar13 = iVar5 + (int)lVar20;
      iVar21 = iVar13 + 1;
      lVar16 = *(long *)(*(long *)(*(long *)(lVar18 + 0x18) + lVar20 * 8) + 0xa0);
      if ((int)(local_a8._4_4_ & 0x7fffffff) <= iVar13) {
        FUN_02ef5654(&local_b0,(long)iVar21);
        iVar13 = (int)local_a8;
      }
      plVar12 = (long *)(local_b0 + (long)iVar13 * 0x38);
      local_a8 = CONCAT44(local_a8._4_4_,iVar21);
      plVar12[6] = -0x8000000000000000;
      *plVar12 = (long)puVar1;
      plVar12[1] = 0xffffffff;
      plVar12[4] = -0x8000000000000000;
      plVar12[5] = 0;
      plVar12[2] = 1;
      plVar12[3] = 0;
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x200 + 0x110))
                (lVar16,param_2,plVar12,0);
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(lVar18 + 0x20));
  }
  lVar18 = local_b0;
  uVar11 = _UNK_03cabe68;
  uVar10 = _DAT_03cabe60;
  uVar9 = DAT_03cab628;
  uVar8 = DAT_03cab620;
  uVar7 = _UNK_03caa5b8;
  uVar6 = _DAT_03caa5b0;
  uVar2 = *(uint *)(lVar17 + 0x15d4);
  if (uVar2 != 0) {
    uVar19 = 0;
    do {
      if (*(char *)(lVar17 + 0x1688) == '\0') {
        uVar14 = uVar19 & 0xffffffff;
      }
      else {
        uVar14 = (ulong)*(uint *)(*(long *)(lVar17 + 0x16a8) + uVar19 * 4);
      }
      fVar31 = (float)uVar7;
      fVar30 = (float)uVar11;
      puVar3 = (undefined8 *)
               (*(long *)(lVar17 + 0x108) + (-(uVar14 >> 0x1f) & 0xffffffe000000000 | uVar14 << 5));
      uStack_70 = *puVar3;
      fVar29 = (float)uVar9;
      local_a0 = uVar8;
      uStack_90 = uVar10;
      local_80 = uVar6;
      if (*(char *)(lVar17 + 0x15dc) != '\0') {
        puVar4 = (undefined8 *)(*(long *)(lVar17 + 0x118) + (long)(int)uVar14 * 0x10);
        uVar25 = puVar4[1];
        uVar23 = *puVar4;
        fVar22 = (float)uVar23;
        fVar24 = (float)((ulong)uVar23 >> 0x20);
        fVar27 = fVar24 + fVar24;
        fVar29 = (float)uVar25;
        fVar28 = fVar29 + fVar29;
        fVar31 = (fVar22 + fVar22) * fVar22;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        fVar32 = (fVar22 + fVar22) * fVar26;
        fVar29 = 1.0 - fVar29 * fVar28;
        uStack_90 = CONCAT44(fVar29 - fVar31,fVar27 * fVar22 - fVar28 * fVar26);
        fVar30 = fVar28 * fVar24 + fVar32;
        local_a0 = CONCAT44(fVar27 * fVar22 + fVar28 * fVar26,fVar29 - fVar27 * fVar24);
        fVar29 = fVar28 * fVar22 - fVar27 * fVar26;
        fVar31 = (1.0 - fVar31) - fVar27 * fVar24;
        local_80 = CONCAT44(fVar28 * fVar24 - fVar32,fVar28 * fVar22 + fVar27 * fVar26);
      }
      piVar15 = (int *)(lVar17 + 0x20);
      if (*(int *)(lVar17 + 0x30) != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0x28) +
                         (long)*(int *)(lVar17 + 0x34) * (long)(int)uVar14);
      }
      uStack_98 = (ulong)(uint)fVar29;
      uStack_88 = (ulong)(uint)fVar30;
      uStack_78 = (ulong)(uint)fVar31;
      uStack_68 = CONCAT44(0x3f800000,(int)puVar3[1]);
      FUN_03241cc4(param_3,lVar18 + (long)*piVar15 * 0x38,&local_a0);
      uVar19 = uVar19 + 1;
    } while (uVar2 != uVar19);
  }
  if ((int)local_a8 != 0) {
    lVar17 = (long)(int)local_a8 * 0x38;
    do {
      (**(code **)(*(long *)(lVar18 + -0x38 + lVar17) + 8))();
      lVar17 = lVar17 + -0x38;
    } while (lVar17 != 0);
  }
  uVar14 = local_a8;
  uVar19 = local_a8 >> 0x20;
  local_a8 = uVar19 << 0x20;
  if ((lVar18 != 0) && (-1 < (long)uVar14)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,lVar18,uVar19 * 0x38);
  }
  return 0;
}


