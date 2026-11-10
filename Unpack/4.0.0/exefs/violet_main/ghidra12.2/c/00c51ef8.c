/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c51ef8; name: FUN_00c51ef8
 */


void FUN_00c51ef8(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  float fVar19;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    uVar10 = *(undefined4 *)(param_1 + 200);
    uVar11 = *(undefined4 *)(param_1 + 0xcc);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    puVar13 = (undefined8 *)PTR_DAT_047e0c60;
    goto LAB_00c51f8c;
  }
  *(undefined4 *)(param_2 + 0x378) = *(undefined4 *)(param_1 + 100);
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 < 0xc) {
    if (uVar1 != 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0xc0eU) != 0) {
        fVar19 = 1.0;
        if (0.0 <= *(float *)(param_1 + 0x6c)) {
          fVar19 = *(float *)(param_1 + 0x6c);
        }
        (**(code **)PTR_DAT_047e0c30)(fVar19,*(undefined8 *)(param_2 + 0x28));
      }
      goto LAB_00c51f50;
    }
    fVar19 = *(float *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    pcVar14 = *(code **)PTR_DAT_047e0c48;
    if (fVar19 < 0.0) {
      fVar19 = 1.0;
    }
LAB_00c5205c:
    (*pcVar14)(fVar19,uVar7);
  }
  else {
LAB_00c51f50:
    fVar19 = *(float *)(param_1 + 0x6c);
    if (0.0 <= fVar19) {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      pcVar14 = *(code **)PTR_DAT_047e0c30;
      goto LAB_00c5205c;
    }
  }
  lVar12 = *(long *)(param_1 + 0x58);
  if (lVar12 == 0) {
    lVar12 = *(long *)(param_1 + 0x88);
    if (lVar12 != 0) {
      lVar16 = *(long *)(param_1 + 0x98);
      uVar7 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x90);
      if (lVar16 == 0) {
        FUN_0270b0c4(param_2,uVar7,uVar15);
        return;
      }
      uVar9 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 0x70) + 0x110),
                           *(long *)(param_1 + 0x98) + 0x30);
      FUN_00c5a258(param_2,uVar7,uVar15,uVar9,*(undefined8 *)(param_1 + 0xa0),
                   *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
      return;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x70);
    uVar10 = *(undefined4 *)(param_1 + 0x78);
    if (1 < *(uint *)(param_1 + 0x74)) {
                    /* WARNING: Could not recover jumptable at 0x00c52194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_047e0c50)
                (*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x378),uVar10,uVar11,
                 *(undefined4 *)(param_1 + 0x80));
      return;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined4 *)(param_2 + 0x378);
    puVar13 = (undefined8 *)PTR_DAT_047e0c20;
LAB_00c51f8c:
                    /* WARNING: Could not recover jumptable at 0x00c51fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar13)(uVar7,uVar2,uVar10,uVar11);
    return;
  }
  pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x60);
  cVar3 = *pcVar8;
  if ((*(char *)(param_2 + 0x2e0) == '\0') || (cVar3 == '\0')) {
    if (cVar3 == '\0' || cVar3 == '\0' && *(char *)(param_2 + 0x2e0) == '\0') goto LAB_00c51fe4;
    lVar12 = *(long *)(pcVar8 + 8);
  }
  else {
    lVar12 = *(long *)(pcVar8 + 8);
    if (*(long *)(param_2 + 0x2e8) == lVar12) goto LAB_00c51fe4;
  }
  lVar16 = 0;
  if (cVar3 != '\0') {
    lVar16 = lVar12;
  }
  uVar7 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar16 + 0x20));
  *(undefined8 *)(param_2 + 0x2f8) = uVar7;
  uVar7 = *(undefined8 *)(pcVar8 + 8);
  *(undefined8 *)(param_2 + 0x2e0) = *(undefined8 *)pcVar8;
  *(undefined8 *)(param_2 + 0x2e8) = uVar7;
  if (uVar1 == 0x10) {
    uVar11 = 1;
LAB_00c52400:
    *(undefined4 *)(param_2 + 0x2f0) = uVar11;
  }
  else {
    if (uVar1 == 0x20) {
      uVar11 = 2;
      goto LAB_00c52400;
    }
    if (uVar1 == 8) {
      uVar11 = 0;
      goto LAB_00c52400;
    }
  }
  *(uint *)(param_2 + 0x2d8) = uVar1 >> 3;
LAB_00c51fe4:
  lVar12 = *(long *)(param_1 + 0x88);
  if (lVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0x98);
    pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
    lVar12 = *(long *)(param_1 + 0x90);
    if (lVar16 != 0) {
      uVar7 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 0x70) + 0x110),
                           *(long *)(param_1 + 0x98) + 0x30);
      FUN_00c5a3d8(param_2,pcVar8,lVar12,uVar7,*(undefined8 *)(param_1 + 0xa0),
                   *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
      return;
    }
    lVar16 = 0;
    if (*pcVar8 != '\0') {
      lVar16 = *(long *)(pcVar8 + 8);
    }
    uVar15 = *(undefined8 *)(param_2 + 0x28);
    uVar11 = *(undefined4 *)(param_2 + 0x378);
    uVar2 = *(undefined4 *)(param_2 + 0x2f0);
    uVar7 = *(undefined8 *)(param_2 + 0x2f8);
    lVar16 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar16 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00c5226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047e0c58)(uVar15,uVar11,uVar2,uVar7,lVar16 + lVar12);
    return;
  }
  lVar12 = *(long *)(param_1 + 0xb8);
  if (lVar12 != 0) {
    puVar18 = *(uint **)(param_1 + 0xb0);
    uVar11 = *(undefined4 *)(param_1 + 0x70);
    uVar1 = *(uint *)(param_1 + 0x74);
    uVar17 = (ulong)uVar1;
    pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110),lVar12 + 0x30);
    if (((puVar18 != (uint *)0x0) && (*(long *)(pcVar8 + 8) != 0)) && (*pcVar8 != '\0')) {
      uVar2 = *(undefined4 *)(param_1 + 0xc0);
      lVar12 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(*(long *)(pcVar8 + 8) + 0x20));
      puVar6 = PTR_DAT_047e0c40;
      puVar5 = PTR_DAT_047e0c38;
      puVar4 = PTR_DAT_047e0bf0;
      if (uVar1 != 0) {
        do {
          uVar1 = *puVar18;
          (**(code **)puVar5)(*(undefined8 *)(param_2 + 0x28),uVar2);
          (**(code **)puVar6)(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x378),
                              *(undefined4 *)(param_2 + 0x2f0),uVar11,
                              *(undefined8 *)(param_2 + 0x2f8),0,(ulong)uVar1,1);
          (**(code **)puVar4)(*(undefined8 *)(param_2 + 0x28),uVar2,lVar12 + (ulong)uVar1 * 0x10);
          uVar17 = uVar17 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    return;
  }
  if (1 < *(uint *)(param_1 + 0x74)) {
                    /* WARNING: Could not recover jumptable at 0x00c521dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047e0c40)
              (*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x378),
               *(undefined4 *)(param_2 + 0x2f0),*(undefined4 *)(param_1 + 0x70),
               *(long *)(param_2 + 0x2f8) +
               (ulong)(uint)(*(int *)(param_2 + 0x2d8) * *(int *)(param_1 + 0x7c)),
               *(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    return;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c52048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047e0c28)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c52384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e0c68)
            (*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x378),
             *(undefined4 *)(param_2 + 0x2f0),*(undefined4 *)(param_1 + 0x70),
             *(long *)(param_2 + 0x2f8) +
             (ulong)(uint)(*(int *)(param_2 + 0x2d8) * *(int *)(param_1 + 0x7c)));
  return;
}


