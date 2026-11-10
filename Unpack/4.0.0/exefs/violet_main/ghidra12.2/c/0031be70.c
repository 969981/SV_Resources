/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031be70; name: FUN_0031be70
 */


void FUN_0031be70(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar12;
    *puVar2 = uVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[1] = (long)(puVar2 + 3);
  }
  else {
    lVar4 = (long)puVar2 - *param_1 >> 3;
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x18);
    }
    puVar6 = (undefined8 *)(lVar5 + lVar4 * 8);
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar6[2] = param_2[2];
    lVar5 = lVar5 + uVar1 * 0x18;
    puVar6[1] = uVar12;
    *puVar6 = uVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    pbVar9 = (byte *)*param_1;
    pbVar8 = (byte *)param_1[1];
    puVar2 = puVar6 + 3;
    if (pbVar8 == pbVar9) {
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar2;
      param_1[2] = lVar5;
    }
    else {
      do {
        uVar12 = *(undefined8 *)(pbVar8 + -0x10);
        uVar11 = *(undefined8 *)(pbVar8 + -0x18);
        puVar6[-1] = *(undefined8 *)(pbVar8 + -8);
        puVar6[-2] = uVar12;
        puVar6[-3] = uVar11;
        pbVar8[-0x18] = 0;
        pbVar8[-0x17] = 0;
        pbVar8[-0x16] = 0;
        pbVar8[-0x15] = 0;
        pbVar8[-0x14] = 0;
        pbVar8[-0x13] = 0;
        pbVar8[-0x12] = 0;
        pbVar8[-0x11] = 0;
        pbVar8[-0x10] = 0;
        pbVar8[-0xf] = 0;
        pbVar8[-0xe] = 0;
        pbVar8[-0xd] = 0;
        pbVar8[-0xc] = 0;
        pbVar8[-0xb] = 0;
        pbVar8[-10] = 0;
        pbVar8[-9] = 0;
        pbVar8[-8] = 0;
        pbVar8[-7] = 0;
        pbVar8[-6] = 0;
        pbVar8[-5] = 0;
        pbVar8[-4] = 0;
        pbVar8[-3] = 0;
        pbVar8[-2] = 0;
        pbVar8[-1] = 0;
        pbVar8 = pbVar8 + -0x18;
        puVar6 = puVar6 + -3;
      } while (pbVar9 != pbVar8);
      pbVar9 = (byte *)*param_1;
      pbVar8 = (byte *)param_1[1];
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar2;
      param_1[2] = lVar5;
      puVar3 = PTR_LAB_047cba48;
      if (pbVar8 != pbVar9) {
        do {
          pbVar10 = pbVar8 + -0x18;
          if ((*pbVar10 & 1) != 0) {
            FUN_0049e790(puVar3,*(undefined8 *)(pbVar8 + -8));
          }
          pbVar8 = pbVar10;
        } while (pbVar9 != pbVar10);
      }
    }
    if (pbVar9 != (byte *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,pbVar9);
      return;
    }
  }
  return;
}


