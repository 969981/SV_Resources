/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00347edc; name: FUN_00347edc
 */


void FUN_00347edc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  
  puVar10 = (undefined4 *)param_1[1];
  if (puVar10 < (undefined4 *)param_1[2]) {
    *puVar10 = 5;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined8 *)(puVar10 + 8) = *param_2;
    lVar5 = param_2[1];
    plVar4 = (long *)(puVar10 + 10);
    *plVar4 = lVar5;
    lVar7 = param_2[2];
    *(long *)(puVar10 + 0xc) = lVar7;
    if (lVar7 == 0) {
      *(long **)(puVar10 + 8) = plVar4;
    }
    else {
      *(long **)(lVar5 + 0x10) = plVar4;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = param_2 + 1;
    }
    *(undefined8 *)(puVar10 + 0xe) = 0;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 0x12) = 0;
    param_1[1] = (long)(puVar10 + 0x14);
  }
  else {
    lVar5 = (long)puVar10 - *param_1 >> 4;
    uVar1 = lVar5 * -0x3333333333333333 + 1;
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x199999999999998 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar1 = 0x333333333333333;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x50);
    }
    puVar10 = (undefined4 *)(lVar7 + lVar5 * 0x10);
    *puVar10 = 5;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 8) = *param_2;
    lVar6 = param_2[1];
    plVar4 = (long *)(puVar10 + 10);
    *plVar4 = lVar6;
    lVar9 = param_2[2];
    *(long *)(puVar10 + 0xc) = lVar9;
    if (lVar9 == 0) {
      *(long **)(puVar10 + 8) = plVar4;
    }
    else {
      *(long **)(lVar6 + 0x10) = plVar4;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = param_2 + 1;
    }
    lVar5 = lVar7 + lVar5 * 0x10;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    lVar5 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar5) {
      puVar3 = puVar10;
      lVar6 = lVar5;
    }
    else {
      lVar9 = 0;
      do {
                    /* try { // try from 00348068 to 0034806b has its CatchHandler @ 00348134 */
        FUN_002886bc((long)puVar10 + lVar9 + -0x50,lVar6 + -0x50 + lVar9);
        lVar9 = lVar9 + -0x50;
      } while (lVar5 - lVar6 != lVar9);
      lVar5 = *param_1;
      puVar3 = (undefined4 *)((long)puVar10 + lVar9);
      lVar6 = param_1[1];
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar10 + 0x14);
    param_1[2] = lVar7 + uVar1 * 0x50;
    puVar2 = PTR_LAB_047cba48;
    while (lVar7 = lVar6, lVar7 != lVar5) {
      FUN_003481a8(lVar7 + -0x18);
      FUN_0025cef0(lVar7 + -0x30,*(undefined8 *)(lVar7 + -0x28));
      lVar6 = lVar7 + -0x50;
      if ((*(byte *)(lVar7 + -0x48) & 1) != 0) {
        FUN_0049e790(puVar2,*(undefined8 *)(lVar7 + -0x38));
      }
    }
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
      return;
    }
  }
  return;
}


