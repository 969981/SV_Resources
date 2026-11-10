/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155bac4; name: FUN_0155bac4
 */


void FUN_0155bac4(float param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_80 [2];
  
  fVar9 = *(float *)(param_5 + 0x10);
  fVar10 = *(float *)(param_5 + 0x14);
  fVar11 = *(float *)(param_5 + 8) + param_1;
  fVar6 = (float)param_2;
  fVar12 = *(float *)(param_5 + 0xc) + fVar6;
  fVar13 = *(float *)(param_5 + 8) + param_3;
  fVar14 = *(float *)(param_5 + 0xc) + param_4;
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      fVar5 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),iVar3);
      fVar8 = fVar9 * 0.5 + param_3 * 0.5;
      param_3 = fVar10 * 0.5 + param_4 * 0.5;
      if ((ABS(fVar13 - fVar5) < fVar8) &&
         (ABS(fVar14 - (float)param_2) < param_3 &&
          (fVar8 <= ABS(fVar11 - fVar5) || param_3 <= ABS(fVar12 - (float)param_2)))) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x20))(*(long **)(param_5 + 0x18),iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (iVar3 < iVar4);
  }
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      fVar8 = (float)param_2;
      fVar5 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),iVar3);
      fVar7 = fVar9 * 0.5 + param_3 * 0.5;
      param_2 = (ulong)(uint)fVar7;
      param_4 = fVar10 * 0.5 + param_4 * 0.5;
      bVar1 = ABS(fVar12 - fVar8) < param_4;
      param_3 = ABS(fVar14 - fVar8);
      bVar2 = ABS(fVar11 - fVar5) < fVar7;
      if ((fVar7 <= ABS(fVar13 - fVar5) || param_4 <= param_3) && (bVar2 && bVar1)) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),iVar3);
      }
      if (bVar2 && bVar1) {
        param_2 = CONCAT44(fVar8 - fVar6,fVar5 - param_1);
        local_80[1] = 0;
        local_80[0] = param_2;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))(*(long **)(param_5 + 0x18),iVar3,local_80)
        ;
      }
      iVar3 = iVar3 + 1;
      iVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (iVar3 < iVar4);
  }
  return;
}


