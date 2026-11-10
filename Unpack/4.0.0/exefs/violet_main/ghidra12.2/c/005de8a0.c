/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005de8a0; name: FUN_005de8a0
 */


void FUN_005de8a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[1] = (long)(puVar2 + 4);
  }
  else {
    lVar9 = (long)puVar2 - *param_1 >> 5;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 4;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 5,8);
    }
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar7 = (undefined8 *)(lVar4 + lVar9 * 0x20);
    puVar2 = puVar7 + 4;
    puVar7[1] = param_2[1];
    *puVar7 = uVar11;
    puVar7[3] = uVar13;
    puVar7[2] = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    pbVar3 = (byte *)*param_1;
    pbVar8 = (byte *)param_1[1];
    puVar6 = puVar7;
    if (pbVar8 == pbVar3) {
      pbVar8 = pbVar3;
    }
    else {
      do {
        uVar11 = *(undefined8 *)(pbVar8 + -0x20);
        uVar13 = *(undefined8 *)(pbVar8 + -8);
        uVar12 = *(undefined8 *)(pbVar8 + -0x10);
        puVar7 = puVar6 + -4;
        puVar6[-3] = *(undefined8 *)(pbVar8 + -0x18);
        *puVar7 = uVar11;
        puVar6[-1] = uVar13;
        puVar6[-2] = uVar12;
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
        pbVar8[-0x20] = 0;
        pbVar8[-0x1f] = 0;
        pbVar8[-0x1e] = 0;
        pbVar8[-0x1d] = 0;
        pbVar8[-0x1c] = 0;
        pbVar8[-0x1b] = 0;
        pbVar8[-0x1a] = 0;
        pbVar8[-0x19] = 0;
        pbVar8 = pbVar8 + -0x20;
        puVar6 = puVar7;
      } while (pbVar3 != pbVar8);
      pbVar3 = (byte *)param_1[1];
      pbVar8 = (byte *)*param_1;
    }
    lVar9 = param_1[2];
    param_1[2] = lVar4 + uVar1 * 0x20;
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar2;
    if (pbVar3 != pbVar8) {
      do {
        pbVar10 = pbVar3 + -0x20;
        if ((*pbVar10 & 1) != 0) {
          (**(code **)(**(long **)(pbVar3 + -8) + 0x18))
                    (*(long **)(pbVar3 + -8),*(undefined8 *)(pbVar3 + -0x10),
                     *(ulong *)(pbVar3 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar3 = pbVar10;
      } while (pbVar8 != pbVar10);
    }
    if (pbVar8 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005de9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar8,lVar9 - (long)pbVar8,8);
      return;
    }
  }
  return;
}


