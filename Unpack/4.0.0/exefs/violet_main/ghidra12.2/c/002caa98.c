/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002caa98; name: FUN_002caa98
 */


ulong * FUN_002caa98(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_38;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    local_38 = param_1 + 1;
    uVar4 = 1;
    if (uVar1 >> 1 == 1) {
LAB_002cab04:
      puVar2 = local_38;
      uVar1 = FUN_0049e770(PTR_FUN_047cba38,uVar4 * 0x110);
      puVar3 = (ulong *)(uVar1 + uVar4 * 0x88);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[0x10] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      if (uVar1 != 0) {
                    /* try { // try from 002cab40 to 002cab53 has its CatchHandler @ 002cabd8 */
        FUN_002cac20(param_1,uVar1,&local_38,uVar4);
        if ((uVar4 != 0) && (puVar2 != (ulong *)0x0)) {
          puVar2 = puVar2 + uVar4 * 0x11;
          uVar5 = uVar4;
          do {
            puVar2 = puVar2 + -0x11;
            uVar5 = uVar5 - 1;
            FUN_002ca8b8(0,param_1,puVar2);
          } while (uVar5 != 0);
        }
        uVar5 = *param_1;
        if ((uVar5 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
          uVar5 = *param_1;
        }
        param_1[1] = uVar1;
        param_1[2] = uVar4 << 1;
        *param_1 = uVar5 | 1;
      }
      goto LAB_002cabb4;
    }
  }
  else {
    local_38 = (ulong *)param_1[1];
    uVar4 = param_1[2];
    if (uVar1 >> 1 == uVar4) goto LAB_002cab04;
  }
  puVar3 = local_38 + (uVar1 >> 1) * 0x11;
  puVar3[0x10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
LAB_002cabb4:
  *param_1 = *param_1 + 2;
  return puVar3;
}


