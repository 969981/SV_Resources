/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c3604; name: FUN_004c3604
 */


void FUN_004c3604(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__s;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  
  __s = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s >> 3) < param_2) {
    lVar14 = (long)__s - *param_1 >> 3;
    uVar2 = lVar14 + param_2;
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
    puVar7 = (undefined8 *)(lVar6 + lVar14 * 8);
    uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    puVar11 = puVar7;
    if ((uVar1 & 7) != 0) {
      lVar14 = -((ulong)uVar1 & 7);
      puVar10 = puVar7;
      do {
        puVar11 = puVar10 + 1;
        *puVar10 = 0;
        bVar4 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar10 = puVar11;
      } while (bVar4);
    }
    if (0x37 < uVar8) {
      do {
        puVar11[2] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[7] = 0;
        puVar11[4] = 0;
        puVar11[3] = 0;
        puVar11[6] = 0;
        puVar11[5] = 0;
        puVar11 = puVar11 + 8;
      } while (puVar7 + param_2 != puVar11);
    }
    puVar9 = puVar7 + param_2;
    puVar11 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar6 = lVar6 + uVar2 * 8;
    if (puVar10 == puVar11) {
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar9;
      param_1[2] = lVar6;
    }
    else {
      do {
        puVar10 = puVar10 + -1;
        uVar12 = *puVar10;
        *puVar10 = 0;
        puVar7 = puVar7 + -1;
        *puVar7 = uVar12;
      } while (puVar11 != puVar10);
      puVar11 = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar9;
      param_1[2] = lVar6;
      puVar3 = PTR_LAB_047cba48;
      if (puVar10 != puVar11) {
        do {
          puVar10 = puVar10 + -1;
          pbVar13 = (byte *)*puVar10;
          *puVar10 = 0;
          if (pbVar13 != (byte *)0x0) {
            if ((*pbVar13 & 1) != 0) {
              FUN_0049e790(puVar3,*(undefined8 *)(pbVar13 + 0x10));
            }
            FUN_0049e790(puVar3,pbVar13);
          }
        } while (puVar11 != puVar10);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
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


