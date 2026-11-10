/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01561158; name: FUN_01561158
 */


void FUN_01561158(float param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong local_70 [2];
  
  fVar6 = (float)param_2;
  fVar12 = *(float *)(param_5 + 8);
  fVar13 = *(float *)(param_5 + 0xc);
  fVar10 = *(float *)(param_5 + 0x10);
  fVar11 = *(float *)(param_5 + 0x14);
  iVar2 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      fVar7 = (float)param_2;
      fVar4 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),iVar2);
      fVar8 = param_3 * 0.5;
      param_3 = param_4 * 0.5;
      fVar5 = ABS((fVar13 + fVar6) - fVar7);
      fVar9 = fVar11 * 0.5 + param_3;
      param_2 = (ulong)(uint)fVar9;
      bVar1 = false;
      if ((ABS((fVar12 + param_1) - fVar4) < fVar10 * 0.5 + fVar8) &&
         (bVar1 = false, !NAN(fVar5) && !NAN(fVar9))) {
        bVar1 = fVar5 < fVar9;
      }
      if (bVar1) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),iVar2);
        param_2 = CONCAT44(fVar7 - fVar6,fVar4 - param_1);
        local_70[1] = 0;
        local_70[0] = param_2;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))(*(long **)(param_5 + 0x18),iVar2,local_70)
        ;
      }
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (iVar2 < iVar3);
  }
  return;
}


