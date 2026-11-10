/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c3b70; name: FUN_004c3b70
 */


void FUN_004c3b70(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__s;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  __s = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s >> 3) < param_2) {
    lVar12 = (long)__s - *param_1 >> 3;
    uVar2 = lVar12 + param_2;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar8 = lVar6 >> 2;
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar2 << 3);
    }
    uVar8 = param_2 * 8 - 8;
    plVar7 = (long *)(lVar6 + lVar12 * 8);
    uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    plVar11 = plVar7;
    if ((uVar1 & 7) != 0) {
      lVar12 = -((ulong)uVar1 & 7);
      plVar10 = plVar7;
      do {
        plVar11 = plVar10 + 1;
        *plVar10 = 0;
        bVar4 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        plVar10 = plVar11;
      } while (bVar4);
    }
    if (0x37 < uVar8) {
      do {
        plVar11[2] = 0;
        plVar11[1] = 0;
        *plVar11 = 0;
        plVar11[7] = 0;
        plVar11[4] = 0;
        plVar11[3] = 0;
        plVar11[6] = 0;
        plVar11[5] = 0;
        plVar11 = plVar11 + 8;
      } while (plVar7 + param_2 != plVar11);
    }
    plVar9 = plVar7 + param_2;
    plVar11 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    lVar6 = lVar6 + uVar2 * 8;
    if (plVar10 == plVar11) {
      *param_1 = (long)plVar7;
      param_1[1] = (long)plVar9;
      param_1[2] = lVar6;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        lVar12 = *plVar10;
        *plVar10 = 0;
        plVar7 = plVar7 + -1;
        *plVar7 = lVar12;
      } while (plVar11 != plVar10);
      plVar11 = (long *)*param_1;
      plVar10 = (long *)param_1[1];
      *param_1 = (long)plVar7;
      param_1[1] = (long)plVar9;
      param_1[2] = lVar6;
      puVar3 = PTR_LAB_047cba48;
      if (plVar10 != plVar11) {
        do {
          plVar10 = plVar10 + -1;
          lVar12 = *plVar10;
          *plVar10 = 0;
          if (lVar12 != 0) {
            FUN_004a1ab0(lVar12);
            FUN_0049e790(puVar3,lVar12);
          }
        } while (plVar11 != plVar10);
      }
    }
    if (plVar11 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar11);
      return;
    }
  }
  else {
    pvVar5 = __s;
    if (param_2 != 0) {
      pvVar5 = (void *)((long)__s + param_2 * 8);
      memset(__s,0,param_2 * 8);
    }
    param_1[1] = (long)pvVar5;
  }
  return;
}


