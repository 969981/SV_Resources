/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8fea0; name: FUN_00d8fea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d8fea0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *__src;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    if (*(char *)(param_1 + 0xd1) != '\0') {
      *(undefined2 *)(param_1 + 0xd0) = 1;
      if (*(int *)(param_1 + 0x118) == 1) {
        FUN_00d900b4(local_50,*(undefined4 *)(param_1 + 0x114));
      }
      else if (*(int *)(param_1 + 0x118) == 0) {
        FUN_015ed920(local_50,*(undefined4 *)(param_1 + 0x114),param_1 + 0x40);
      }
      else {
        local_50[0] = 0;
        local_40 = 0;
        uStack_38 = 0;
        uStack_28 = _UNK_03caa728;
        local_30 = _DAT_03caa720;
      }
      memcpy((void *)(param_1 + 0xe0),local_50,0x30);
    }
    fVar4 = *(float *)(param_1 + 0x430) - *(float *)(param_1 + 0x434);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920929e-07 < *(float *)(param_1 + 0x430)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.1920929e-07;
        bVar2 = fVar4 == 1.1920929e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (*(char *)(param_1 + 0x371) != '\0')) {
      *(undefined2 *)(param_1 + 0x370) = 1;
      if (*(int *)(param_1 + 0x3b8) == 1) {
        FUN_00d900b4(local_50,*(undefined4 *)(param_1 + 0x3b4));
      }
      else if (*(int *)(param_1 + 0x3b8) == 0) {
        FUN_015ed920(local_50,*(undefined4 *)(param_1 + 0x3b4),param_1 + 0x2e0);
      }
      else {
        local_50[0] = 0;
        local_40 = 0;
        uStack_38 = 0;
        uStack_28 = _UNK_03caa728;
        local_30 = _DAT_03caa720;
      }
      memcpy((void *)(param_1 + 0x380),local_50,0x30);
    }
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  fVar4 = *(float *)(param_1 + 0x430);
  fVar5 = fVar4 - *(float *)(param_1 + 0x434);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920929e-07 < fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar5)) {
      bVar1 = fVar5 < 1.1920929e-07;
      bVar2 = fVar5 == 1.1920929e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    __src = (void *)(param_1 + 0xe0);
    memcpy((void *)(param_1 + 400),__src,0x30);
  }
  else {
    __src = (void *)(param_1 + 0x380);
    if (fVar4 < 1.1920929e-07) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_1 + 0x438) * 8))
                               (*(float *)(param_1 + 0x434) / fVar4);
      fVar4 = fVar4 + 0.0;
    }
    fVar5 = (float)*(undefined8 *)(param_1 + 0xf0);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
    fVar7 = (float)*(undefined8 *)(param_1 + 0xf8);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x100);
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_1 + 0x108);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x108) >> 0x20);
    *(float *)(param_1 + 400) =
         (1.0 - fVar4) * *(float *)(param_1 + 0xe0) + fVar4 * *(float *)(param_1 + 0x380);
    *(float *)(param_1 + 0x194) =
         (1.0 - fVar4) * *(float *)(param_1 + 0xe4) + fVar4 * *(float *)(param_1 + 900);
    *(ulong *)(param_1 + 0x1a8) =
         CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20) - fVar8) * fVar4
                  ,fVar7 + ((float)*(undefined8 *)(param_1 + 0x398) - fVar7) * fVar4);
    *(ulong *)(param_1 + 0x1a0) =
         CONCAT44(fVar6 + ((float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20) - fVar6) * fVar4
                  ,fVar5 + ((float)*(undefined8 *)(param_1 + 0x390) - fVar5) * fVar4);
    *(ulong *)(param_1 + 0x1b8) =
         CONCAT44(fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 0x3a8) >> 0x20) - fVar12) *
                           fVar4,fVar11 + ((float)*(undefined8 *)(param_1 + 0x3a8) - fVar11) * fVar4
                 );
    *(ulong *)(param_1 + 0x1b0) =
         CONCAT44(fVar10 + ((float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20) - fVar10) *
                           fVar4,fVar9 + ((float)*(undefined8 *)(param_1 + 0x3a0) - fVar9) * fVar4);
  }
  memcpy((void *)(param_1 + 0x1c0),__src,0x30);
  *(undefined1 *)(param_1 + 0x2d1) = 1;
  return;
}


