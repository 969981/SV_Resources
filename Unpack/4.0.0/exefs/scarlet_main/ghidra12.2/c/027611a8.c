/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027611a8; name: FUN_027611a8
 */


void FUN_027611a8(undefined8 *param_1,float param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *__src;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c0 [112];
  
  if (*(char *)(param_3 + 0x2d1) != '\0') {
    if (*(char *)(param_4 + 0x90) != '\0') {
      *(undefined1 *)(param_4 + 0x90) = 0;
      FUN_00d903c4(auStack_c0,*(undefined4 *)(param_4 + 0xd0),param_4 + 0xa0,1);
      memcpy((void *)(param_4 + 0xe0),auStack_c0,100);
    }
    fVar9 = *(float *)(param_3 + 0x430) - param_2;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920929e-07 < *(float *)(param_3 + 0x430)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar1 = fVar9 < 1.1920929e-07;
        bVar2 = fVar9 == 1.1920929e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (*(char *)(param_5 + 0x90) != '\0')) {
      *(undefined1 *)(param_5 + 0x90) = 0;
      FUN_00d903c4(auStack_c0,*(undefined4 *)(param_5 + 0xd0),param_5 + 0xa0,1);
      memcpy((void *)(param_5 + 0xe0),auStack_c0,100);
    }
  }
  fVar9 = *(float *)(param_3 + 0x430);
  fVar10 = fVar9 - param_2;
  __src = (undefined8 *)FUN_00d8fdd4(param_4);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920929e-07 < fVar9) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 < 1.1920929e-07;
      bVar2 = fVar10 == 1.1920929e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    memcpy(param_1,__src,0x70);
    return;
  }
  puVar4 = (undefined8 *)FUN_00d8fdd4(param_5);
  if (*(float *)(param_3 + 0x430) < 1.1920929e-07) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_3 + 0x438) * 8))
                             (param_2 / *(float *)(param_3 + 0x430));
    fVar9 = fVar9 + 0.0;
  }
  uVar5 = *puVar4;
  fVar10 = (float)*__src;
  fVar6 = (float)((ulong)*__src >> 0x20);
  fVar7 = (float)__src[1];
  fVar8 = (float)((ulong)__src[1] >> 0x20);
  param_1[1] = CONCAT44(fVar8 + ((float)((ulong)puVar4[1] >> 0x20) - fVar8) * fVar9,
                        fVar7 + ((float)puVar4[1] - fVar7) * fVar9);
  *param_1 = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                      fVar10 + ((float)uVar5 - fVar10) * fVar9);
  uVar5 = puVar4[2];
  fVar10 = (float)__src[2];
  fVar6 = (float)((ulong)__src[2] >> 0x20);
  fVar7 = (float)__src[3];
  fVar8 = (float)((ulong)__src[3] >> 0x20);
  param_1[3] = CONCAT44(fVar8 + ((float)((ulong)puVar4[3] >> 0x20) - fVar8) * fVar9,
                        fVar7 + ((float)puVar4[3] - fVar7) * fVar9);
  param_1[2] = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                        fVar10 + ((float)uVar5 - fVar10) * fVar9);
  uVar5 = puVar4[8];
  fVar10 = (float)__src[8];
  fVar6 = (float)((ulong)__src[8] >> 0x20);
  fVar7 = (float)__src[9];
  fVar8 = (float)((ulong)__src[9] >> 0x20);
  param_1[9] = CONCAT44(fVar8 + ((float)((ulong)puVar4[9] >> 0x20) - fVar8) * fVar9,
                        fVar7 + ((float)puVar4[9] - fVar7) * fVar9);
  param_1[8] = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                        fVar10 + ((float)uVar5 - fVar10) * fVar9);
  *(float *)(param_1 + 0xc) =
       (1.0 - fVar9) * *(float *)(__src + 0xc) + fVar9 * *(float *)(puVar4 + 0xc);
  uVar5 = puVar4[4];
  fVar10 = (float)__src[4];
  fVar6 = (float)((ulong)__src[4] >> 0x20);
  fVar7 = (float)__src[5];
  fVar8 = (float)((ulong)__src[5] >> 0x20);
  param_1[5] = CONCAT44(fVar8 + ((float)((ulong)puVar4[5] >> 0x20) - fVar8) * fVar9,
                        fVar7 + ((float)puVar4[5] - fVar7) * fVar9);
  param_1[4] = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                        fVar10 + ((float)uVar5 - fVar10) * fVar9);
  uVar5 = puVar4[6];
  fVar10 = (float)__src[6];
  fVar6 = (float)((ulong)__src[6] >> 0x20);
  fVar7 = (float)__src[7];
  fVar8 = (float)((ulong)__src[7] >> 0x20);
  param_1[7] = CONCAT44(fVar8 + ((float)((ulong)puVar4[7] >> 0x20) - fVar8) * fVar9,
                        fVar7 + ((float)puVar4[7] - fVar7) * fVar9);
  param_1[6] = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                        fVar10 + ((float)uVar5 - fVar10) * fVar9);
  uVar5 = puVar4[10];
  fVar10 = (float)__src[10];
  fVar6 = (float)((ulong)__src[10] >> 0x20);
  fVar7 = (float)__src[0xb];
  fVar8 = (float)((ulong)__src[0xb] >> 0x20);
  param_1[0xb] = CONCAT44(fVar8 + ((float)((ulong)puVar4[0xb] >> 0x20) - fVar8) * fVar9,
                          fVar7 + ((float)puVar4[0xb] - fVar7) * fVar9);
  param_1[10] = CONCAT44(fVar6 + ((float)((ulong)uVar5 >> 0x20) - fVar6) * fVar9,
                         fVar10 + ((float)uVar5 - fVar10) * fVar9);
  return;
}


