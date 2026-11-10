/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d45758; name: FUN_00d45758
 */


void FUN_00d45758(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined8 *unaff_x24;
  long local_48;
  
  puVar16 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar16 >> 4)) {
    puVar8 = puVar16;
    if (param_2 != 0) {
      uVar6 = param_2 * 0x10 - 0x10;
      puVar8 = puVar16 + param_2 * 0x10;
      uVar1 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar7 = -((ulong)uVar1 & 3);
        do {
          *puVar16 = 0;
          bVar3 = lVar7 != -1;
          lVar7 = lVar7 + 1;
          *(undefined8 *)(puVar16 + 8) = 0;
          puVar16 = puVar16 + 0x10;
        } while (bVar3);
      }
      if (0x2f < uVar6) {
        do {
          *puVar16 = 0;
          *(undefined8 *)(puVar16 + 8) = 0;
          puVar16[0x10] = 0;
          *(undefined8 *)(puVar16 + 0x18) = 0;
          puVar16[0x20] = 0;
          *(undefined8 *)(puVar16 + 0x28) = 0;
          puVar16[0x30] = 0;
          *(undefined8 *)(puVar16 + 0x38) = 0;
          puVar16 = puVar16 + 0x40;
        } while (puVar16 != puVar8);
      }
    }
    param_1[1] = (long)puVar8;
    return;
  }
  lVar7 = (long)puVar16 - *param_1 >> 4;
  uVar6 = param_2 + lVar7;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  uVar11 = lVar9 >> 3;
  if (uVar6 <= uVar11) {
    uVar6 = uVar11;
  }
  if (0x7fffffffffffffe < (ulong)(lVar9 >> 4)) {
    uVar6 = 0xfffffffffffffff;
  }
  lVar9 = tpidr_el0;
  if (uVar6 == 0) {
    lVar5 = 0;
    goto LAB_00d45800;
  }
  if (uVar6 >> 0x3c == 0) {
    local_48 = uVar6 << 4;
    plVar10 = *(long **)(lVar9 + 0x30);
    if (plVar10 == (long *)0x0) {
      unaff_x24 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_00d45adc;
      goto LAB_00d459f8;
    }
  }
  else {
    FUN_0219c980();
LAB_00d45adc:
    iVar4 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar4 != 0) {
      unaff_x24[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00d459f8:
    plVar10 = (long *)unaff_x24[0x86];
    *(long **)(lVar9 + 0x30) = plVar10;
  }
  lVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,local_48,8);
LAB_00d45800:
  puVar16 = (undefined1 *)(lVar5 + lVar7 * 0x10);
  puVar8 = puVar16 + param_2 * 0x10;
  *puVar16 = 0;
  *(undefined8 *)(puVar16 + 8) = 0;
  if (param_2 != 1) {
    puVar16[0x10] = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    if (param_2 != 2) {
      puVar16[0x20] = 0;
      *(undefined8 *)(puVar16 + 0x28) = 0;
      if (param_2 != 3) {
        puVar12 = puVar16 + 0x30;
        do {
          *puVar12 = 0;
          *(undefined8 *)(puVar12 + 8) = 0;
          puVar12 = puVar12 + 0x10;
        } while (puVar8 != puVar12);
      }
    }
  }
  puVar12 = (undefined1 *)*param_1;
  puVar2 = (undefined1 *)param_1[1];
  lVar5 = lVar5 + uVar6 * 0x10;
  if (puVar2 == puVar12) {
    *param_1 = (long)puVar16;
    param_1[1] = (long)puVar8;
    param_1[2] = lVar5;
  }
  else {
    puVar13 = puVar16 + -0x10;
    *puVar13 = 0;
    *(undefined8 *)(puVar16 + -8) = 0;
    puVar14 = puVar2 + -0x10;
    *puVar13 = *puVar14;
    *puVar14 = 0;
    uVar15 = *(undefined8 *)(puVar16 + -8);
    *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar2 + -8);
    *(undefined8 *)(puVar2 + -8) = uVar15;
    if (puVar14 != puVar12) {
      puVar13 = (undefined1 *)0x0;
      do {
        puVar14 = puVar13;
        puVar16[(long)(puVar14 + -0x20)] = 0;
        *(undefined8 *)(puVar16 + (long)(puVar14 + -0x18)) = 0;
        puVar16[(long)(puVar14 + -0x20)] = puVar2[(long)(puVar14 + -0x20)];
        puVar2[(long)(puVar14 + -0x20)] = 0;
        uVar15 = *(undefined8 *)(puVar16 + (long)(puVar14 + -0x18));
        *(undefined8 *)(puVar16 + (long)(puVar14 + -0x18)) =
             *(undefined8 *)(puVar2 + (long)(puVar14 + -0x18));
        *(undefined8 *)(puVar2 + (long)(puVar14 + -0x18)) = uVar15;
        puVar13 = puVar14 + -0x10;
      } while (puVar12 + (0x10 - (long)puVar2) != puVar14 + -0x10);
      puVar13 = puVar16 + (long)(puVar14 + -0x20);
    }
    puVar12 = (undefined1 *)*param_1;
    puVar16 = (undefined1 *)param_1[1];
    *param_1 = (long)puVar13;
    param_1[1] = (long)puVar8;
    param_1[2] = lVar5;
    if (puVar16 != puVar12) {
      puVar16 = puVar16 + -0x10;
      FUN_00d44bc8(puVar16);
      while (puVar16 != puVar12) {
        puVar16 = puVar16 + -0x10;
        FUN_00d44bc8(puVar16);
      }
    }
  }
  if (puVar12 == (undefined1 *)0x0) {
    return;
  }
  plVar10 = *(long **)(lVar9 + 0x30);
  if (plVar10 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar10 = DAT_04859430;
    *(long **)(lVar9 + 0x30) = DAT_04859430;
  }
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d458e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,0,8);
    return;
  }
  FUN_00c48fe8(plVar10,puVar12,0,8);
  return;
}


