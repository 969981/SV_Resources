/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b22b0; name: FUN_002b22b0
 */


void FUN_002b22b0(long *param_1,char *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  ulong uVar12;
  
  puVar9 = (ulong *)param_1[1];
  if ((ulong *)param_1[2] <= puVar9) {
    lVar6 = (long)puVar9 - *param_1 >> 3;
    uVar12 = lVar6 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar12 <= uVar5) {
      uVar12 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar12 * 0x18);
    }
    puVar9 = (ulong *)(lVar4 + lVar6 * 8);
    sVar3 = strlen(param_2);
    if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 002b253c to 002b2543 has its CatchHandler @ 002b2544 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar3 < 0x17) {
      puVar11 = (undefined1 *)((long)puVar9 + 1);
      *(char *)puVar9 = (char)((int)sVar3 << 1);
      if (sVar3 == 0) goto LAB_002b2444;
    }
    else {
      uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
      puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      lVar6 = lVar4 + lVar6 * 8;
      *(size_t *)(lVar6 + 8) = sVar3;
      *(undefined1 **)(lVar6 + 0x10) = puVar11;
      *puVar9 = uVar5 | 1;
    }
    memcpy(puVar11,param_2,sVar3);
LAB_002b2444:
    puVar11[sVar3] = 0;
    lVar4 = lVar4 + uVar12 * 0x18;
    pbVar8 = (byte *)*param_1;
    pbVar7 = (byte *)param_1[1];
    puVar1 = puVar9 + 3;
    if (pbVar7 == pbVar8) {
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar1;
      param_1[2] = lVar4;
    }
    else {
      do {
        uVar5 = *(ulong *)(pbVar7 + -0x10);
        uVar12 = *(ulong *)(pbVar7 + -0x18);
        puVar9[-1] = *(ulong *)(pbVar7 + -8);
        puVar9[-2] = uVar5;
        puVar9[-3] = uVar12;
        pbVar7[-0x18] = 0;
        pbVar7[-0x17] = 0;
        pbVar7[-0x16] = 0;
        pbVar7[-0x15] = 0;
        pbVar7[-0x14] = 0;
        pbVar7[-0x13] = 0;
        pbVar7[-0x12] = 0;
        pbVar7[-0x11] = 0;
        pbVar7[-0x10] = 0;
        pbVar7[-0xf] = 0;
        pbVar7[-0xe] = 0;
        pbVar7[-0xd] = 0;
        pbVar7[-0xc] = 0;
        pbVar7[-0xb] = 0;
        pbVar7[-10] = 0;
        pbVar7[-9] = 0;
        pbVar7[-8] = 0;
        pbVar7[-7] = 0;
        pbVar7[-6] = 0;
        pbVar7[-5] = 0;
        pbVar7[-4] = 0;
        pbVar7[-3] = 0;
        pbVar7[-2] = 0;
        pbVar7[-1] = 0;
        pbVar7 = pbVar7 + -0x18;
        puVar9 = puVar9 + -3;
      } while (pbVar8 != pbVar7);
      pbVar8 = (byte *)*param_1;
      pbVar7 = (byte *)param_1[1];
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar1;
      param_1[2] = lVar4;
      puVar2 = PTR_LAB_047cba48;
      if (pbVar7 != pbVar8) {
        do {
          pbVar10 = pbVar7 + -0x18;
          if ((*pbVar10 & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(pbVar7 + -8));
          }
          pbVar7 = pbVar10;
        } while (pbVar8 != pbVar10);
      }
    }
    if (pbVar8 == (byte *)0x0) {
      return;
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar8);
    return;
  }
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 002b252c to 002b2533 has its CatchHandler @ 002b2564 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    puVar11 = (undefined1 *)((long)puVar9 + 1);
    *(char *)puVar9 = (char)((int)sVar3 << 1);
    if (sVar3 == 0) goto LAB_002b23b8;
  }
  else {
    uVar12 = sVar3 + 0x10 & 0xfffffffffffffff0;
    puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar12);
    *puVar9 = uVar12 | 1;
    puVar9[1] = sVar3;
    puVar9[2] = (ulong)puVar11;
  }
  memcpy(puVar11,param_2,sVar3);
LAB_002b23b8:
  puVar11[sVar3] = 0;
  param_1[1] = (long)(puVar9 + 3);
  return;
}


