/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dfe48; name: FUN_002dfe48
 */


void FUN_002dfe48(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar6 = *param_2;
    uVar3 = *param_3;
    *(undefined8 *)((long)puVar7 + 0xc) = 0;
    *(undefined8 *)((long)puVar7 + 0x1c) = 0;
    *(undefined8 *)((long)puVar7 + 0x14) = 0;
    *puVar7 = uVar6;
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(undefined4 *)((long)puVar7 + 0x24) = 0;
    param_1[1] = (long)(puVar7 + 6);
  }
  else {
    lVar5 = (long)puVar7 - *param_1 >> 4;
    uVar1 = lVar5 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x30);
    }
    puVar7 = (undefined8 *)(lVar8 + lVar5 * 0x10);
    uVar3 = *param_3;
    *puVar7 = *param_2;
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(undefined8 *)((long)puVar7 + 0xc) = 0;
    *(undefined8 *)((long)puVar7 + 0x1c) = 0;
    *(undefined8 *)((long)puVar7 + 0x14) = 0;
    *(undefined4 *)((long)puVar7 + 0x24) = 0;
    lVar8 = lVar8 + uVar1 * 0x30;
    lVar5 = *param_1;
    lVar10 = param_1[1];
    if (lVar10 == lVar5) {
      *param_1 = (long)puVar7;
      param_1[1] = (long)(puVar7 + 6);
      param_1[2] = lVar8;
    }
    else {
      lVar11 = 0;
      do {
        lVar2 = lVar10 + lVar11;
        uVar13 = *(undefined8 *)(lVar2 + -0x28);
        uVar6 = *(undefined8 *)(lVar2 + -0x30);
        lVar12 = lVar11 + -0x30;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x20) = 0;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x28) = uVar13;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x30) = uVar6;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x10) = 0;
        uVar6 = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)((long)puVar7 + lVar11 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)((long)puVar7 + lVar11 + -0x20) = uVar6;
        *(undefined8 *)((long)puVar7 + lVar11 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined4 *)((long)puVar7 + lVar11 + -8) = *(undefined4 *)(lVar2 + -8);
        lVar11 = lVar12;
      } while (lVar5 - lVar10 != lVar12);
      lVar5 = *param_1;
      lVar10 = param_1[1];
      *param_1 = (long)puVar7 + lVar12;
      param_1[1] = (long)(puVar7 + 6);
      param_1[2] = lVar8;
      puVar4 = PTR_LAB_047cba48;
      if (lVar10 != lVar5) {
        do {
          lVar8 = lVar10 + -0x30;
          if (*(long *)(lVar10 + -0x20) != 0) {
            *(long *)(lVar10 + -0x18) = *(long *)(lVar10 + -0x20);
            FUN_0049e790(puVar4);
          }
          lVar10 = lVar8;
        } while (lVar5 != lVar8);
      }
    }
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
      return;
    }
  }
  return;
}


