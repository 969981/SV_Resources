/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c498c; name: FUN_004c498c
 */


void FUN_004c498c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    uVar13 = param_2[4];
    uVar12 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar6[5] = param_2[5];
    puVar6[4] = uVar13;
    puVar6[3] = uVar12;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar6[8] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    uVar12 = param_2[6];
    puVar6[7] = param_2[7];
    puVar6[6] = uVar12;
    puVar6[8] = param_2[8];
    uVar12 = param_2[9];
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    puVar6[10] = param_2[10];
    puVar6[9] = uVar12;
    param_1[1] = (long)(puVar6 + 0xb);
  }
  else {
    lVar5 = (long)puVar6 - *param_1 >> 3;
    uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x58);
    }
    puVar6 = (undefined8 *)(lVar7 + lVar5 * 8);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar6[2] = param_2[2];
    lVar7 = lVar7 + uVar1 * 0x58;
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    uVar13 = param_2[4];
    uVar12 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar6[5] = param_2[5];
    puVar6[4] = uVar13;
    puVar6[3] = uVar12;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar6[8] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    uVar12 = param_2[6];
    puVar6[7] = param_2[7];
    puVar6[6] = uVar12;
    puVar6[8] = param_2[8];
    uVar12 = param_2[9];
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    puVar6[10] = param_2[10];
    puVar6[9] = uVar12;
    lVar5 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar5) {
      *param_1 = (long)puVar6;
      param_1[1] = (long)(puVar6 + 0xb);
      param_1[2] = lVar7;
    }
    else {
      lVar9 = 0;
      do {
        lVar2 = lVar11 + lVar9;
        uVar13 = *(undefined8 *)(lVar2 + -0x50);
        uVar12 = *(undefined8 *)(lVar2 + -0x58);
        lVar10 = lVar9 + -0x58;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x48) = *(undefined8 *)(lVar2 + -0x48);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x50) = uVar13;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x58) = uVar12;
        uVar13 = *(undefined8 *)(lVar2 + -0x38);
        uVar12 = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)(lVar2 + -0x58) = 0;
        *(undefined8 *)(lVar2 + -0x50) = 0;
        *(undefined8 *)(lVar2 + -0x48) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x38) = uVar13;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x40) = uVar12;
        *(undefined8 *)(lVar2 + -0x40) = 0;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x18) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x28) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x20) = 0;
        uVar12 = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x28) = uVar12;
        *(undefined8 *)((long)puVar6 + lVar9 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        uVar12 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined8 *)(lVar2 + -0x28) = 0;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + -8) = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)((long)puVar6 + lVar9 + -0x10) = uVar12;
        lVar9 = lVar10;
      } while (lVar5 - lVar11 != lVar10);
      lVar5 = *param_1;
      lVar11 = param_1[1];
      *param_1 = (long)puVar6 + lVar10;
      param_1[1] = (long)(puVar6 + 0xb);
      param_1[2] = lVar7;
      puVar4 = PTR_LAB_047cba48;
      if (lVar11 != lVar5) {
        do {
          if (*(long *)(lVar11 + -0x28) != 0) {
            *(long *)(lVar11 + -0x20) = *(long *)(lVar11 + -0x28);
            FUN_0049e790(puVar4);
          }
          if ((*(byte *)(lVar11 + -0x40) & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + -0x58);
          }
          else {
            FUN_0049e790(puVar4,*(undefined8 *)(lVar11 + -0x30));
            bVar3 = *(byte *)(lVar11 + -0x58);
          }
          if ((bVar3 & 1) != 0) {
            FUN_0049e790(puVar4,*(undefined8 *)(lVar11 + -0x48));
          }
          lVar11 = lVar11 + -0x58;
        } while (lVar5 != lVar11);
      }
    }
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
      return;
    }
  }
  return;
}


