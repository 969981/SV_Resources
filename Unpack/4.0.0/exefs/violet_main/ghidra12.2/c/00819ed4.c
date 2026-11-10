/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819ed4; name: FUN_00819ed4
 */


void FUN_00819ed4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar3;
    param_1[1] = (long)(puVar10 + 1);
  }
  else {
    lVar9 = (long)puVar10 - *param_1 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
    }
    uVar3 = *param_2;
    puVar10 = (undefined8 *)(lVar4 + lVar9 * 8);
    *param_2 = 0;
    lVar4 = lVar4 + uVar1 * 8;
    puVar6 = puVar10 + 1;
    *puVar10 = uVar3;
    puVar8 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
    if (puVar7 == puVar8) {
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar6;
      param_1[2] = lVar4;
    }
    else {
      do {
        puVar7 = puVar7 + -1;
        uVar3 = *puVar7;
        *puVar7 = 0;
        puVar10 = puVar10 + -1;
        *puVar10 = uVar3;
      } while (puVar8 != puVar7);
      puVar8 = (undefined8 *)*param_1;
      puVar7 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar6;
      param_1[2] = lVar4;
      puVar2 = PTR_LAB_047cba48;
      if (puVar7 != puVar8) {
        do {
          puVar7 = puVar7 + -1;
          puVar10 = (undefined8 *)*puVar7;
          *puVar7 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10);
            FUN_0049e790(puVar2,puVar10);
          }
        } while (puVar8 != puVar7);
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      return;
    }
  }
  return;
}


