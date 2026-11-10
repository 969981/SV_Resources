/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a4054; name: FUN_004a4054
 */


long FUN_004a4054(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x160);
  if (lVar3 != 0) {
    FUN_004a1180(lVar3);
  }
  plVar10 = *(long **)(param_1 + 0x120);
  if (plVar10 < *(long **)(param_1 + 0x128)) {
    *plVar10 = lVar3;
    *(long **)(param_1 + 0x120) = plVar10 + 1;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x118);
    lVar9 = (long)plVar10 - (long)plVar8 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(long **)(param_1 + 0x128) - (long)plVar8;
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
      plVar8 = *(long **)(param_1 + 0x118);
      plVar10 = *(long **)(param_1 + 0x120);
    }
    plVar5 = (long *)(lVar4 + lVar9 * 8);
    plVar6 = plVar5 + 1;
    *plVar5 = lVar3;
    if (plVar10 != plVar8) {
      do {
        plVar10 = plVar10 + -1;
        lVar9 = *plVar10;
        *plVar10 = 0;
        plVar5 = plVar5 + -1;
        *plVar5 = lVar9;
      } while (plVar8 != plVar10);
      plVar8 = *(long **)(param_1 + 0x118);
    }
    plVar10 = *(long **)(param_1 + 0x120);
    *(long **)(param_1 + 0x118) = plVar5;
    *(long **)(param_1 + 0x120) = plVar6;
    *(ulong *)(param_1 + 0x128) = lVar4 + uVar1 * 8;
    puVar2 = PTR_LAB_047cba48;
    while (plVar10 != plVar8) {
      plVar10 = plVar10 + -1;
      lVar9 = *plVar10;
      *plVar10 = 0;
      if (lVar9 != 0) {
        FUN_004a1ab0(lVar9);
        FUN_0049e790(puVar2,lVar9);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return lVar3;
}


