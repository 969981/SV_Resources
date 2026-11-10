/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00507590; name: FUN_00507590
 */


undefined8 FUN_00507590(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  
  puVar9 = (undefined8 *)(param_1 + 0x20);
  puVar10 = (undefined8 *)*puVar9;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = puVar9;
LAB_005075f4:
    puVar7 = (undefined8 *)*puVar9;
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      while ((ulong)puVar10[4] <= param_2) {
        if (param_2 <= (ulong)puVar10[4]) goto LAB_005075f4;
        puVar9 = puVar10 + 1;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_005075f4;
        puVar10 = (undefined8 *)*puVar9;
      }
      puVar9 = puVar10;
      if ((undefined8 *)*puVar10 == (undefined8 *)0x0) break;
      puVar10 = (undefined8 *)*puVar10;
    }
    puVar7 = (undefined8 *)*puVar10;
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    puVar7[4] = param_2;
    puVar7[5] = 0;
    puVar7[2] = puVar10;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar9 = puVar7;
    if (**(long **)(param_1 + 0x18) == 0) {
      puVar9 = puVar7;
    }
    else {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x20),puVar9);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = 0;
    *puVar9 = puVar9 + 1;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[2] = 0;
    puVar9[3] = puVar9 + 4;
  }
  plVar12 = (long *)puVar7[6];
  if (plVar12 < (long *)puVar7[7]) {
    *plVar12 = (long)puVar9;
    puVar7[6] = plVar12 + 1;
  }
  else {
    plVar8 = (long *)puVar7[5];
    lVar11 = (long)plVar12 - (long)plVar8 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)puVar7[7] - (long)plVar8;
    uVar6 = lVar3 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      plVar8 = (long *)puVar7[5];
      plVar12 = (long *)puVar7[6];
    }
    plVar4 = (long *)(lVar3 + lVar11 * 8);
    plVar5 = plVar4 + 1;
    *plVar4 = (long)puVar9;
    if (plVar12 != plVar8) {
      do {
        plVar12 = plVar12 + -1;
        lVar11 = *plVar12;
        *plVar12 = 0;
        plVar4 = plVar4 + -1;
        *plVar4 = lVar11;
      } while (plVar8 != plVar12);
      plVar8 = (long *)puVar7[5];
    }
    plVar12 = (long *)puVar7[6];
    puVar7[5] = plVar4;
    puVar7[6] = plVar5;
    puVar7[7] = lVar3 + uVar1 * 8;
    puVar2 = PTR_LAB_047cba48;
    while (plVar12 != plVar8) {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      if (lVar11 != 0) {
        FUN_005117fc(lVar11 + 0x18,*(undefined8 *)(lVar11 + 0x20));
        FUN_005118c0(lVar11,*(undefined8 *)(lVar11 + 8));
        FUN_0049e790(puVar2,lVar11);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return *(undefined8 *)(puVar7[6] + -8);
}


