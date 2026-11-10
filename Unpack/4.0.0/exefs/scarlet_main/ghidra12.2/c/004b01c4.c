/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b01c4; name: FUN_004b01c4
 */


long FUN_004b01c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (lVar3 != 0) {
    FUN_004e443c(lVar3,0);
  }
  plVar11 = *(long **)(param_1 + 0xf0);
  if (plVar11 < *(long **)(param_1 + 0xf8)) {
    *plVar11 = lVar3;
    *(long **)(param_1 + 0xf0) = plVar11 + 1;
  }
  else {
    plVar8 = *(long **)(param_1 + 0xe8);
    lVar10 = (long)plVar11 - (long)plVar8 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(long **)(param_1 + 0xf8) - (long)plVar8;
    uVar7 = lVar4 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      plVar8 = *(long **)(param_1 + 0xe8);
      plVar11 = *(long **)(param_1 + 0xf0);
    }
    plVar5 = (long *)(lVar4 + lVar10 * 8);
    plVar6 = plVar5 + 1;
    *plVar5 = lVar3;
    if (plVar11 != plVar8) {
      do {
        plVar11 = plVar11 + -1;
        lVar10 = *plVar11;
        *plVar11 = 0;
        plVar5 = plVar5 + -1;
        *plVar5 = lVar10;
      } while (plVar8 != plVar11);
      plVar8 = *(long **)(param_1 + 0xe8);
    }
    plVar11 = *(long **)(param_1 + 0xf0);
    *(long **)(param_1 + 0xe8) = plVar5;
    *(long **)(param_1 + 0xf0) = plVar6;
    *(ulong *)(param_1 + 0xf8) = lVar4 + uVar1 * 8;
    puVar2 = PTR_LAB_047cba48;
    while (plVar11 != plVar8) {
      plVar11 = plVar11 + -1;
      puVar9 = (undefined8 *)*plVar11;
      *plVar11 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9);
        FUN_0049e790(puVar2,puVar9);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return lVar3;
}


