/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a3f0c; name: FUN_004a3f0c
 */


undefined8 * FUN_004a3f0c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
  }
  plVar9 = *(long **)(param_1 + 0x108);
  if (plVar9 < *(long **)(param_1 + 0x110)) {
    *plVar9 = (long)puVar3;
    *(long **)(param_1 + 0x108) = plVar9 + 1;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x100);
    lVar10 = (long)plVar9 - (long)plVar8 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(long **)(param_1 + 0x110) - (long)plVar8;
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
      plVar8 = *(long **)(param_1 + 0x100);
      plVar9 = *(long **)(param_1 + 0x108);
    }
    plVar5 = (long *)(lVar4 + lVar10 * 8);
    plVar6 = plVar5 + 1;
    *plVar5 = (long)puVar3;
    if (plVar9 != plVar8) {
      do {
        plVar9 = plVar9 + -1;
        lVar10 = *plVar9;
        *plVar9 = 0;
        plVar5 = plVar5 + -1;
        *plVar5 = lVar10;
      } while (plVar8 != plVar9);
      plVar8 = *(long **)(param_1 + 0x100);
    }
    plVar9 = *(long **)(param_1 + 0x108);
    *(long **)(param_1 + 0x100) = plVar5;
    *(long **)(param_1 + 0x108) = plVar6;
    *(ulong *)(param_1 + 0x110) = lVar4 + uVar1 * 8;
    puVar2 = PTR_LAB_047cba48;
    while (plVar9 != plVar8) {
      plVar9 = plVar9 + -1;
      lVar10 = *plVar9;
      *plVar9 = 0;
      if (lVar10 != 0) {
        FUN_0049e790(puVar2);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return puVar3;
}


