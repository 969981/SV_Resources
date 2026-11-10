/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03241584; name: FUN_03241584
 */


/* WARNING: Removing unreachable block (ram,0x03241740) */

void FUN_03241584(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  if (fVar1 <= 0.0031308) {
    fVar1 = fVar1 * 12.92;
  }
  else {
    fVar2 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar2 = ((fVar1 + fVar4) / (fVar3 + fVar4)) * fVar2;
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar1 = SQRT(SQRT(fVar2 * ((fVar1 + fVar4) / (fVar3 + fVar4))));
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 1.055 + -0.055;
  }
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  *param_1 = (char)(int)fVar3;
  fVar1 = param_2[1];
  if (fVar1 <= 0.0031308) {
    fVar1 = fVar1 * 12.92;
  }
  else {
    fVar2 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar2 = ((fVar1 + fVar4) / (fVar3 + fVar4)) * fVar2;
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar1 = SQRT(SQRT(fVar2 * ((fVar1 + fVar4) / (fVar3 + fVar4))));
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 1.055 + -0.055;
  }
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  param_1[1] = (char)(int)fVar1;
  fVar1 = param_2[2];
  if (fVar1 <= 0.0031308) {
    fVar1 = fVar1 * 12.92;
  }
  else {
    fVar2 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar2 = ((fVar1 + fVar4) / (fVar3 + fVar4)) * fVar2;
    fVar3 = fVar2 * fVar2 * fVar2;
    fVar4 = fVar1 + fVar3;
    fVar1 = SQRT(SQRT(fVar2 * ((fVar1 + fVar4) / (fVar3 + fVar4))));
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 1.055 + -0.055;
  }
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  param_1[2] = (char)(int)fVar3;
  fVar2 = param_2[3] * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  param_1[3] = (char)(int)fVar3;
  return;
}


