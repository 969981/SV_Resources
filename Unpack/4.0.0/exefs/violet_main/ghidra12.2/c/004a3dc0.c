/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a3dc0; name: FUN_004a3dc0
 */


void FUN_004a3dc0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    *puVar11 = *param_2;
    param_1[1] = (long)(puVar11 + 1);
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    lVar10 = (long)puVar11 - (long)puVar8 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - (long)puVar8;
    uVar5 = lVar3 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      puVar8 = (undefined8 *)*param_1;
      puVar11 = (undefined8 *)param_1[1];
    }
    puVar6 = (undefined8 *)(lVar3 + lVar10 * 8);
    puVar4 = puVar6 + 1;
    *puVar6 = *param_2;
    if (puVar11 != puVar8) {
      do {
        puVar11 = puVar11 + -1;
        uVar7 = *puVar11;
        *puVar11 = 0;
        puVar6 = puVar6 + -1;
        *puVar6 = uVar7;
      } while (puVar8 != puVar11);
      puVar8 = (undefined8 *)*param_1;
    }
    puVar11 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar4;
    param_1[2] = lVar3 + uVar1 * 8;
    puVar2 = PTR_LAB_047cba48;
    while (puVar11 != puVar8) {
      puVar11 = puVar11 + -1;
      pbVar9 = (byte *)*puVar11;
      *puVar11 = 0;
      if (pbVar9 != (byte *)0x0) {
        if ((*pbVar9 & 1) != 0) {
          FUN_0049e790(puVar2,*(undefined8 *)(pbVar9 + 0x10));
        }
        FUN_0049e790(puVar2,pbVar9);
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      return;
    }
  }
  return;
}


