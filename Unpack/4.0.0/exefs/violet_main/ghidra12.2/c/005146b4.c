/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005146b4; name: FUN_005146b4
 */


void FUN_005146b4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *__dest;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  lVar14 = *param_2;
  lVar13 = param_2[1];
  uVar9 = (ulong)(lVar13 - lVar14) >> 4;
  if (0 < (int)uVar9) {
    lVar12 = param_1[1] - *param_1 >> 4;
    uVar9 = lVar12 + (uVar9 & 0xffffffff);
    if ((ulong)(param_1[2] - *param_1 >> 4) < uVar9) {
      lVar11 = uVar9 * 0x10;
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,lVar11);
      pvVar7 = (void *)*param_1;
      lVar12 = lVar6 + lVar12 * 0x10;
      sVar8 = param_1[1] - (long)pvVar7;
      __dest = (void *)(lVar12 - sVar8);
      if (0 < (long)sVar8) {
        memcpy(__dest,pvVar7,sVar8);
        pvVar7 = (void *)*param_1;
      }
      *param_1 = (long)__dest;
      param_1[1] = lVar12;
      param_1[2] = lVar6 + lVar11;
      if (pvVar7 != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    puVar5 = PTR_LAB_047cba48;
    puVar4 = PTR_FUN_047cba38;
    uVar9 = (ulong)(lVar13 - lVar14) >> 4 & 0xffffffff;
    lVar14 = 0;
    do {
      puVar2 = (undefined8 *)param_1[1];
      lVar13 = *param_2;
      if (puVar2 == (undefined8 *)param_1[2]) {
        lVar12 = (long)puVar2 - *param_1 >> 4;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = param_1[2] - *param_1;
        uVar10 = lVar6 >> 3;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_0049e770(puVar4,uVar1 << 4);
        }
        puVar3 = (undefined8 *)(lVar13 + lVar14);
        uVar16 = *puVar3;
        puVar2 = (undefined8 *)(lVar6 + lVar12 * 0x10);
        puVar15 = puVar2 + 2;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar16;
        pvVar7 = (void *)*param_1;
        sVar8 = param_1[1] - (long)pvVar7;
        if (0 < (long)sVar8) {
          memcpy((void *)((long)puVar2 - sVar8),pvVar7,sVar8);
          pvVar7 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar2 - sVar8);
        param_1[1] = (long)puVar15;
        param_1[2] = lVar6 + uVar1 * 0x10;
        if (pvVar7 != (void *)0x0) {
          FUN_0049e790(puVar5);
          puVar15 = (undefined8 *)param_1[1];
        }
      }
      else {
        puVar3 = (undefined8 *)(lVar13 + lVar14);
        uVar16 = *puVar3;
        puVar15 = puVar2 + 2;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar16;
        param_1[1] = (long)puVar15;
      }
      FUN_00514870(puVar15 + -2);
      lVar14 = lVar14 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


