/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b8328; name: FUN_034b8328
 */


uint * FUN_034b8328(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_2 / uVar2;
    }
    for (puVar3 = *(uint **)(*param_1 + (ulong)(param_2 - uVar1 * uVar2) * 8); puVar3 != (uint *)0x0
        ; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == param_2) {
        return puVar3;
      }
    }
  }
  puVar3 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x68);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = param_2;
    puVar3[10] = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined ***)(puVar3 + 8) = &PTR_LAB_047c4448;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    uVar2 = *(uint *)(param_1 + 1);
    if ((uVar2 == 0) || (fVar4 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar4 / (float)uVar2)) {
      FUN_034bb448(param_1);
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 == 0) {
        return puVar3;
      }
      param_2 = *puVar3;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_2 / uVar2;
    }
    param_2 = param_2 - uVar1 * uVar2;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(*param_1 + (ulong)param_2 * 8);
    *(uint **)(*param_1 + (ulong)param_2 * 8) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return puVar3;
}


