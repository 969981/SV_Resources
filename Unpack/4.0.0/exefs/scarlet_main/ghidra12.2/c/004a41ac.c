/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a41ac; name: FUN_004a41ac
 */


undefined8 FUN_004a41ac(long param_1,int param_2)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  long *plVar10;
  long *plVar12;
  long *plVar11;
  long lVar13;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar8 < *(undefined8 **)(param_1 + 200)) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      if (param_2 < 0) {
                    /* try { // try from 004a43d0 to 004a43d7 has its CatchHandler @ 004a4420 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      sVar9 = (size_t)param_2;
      pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,sVar9);
      *puVar8 = pvVar3;
      puVar8[2] = (long)pvVar3 + sVar9;
      memset(pvVar3,0,sVar9);
      puVar8[1] = (long)pvVar3 + sVar9;
      *(undefined8 **)(param_1 + 0xc0) = puVar8 + 3;
    }
    else {
      lVar7 = (long)puVar8 - *(long *)(param_1 + 0xb8) >> 3;
      uVar1 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = (long)*(undefined8 **)(param_1 + 200) - *(long *)(param_1 + 0xb8) >> 3;
      uVar6 = lVar5 * 0x5555555555555556;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar1 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x18);
      }
      puVar8 = (undefined8 *)(lVar5 + lVar7 * 8);
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      if (param_2 < 0) {
                    /* try { // try from 004a43dc to 004a43e3 has its CatchHandler @ 004a43e4 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      sVar9 = (size_t)param_2;
      lVar13 = lVar5 + uVar1 * 0x18;
      pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,sVar9);
      lVar5 = lVar5 + lVar7 * 8;
      *puVar8 = pvVar3;
      *(size_t *)(lVar5 + 0x10) = (long)pvVar3 + sVar9;
      memset(pvVar3,0,sVar9);
      *(size_t *)(lVar5 + 8) = (long)pvVar3 + sVar9;
      plVar10 = *(long **)(param_1 + 0xb8);
      plVar11 = *(long **)(param_1 + 0xc0);
      if (plVar11 == plVar10) {
        *(undefined8 **)(param_1 + 0xb8) = puVar8;
        *(undefined8 **)(param_1 + 0xc0) = puVar8 + 3;
        *(long *)(param_1 + 200) = lVar13;
      }
      else {
        lVar7 = 0;
        do {
          *(undefined8 *)((long)puVar8 + lVar7 + -8) = 0;
          *(undefined8 *)((long)puVar8 + lVar7 + -0x18) = 0;
          *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = 0;
          uVar4 = *(undefined8 *)((long)plVar11 + lVar7 + -0x18);
          lVar5 = lVar7 + -0x18;
          *(undefined8 *)((long)puVar8 + lVar7 + -0x10) =
               *(undefined8 *)((long)plVar11 + lVar7 + -0x10);
          *(undefined8 *)((long)puVar8 + lVar7 + -0x18) = uVar4;
          *(undefined8 *)((long)puVar8 + lVar7 + -8) = *(undefined8 *)((long)plVar11 + lVar7 + -8);
          *(undefined8 *)((long)plVar11 + lVar7 + -0x18) = 0;
          *(undefined8 *)((long)plVar11 + lVar7 + -0x10) = 0;
          *(undefined8 *)((long)plVar11 + lVar7 + -8) = 0;
          lVar7 = lVar5;
        } while ((long)plVar10 - (long)plVar11 != lVar5);
        plVar10 = *(long **)(param_1 + 0xb8);
        plVar11 = *(long **)(param_1 + 0xc0);
        *(long *)(param_1 + 0xb8) = (long)puVar8 + lVar5;
        *(undefined8 **)(param_1 + 0xc0) = puVar8 + 3;
        *(long *)(param_1 + 200) = lVar13;
        puVar2 = PTR_LAB_047cba48;
        if (plVar11 != plVar10) {
          do {
            plVar12 = plVar11 + -3;
            if (*plVar12 != 0) {
              plVar11[-2] = *plVar12;
              FUN_0049e790(puVar2);
            }
            plVar11 = plVar12;
          } while (plVar10 != plVar12);
        }
      }
      if (plVar10 != (long *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar10);
      }
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + -0x18);
  }
  return uVar4;
}


