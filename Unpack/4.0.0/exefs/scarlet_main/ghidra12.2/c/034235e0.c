/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034235e0; name: FUN_034235e0
 */


void FUN_034235e0(float *param_1,float *param_2)

{
  size_t sVar1;
  void *__dest;
  undefined8 uVar2;
  char *__s;
  ulong __n;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = param_2[6];
  param_1[1] = param_2[7];
  param_1[2] = param_2[8];
  fVar3 = *param_2;
  param_1[9] = fVar3;
  fVar4 = param_2[1];
  param_1[10] = fVar4;
  fVar5 = param_2[2];
  fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  param_1[0xb] = fVar5;
  if (fVar6 == 0.0) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
  }
  else {
    fVar6 = 1.0 / fVar6;
    fVar3 = fVar3 * fVar6;
    fVar4 = fVar4 * fVar6;
    param_1[9] = fVar3;
    param_1[10] = fVar4;
    fVar5 = fVar5 * fVar6;
  }
  param_1[0xb] = fVar5;
  fVar6 = param_2[3];
  param_1[6] = fVar6;
  fVar7 = param_2[4];
  param_1[7] = fVar7;
  fVar8 = param_2[5];
  fVar9 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
  param_1[8] = fVar8;
  if (fVar9 == 0.0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar9;
    fVar6 = fVar6 * fVar9;
    fVar7 = fVar7 * fVar9;
    fVar8 = fVar8 * fVar9;
    param_1[6] = fVar6;
    param_1[7] = fVar7;
  }
  param_1[8] = fVar8;
  param_1[3] = fVar7 * fVar5 - fVar8 * fVar4;
  param_1[4] = fVar8 * fVar3 - fVar6 * fVar5;
  param_1[5] = fVar6 * fVar4 - fVar7 * fVar3;
  uVar2 = *(undefined8 *)(param_2 + 9);
  param_1[0xe] = param_2[0xb];
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  __s = *(char **)(param_2 + 0xe);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x12) != '\0')) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  *(char **)(param_1 + 0x10) = __s;
  if ((__s != (char *)0x0) && (*(char *)(param_1 + 0x12) == '\0')) {
    sVar1 = strlen(__s);
    if ((int)sVar1 == 0) {
      param_1[0x10] = 0.0;
      param_1[0x11] = 0.0;
    }
    else {
      __n = (ulong)((int)sVar1 + 1);
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,__n);
      *(void **)(param_1 + 0x10) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


