/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c3d3c; name: FUN_004c3d3c
 */


void FUN_004c3d3c(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__s;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar14;
  long *plVar13;
  undefined8 uVar15;
  
  __s = (void *)param_1[1];
  if ((ulong)((param_1[2] - (long)__s >> 3) * -0x5555555555555555) < param_2) {
    lVar8 = (long)__s - *param_1 >> 3;
    uVar2 = lVar8 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar2 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar2 * 0x18);
    }
    uVar9 = param_2 * 0x18 - 0x18;
    puVar7 = (undefined8 *)(lVar6 + lVar8 * 8);
    uVar1 = ((uint)(uVar9 / 0x18) & 0xfffffff) + 1;
    puVar10 = puVar7;
    if ((uVar1 & 7) != 0) {
      lVar8 = -((ulong)uVar1 & 7);
      do {
        *puVar10 = 0;
        puVar10[1] = 0;
        bVar4 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        puVar10[2] = 0;
        puVar10 = puVar10 + 3;
      } while (bVar4);
    }
    if (0xa7 < uVar9) {
      do {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = 0;
        puVar10[0x12] = 0;
        puVar10[0x13] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10 = puVar10 + 0x18;
      } while (puVar7 + param_2 * 3 != puVar10);
    }
    lVar6 = lVar6 + uVar2 * 0x18;
    plVar12 = (long *)*param_1;
    plVar13 = (long *)param_1[1];
    if (plVar13 == plVar12) {
      *param_1 = (long)puVar7;
      param_1[1] = (long)(puVar7 + param_2 * 3);
      param_1[2] = lVar6;
    }
    else {
      lVar8 = 0;
      do {
        *(undefined8 *)((long)puVar7 + lVar8 + -8) = 0;
        *(undefined8 *)((long)puVar7 + lVar8 + -0x18) = 0;
        *(undefined8 *)((long)puVar7 + lVar8 + -0x10) = 0;
        uVar15 = *(undefined8 *)((long)plVar13 + lVar8 + -0x18);
        lVar11 = lVar8 + -0x18;
        *(undefined8 *)((long)puVar7 + lVar8 + -0x10) =
             *(undefined8 *)((long)plVar13 + lVar8 + -0x10);
        *(undefined8 *)((long)puVar7 + lVar8 + -0x18) = uVar15;
        *(undefined8 *)((long)puVar7 + lVar8 + -8) = *(undefined8 *)((long)plVar13 + lVar8 + -8);
        *(undefined8 *)((long)plVar13 + lVar8 + -0x18) = 0;
        *(undefined8 *)((long)plVar13 + lVar8 + -0x10) = 0;
        *(undefined8 *)((long)plVar13 + lVar8 + -8) = 0;
        lVar8 = lVar11;
      } while ((long)plVar12 - (long)plVar13 != lVar11);
      plVar12 = (long *)*param_1;
      plVar13 = (long *)param_1[1];
      *param_1 = (long)puVar7 + lVar11;
      param_1[1] = (long)(puVar7 + param_2 * 3);
      param_1[2] = lVar6;
      puVar3 = PTR_LAB_047cba48;
      if (plVar13 != plVar12) {
        do {
          plVar14 = plVar13 + -3;
          if (*plVar14 != 0) {
            plVar13[-2] = *plVar14;
            FUN_0049e790(puVar3);
          }
          plVar13 = plVar14;
        } while (plVar12 != plVar14);
      }
    }
    if (plVar12 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar12);
      return;
    }
  }
  else {
    pvVar5 = __s;
    if (param_2 != 0) {
      pvVar5 = (void *)((long)__s + param_2 * 0x18);
      memset(__s,0,((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    param_1[1] = (long)pvVar5;
  }
  return;
}


