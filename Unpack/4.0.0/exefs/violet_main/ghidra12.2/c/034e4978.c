/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e4978; name: FUN_034e4978
 */


uint * FUN_034e4978(long *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = param_2 / uVar3;
    }
    for (puVar4 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar3) * 8); puVar4 != (uint *)0x0
        ; puVar4 = *(uint **)(puVar4 + 2)) {
      if (*puVar4 == param_2) {
        return puVar4;
      }
    }
  }
  puVar4 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x58);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = param_2;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar1 = PTR_DAT_047e7310 + 0x10;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *(undefined **)(puVar4 + 0xe) = puVar1;
    uVar3 = *(uint *)(param_1 + 1);
    if ((uVar3 == 0) || (fVar5 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar5 / (float)uVar3)) {
      FUN_034e4eec(param_1);
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 == 0) {
        return puVar4;
      }
      param_2 = *puVar4;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = param_2 / uVar3;
    }
    param_2 = param_2 - uVar2 * uVar3;
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(*param_1 + (ulong)param_2 * 8);
    *(uint **)(*param_1 + (ulong)param_2 * 8) = puVar4;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return puVar4;
}


