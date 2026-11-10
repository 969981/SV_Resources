/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032ff18; name: FUN_0032ff18
 */


void FUN_0032ff18(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar2 = PTR_LAB_047cba48;
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 == (undefined8 *)param_1[3]) {
    puVar10 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 < puVar10 || (long)puVar12 - (long)puVar10 == 0) {
      lVar5 = param_1[3] - (long)puVar10;
      uVar7 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar7 = 1;
      }
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar7 * 8);
      puVar11 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)param_1[2];
      puVar12 = (undefined8 *)(lVar4 + (uVar7 >> 2) * 8);
      lVar5 = (long)puVar10 - (long)puVar11;
      if (lVar5 == 0) {
        puVar8 = puVar12;
      }
      else {
        uVar1 = ((uint)(lVar5 - 8U >> 3) & 0x1fffffff) + 1;
        puVar10 = puVar12;
        if ((uVar1 & 3) != 0) {
          lVar9 = -((ulong)uVar1 & 3);
          puVar8 = puVar12;
          puVar13 = puVar11;
          do {
            uVar6 = *puVar13;
            bVar3 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            puVar11 = puVar13 + 1;
            *puVar13 = 0;
            puVar10 = puVar8 + 1;
            *puVar8 = uVar6;
            puVar8 = puVar10;
            puVar13 = puVar11;
          } while (bVar3);
        }
        if (0x17 < lVar5 - 8U) {
          do {
            uVar6 = *puVar11;
            *puVar11 = 0;
            *puVar10 = uVar6;
            uVar6 = puVar11[1];
            puVar11[1] = 0;
            puVar10[1] = uVar6;
            uVar6 = puVar11[2];
            puVar11[2] = 0;
            puVar10[2] = uVar6;
            uVar6 = puVar11[3];
            puVar11[3] = 0;
            puVar10[3] = uVar6;
            puVar10 = puVar10 + 4;
            puVar11 = puVar11 + 4;
          } while ((undefined8 *)(lVar4 + (lVar5 >> 3) * 8 + (uVar7 >> 2) * 8) != puVar10);
        }
        puVar11 = (undefined8 *)param_1[1];
        puVar10 = (undefined8 *)param_1[2];
        puVar8 = (undefined8 *)((long)puVar12 + lVar5);
      }
      lVar5 = *param_1;
      *param_1 = lVar4;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar8;
      param_1[3] = lVar4 + uVar7 * 8;
      puVar2 = PTR_LAB_047cba48;
      while (puVar10 != puVar11) {
        puVar10 = puVar10 + -1;
        puVar12 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12);
          FUN_0049e790(puVar2,puVar12);
        }
      }
      if (lVar5 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,lVar5);
      }
    }
    else {
      lVar4 = (long)puVar12 - (long)puVar10 >> 3;
      lVar5 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar5 = lVar4 + 1;
      }
      lVar5 = lVar5 >> 1;
      if (puVar12 == puVar11) {
        puVar12 = puVar12 + -lVar5;
      }
      else {
        do {
          uVar6 = *puVar12;
          *puVar12 = 0;
          puVar10 = (undefined8 *)puVar12[-lVar5];
          puVar12[-lVar5] = uVar6;
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10);
            FUN_0049e790(puVar2,puVar10);
          }
          puVar12 = puVar12 + 1;
        } while (puVar11 != puVar12);
        puVar11 = (undefined8 *)param_1[1];
        puVar12 = puVar12 + -lVar5;
      }
      param_1[1] = (long)(puVar11 + -lVar5);
      param_1[2] = (long)puVar12;
    }
  }
  puVar11 = (undefined8 *)param_1[2];
  uVar6 = *param_2;
  *param_2 = 0;
  *puVar11 = uVar6;
  param_1[2] = param_1[2] + 8;
  return;
}


