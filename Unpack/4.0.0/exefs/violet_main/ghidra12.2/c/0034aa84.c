/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034aa84; name: FUN_0034aa84
 */


ulong * FUN_0034aa84(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    puVar6 = param_1 + 1;
    uVar7 = 1;
    if (uVar2 >> 1 == 1) {
LAB_0034aad4:
      uVar2 = FUN_0049e770(PTR_FUN_047cba38,uVar7 << 7);
      puVar5 = (ulong *)(uVar2 + uVar7 * 0x40);
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      if (uVar2 != 0) {
        if (uVar7 != 0) {
          puVar3 = (ulong *)(uVar2 + 0x10);
          uVar4 = uVar7;
          do {
            puVar3[-2] = *puVar6;
            puVar3[-1] = puVar6[1];
            *puVar3 = puVar6[2];
            puVar1 = puVar6 + 3;
            uVar4 = uVar4 - 1;
            puVar6 = puVar6 + 8;
            puVar3[1] = *puVar1;
            puVar3 = puVar3 + 8;
          } while (uVar4 != 0);
        }
        uVar4 = *param_1;
        if ((uVar4 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
          uVar4 = *param_1;
        }
        param_1[1] = uVar2;
        param_1[2] = uVar7 << 1;
        *param_1 = uVar4 | 1;
      }
      goto LAB_0034ab64;
    }
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (uVar2 >> 1 == uVar7) goto LAB_0034aad4;
  }
  puVar5 = puVar6 + (uVar2 >> 1) * 8;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
LAB_0034ab64:
  *param_1 = *param_1 + 2;
  return puVar5;
}


