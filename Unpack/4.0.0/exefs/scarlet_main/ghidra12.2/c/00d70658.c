/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d70658; name: FUN_00d70658
 */


void FUN_00d70658(float param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = (0.8 - param_1) / 0.8;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  puVar3 = param_2 + 2;
  *puVar3 = *param_2;
  param_2[3] = param_2[1];
  fVar5 = *(float *)(param_2 + 6);
  fVar6 = *(float *)((long)param_2 + 0x34);
  if (*(int *)((long)param_2 + 0x4c) == 0x22) {
    fVar8 = fVar6 + *(float *)(param_3 + 0xf8);
    iVar1 = *(int *)(param_3 + (ulong)(fVar5 < fVar6 && fVar5 < fVar8) * 0xc +
                     (long)*(int *)(param_2 + 9) * 4 + 0x124);
    if (iVar1 == 1) {
LAB_00d7070c:
      fVar8 = fVar5 + *(float *)(param_3 + 0xf4);
    }
    else if (iVar1 == 3) {
      fVar8 = fVar5;
      if (fVar5 < fVar6) {
        fVar8 = fVar6;
      }
      fVar8 = fVar8 + *(float *)(param_3 + 0xfc);
    }
    else if (iVar1 == 2) {
      if ((fVar6 <= fVar5) || (fVar8 <= fVar5)) goto LAB_00d7070c;
    }
    else {
      fVar8 = fVar6;
      if (iVar1 != 4) {
        fVar8 = fVar5;
      }
    }
  }
  else {
    fVar7 = (float)((ulong)*puVar3 >> 0x20);
    fVar8 = fVar7;
    if ((fVar5 < fVar6) && (*(char *)(param_3 + 0x11a) == '\0')) {
      fVar8 = fVar6 + *(float *)(param_3 + 0xf8);
      if (fVar8 <= fVar5) {
        fVar8 = fVar5;
      }
      if (fVar7 <= fVar8) {
        fVar8 = fVar7;
      }
    }
  }
  fVar8 = fVar4 * 6.0 + fVar8;
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  param_2[3] = param_2[3];
  *puVar3 = CONCAT44(fVar8,(int)*puVar3);
  if (*(char *)(param_3 + 0x11a) == '\0') {
    if (*(char *)(param_3 + 0x119) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)(param_3 + 0x118) ^ 1;
      if (fVar5 - fVar6 < *(float *)(param_3 + 0xf8)) {
        uVar2 = 1;
      }
    }
    goto LAB_00d70740;
  }
  if (*(float *)(param_3 + 0xfc) <= fVar8 - fVar6) {
LAB_00d707b8:
    uVar2 = 2;
  }
  else {
    if (fVar8 - fVar6 < *(float *)(param_3 + 0xf8)) {
      if (*(char *)(param_3 + 0x119) != '\0') {
        uVar2 = 1;
        goto LAB_00d70740;
      }
      if (*(float *)(param_3 + 0xfc) <= fVar8 - fVar5) goto LAB_00d707b8;
    }
    uVar2 = (uint)(*(byte *)(param_3 + 0x118) == 0) << 1;
  }
LAB_00d70740:
  *(uint *)(param_2 + 7) = uVar2;
  return;
}


