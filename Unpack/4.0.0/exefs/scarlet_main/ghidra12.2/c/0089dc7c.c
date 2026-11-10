/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089dc7c; name: FUN_0089dc7c
 */


void FUN_0089dc7c(float param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_2 + 0x3c);
  uVar4 = *(uint *)(param_2 + 0x44) & 0xfffffff0;
  *(uint *)(param_2 + 0x44) = uVar4;
  if (fVar5 == 0.0) {
    return;
  }
  fVar6 = fVar5 * param_1 + *(float *)(param_2 + 0x20);
  if (fVar5 <= 0.0) {
    if (0.0 < fVar6) goto LAB_0089ddd4;
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 == 2) {
      fVar6 = -fVar6;
      *(float *)(param_2 + 0x3c) = -fVar5;
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB_0089ddd4;
        uVar4 = uVar4 | 1;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        fVar6 = 0.0;
        goto LAB_0089ddd0;
      }
      uVar2 = FUN_02169b64(param_2);
      uVar4 = *(uint *)(param_2 + 0x44);
      fVar6 = fVar6 + (float)uVar2;
    }
    uVar4 = uVar4 | 4;
  }
  else {
    uVar2 = FUN_02169b64(param_2);
    if (fVar6 < (float)uVar2) goto LAB_0089ddd4;
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 == 2) {
      uVar2 = FUN_02169b64(param_2);
      uVar3 = FUN_02169b64(param_2);
      fVar6 = ((float)uVar3 - fVar6) + (float)uVar2;
      *(float *)(param_2 + 0x3c) = -*(float *)(param_2 + 0x3c);
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB_0089ddd4;
        uVar2 = FUN_02169b64(param_2);
        fVar6 = (float)uVar2;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        uVar4 = *(uint *)(param_2 + 0x44) | 1;
        goto LAB_0089ddd0;
      }
      uVar2 = FUN_02169b64(param_2);
      fVar6 = fVar6 - (float)uVar2;
    }
    uVar4 = *(uint *)(param_2 + 0x44) | 2;
  }
LAB_0089ddd0:
  *(uint *)(param_2 + 0x44) = uVar4;
LAB_0089ddd4:
  *(float *)(param_2 + 0x20) = fVar6;
  return;
}


