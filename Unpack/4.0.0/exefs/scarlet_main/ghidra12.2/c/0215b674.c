/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215b674; name: FUN_0215b674
 */


void FUN_0215b674(float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar5 = *(undefined4 **)(param_5 + 0x60);
  lVar4 = *(long *)(param_5 + 0x68);
  fVar7 = *(float *)(param_5 + 0x10);
  fVar12 = *(float *)(param_5 + 0x14);
  puVar1 = puVar5;
  if (lVar4 != 0) {
    puVar1 = puVar5 + lVar4 * 0xc;
  }
  fVar10 = *(float *)(param_5 + 8) + param_1;
  fVar11 = *(float *)(param_5 + 0xc) + param_2;
  if (puVar5 != puVar1) {
    fVar8 = fVar7;
    do {
      (**(code **)**(undefined8 **)(param_5 + 0x18))(*(undefined8 **)(param_5 + 0x18),*puVar5);
      fVar8 = fVar7 * 0.5 + fVar8 * 0.5;
      fVar6 = fVar12 * 0.5 + param_4 * 0.5;
      param_4 = ABS(fVar10 - (float)*(undefined8 *)(puVar5 + 8));
      if ((param_4 < fVar8) &&
         (ABS(fVar11 - (float)((ulong)*(undefined8 *)(puVar5 + 8) >> 0x20)) < fVar6 &&
          (fVar8 <= ABS(fVar10 - (float)*(undefined8 *)(puVar5 + 4)) ||
          fVar6 <= ABS(fVar11 - (float)((ulong)*(undefined8 *)(puVar5 + 4) >> 0x20))))) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x20))(*(long **)(param_5 + 0x18),*puVar5);
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar1 != puVar5);
    puVar5 = *(undefined4 **)(param_5 + 0x60);
    lVar4 = *(long *)(param_5 + 0x68);
  }
  puVar1 = puVar5;
  if (lVar4 != 0) {
    puVar1 = puVar5 + lVar4 * 0xc;
  }
  if (puVar5 != puVar1) {
    fVar8 = fVar7 * 0.5;
    do {
      (**(code **)**(undefined8 **)(param_5 + 0x18))(*(undefined8 **)(param_5 + 0x18),*puVar5);
      param_4 = fVar12 * 0.5 + param_4 * 0.5;
      fVar9 = (float)((ulong)*(undefined8 *)(puVar5 + 4) >> 0x20);
      fVar6 = (float)*(undefined8 *)(puVar5 + 4);
      fVar7 = fVar8 + fVar7 * 0.5;
      bVar2 = ABS(fVar11 - fVar9) < param_4;
      bVar3 = ABS(fVar10 - fVar6) < fVar7;
      if ((fVar7 <= ABS(fVar10 - (float)*(undefined8 *)(puVar5 + 8)) ||
           param_4 <= ABS(fVar11 - (float)((ulong)*(undefined8 *)(puVar5 + 8) >> 0x20))) &&
         (bVar3 && bVar2)) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),*puVar5);
      }
      if (bVar3 && bVar2) {
        local_80 = CONCAT44(fVar9 - param_2,fVar6 - param_1);
        uStack_78 = 0;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))
                  (*(long **)(param_5 + 0x18),*puVar5,&local_80);
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar1 != puVar5);
  }
  *(undefined8 *)(param_5 + 0x68) = 0;
  return;
}


