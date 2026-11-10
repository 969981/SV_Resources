/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02760f68; name: FUN_02760f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02760f68(float *param_1,float param_2,long param_3,long param_4,void *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_3 + 0x2d0) != '\0') {
    if (*(char *)(param_4 + 0x91) != '\0') {
      *(undefined2 *)(param_4 + 0x90) = 1;
      if (*(int *)(param_4 + 0xd8) == 1) {
        FUN_00d900b4(local_60,*(undefined4 *)(param_4 + 0xd4),param_4);
      }
      else if (*(int *)(param_4 + 0xd8) == 0) {
        FUN_015ed920(local_60,*(undefined4 *)(param_4 + 0xd4),param_4);
      }
      else {
        local_60[0] = 0;
        local_50 = 0;
        uStack_48 = 0;
        uStack_38 = _UNK_03caa728;
        local_40 = _DAT_03caa720;
      }
      memcpy((void *)(param_4 + 0xa0),local_60,0x30);
    }
    fVar4 = *(float *)(param_3 + 0x430) - param_2;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920929e-07 < *(float *)(param_3 + 0x430)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.1920929e-07;
        bVar2 = fVar4 == 1.1920929e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (*(char *)((long)param_5 + 0x91) != '\0')) {
      *(undefined2 *)((long)param_5 + 0x90) = 1;
      if (*(int *)((long)param_5 + 0xd8) == 1) {
        FUN_00d900b4(local_60,*(undefined4 *)((long)param_5 + 0xd4),param_5);
      }
      else if (*(int *)((long)param_5 + 0xd8) == 0) {
        FUN_015ed920(local_60,*(undefined4 *)((long)param_5 + 0xd4),param_5);
      }
      else {
        local_60[0] = 0;
        local_50 = 0;
        uStack_48 = 0;
        uStack_38 = _UNK_03caa728;
        local_40 = _DAT_03caa720;
      }
      memcpy((void *)((long)param_5 + 0xa0),local_60,0x30);
    }
  }
  fVar4 = *(float *)(param_3 + 0x430);
  fVar7 = fVar4 - param_2;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920929e-07 < fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 < 1.1920929e-07;
      bVar2 = fVar7 == 1.1920929e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    memcpy(param_1,(void *)(param_4 + 0xa0),0x30);
    memcpy(param_1 + 0xc,param_5,0x150);
    return;
  }
  if (fVar4 < 1.1920929e-07) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_3 + 0x438) * 8))
                             (param_2 / fVar4);
    fVar4 = fVar4 + 0.0;
  }
  uVar6 = *(undefined8 *)((long)param_5 + 0xb0);
  uVar10 = *(undefined8 *)((long)param_5 + 200);
  uVar9 = *(undefined8 *)((long)param_5 + 0xc0);
  fVar15 = (float)*(undefined8 *)(param_4 + 0xc0);
  fVar16 = (float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_4 + 200);
  fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 200) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_4 + 0xb0);
  fVar12 = (float)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_4 + 0xb8);
  fVar14 = (float)((ulong)*(undefined8 *)(param_4 + 0xb8) >> 0x20);
  fVar19 = *(float *)((long)param_5 + 0xa0);
  fVar5 = *(float *)((long)param_5 + 0xa4);
  fVar8 = *(float *)(param_4 + 0xa0);
  fVar7 = *(float *)(param_4 + 0xa4);
  *(ulong *)(param_1 + 6) =
       CONCAT44(fVar14 + ((float)((ulong)*(undefined8 *)((long)param_5 + 0xb8) >> 0x20) - fVar14) *
                         fVar4,
                fVar13 + ((float)*(undefined8 *)((long)param_5 + 0xb8) - fVar13) * fVar4);
  *(ulong *)(param_1 + 4) =
       CONCAT44(fVar12 + ((float)((ulong)uVar6 >> 0x20) - fVar12) * fVar4,
                fVar11 + ((float)uVar6 - fVar11) * fVar4);
  *(ulong *)(param_1 + 10) =
       CONCAT44(fVar18 + ((float)((ulong)uVar10 >> 0x20) - fVar18) * fVar4,
                fVar17 + ((float)uVar10 - fVar17) * fVar4);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar16 + ((float)((ulong)uVar9 >> 0x20) - fVar16) * fVar4,
                fVar15 + ((float)uVar9 - fVar15) * fVar4);
  param_1[1] = (1.0 - fVar4) * fVar7 + fVar4 * fVar5;
  *param_1 = (1.0 - fVar4) * fVar8 + fVar4 * fVar19;
  memcpy(param_1 + 0xc,param_5,0x150);
  return;
}


