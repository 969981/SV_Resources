/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01733b00; name: FUN_01733b00
 */


void FUN_01733b00(float param_1,long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float fStack_34;
  
  if (*(int *)(param_2 + 0x1b8) != 0) {
    *(undefined4 *)(param_2 + 0x1b8) = 0;
    *(undefined1 *)(param_2 + 0x1dc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
  }
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    fVar2 = *(float *)(param_2 + 0x1a0);
    if ((*(float *)(param_2 + 0x1a0) <= param_1) &&
       (fVar2 = param_1, *(float *)(param_2 + 0x1a4) < param_1)) {
      fVar2 = *(float *)(param_2 + 0x1a4);
    }
  }
  else {
    fVar2 = param_1;
  }
  *(undefined4 *)(param_2 + 0x1b8) = 1;
  fVar5 = *(float *)(param_2 + 0x1d4);
  fVar1 = -*(float *)(param_2 + 0x1a8);
  if (fVar2 <= fVar5) {
    fVar1 = *(float *)(param_2 + 0x1a8);
  }
  fVar3 = (float)param_3;
  fVar4 = fVar2 - fVar5;
  fVar6 = fVar4 / fVar3 + fVar1 * -0.5 * fVar3;
  if (-fVar6 / fVar1 < fVar3) {
    fVar6 = (fVar4 + fVar4) / fVar3;
    fVar1 = -fVar6 / fVar3;
  }
  *(undefined4 *)(param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x1d8) = 0;
  *(float *)(param_2 + 0x1d0) = fVar1;
  if (*(code **)(param_2 + 0x120) != (code *)0x0) {
    local_38 = fVar5;
    fStack_34 = fVar5;
    (**(code **)(param_2 + 0x120))(param_2 + 0x140,&fStack_34,&local_38);
  }
  *(float *)(param_2 + 0x1d4) = fVar5;
  *(uint *)(param_2 + 0x1c0) = param_3;
  *(float *)(param_2 + 0x1c4) = fVar2;
  *(float *)(param_2 + 0x1c8) = fVar5;
  *(float *)(param_2 + 0x1cc) = fVar6;
  return;
}


