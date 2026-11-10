/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c5410; name: FUN_029c5410
 */


void FUN_029c5410(float param_1,long param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float local_44;
  
  iVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x30))();
  if (*(long *)(param_2 + 0x48) == 0) {
    fVar4 = (float)(**(code **)(**(long **)(param_2 + 8) + 0x38))();
  }
  else {
    fVar4 = *(float *)(*(long *)(param_2 + 0x48) + 0x28);
  }
  fVar5 = (float)(**(code **)(**(long **)(param_2 + 0x30) + 0x108))();
  fVar4 = fVar4 * fVar5;
  if (fVar4 == 0.0) goto LAB_029c556c;
  if (iVar2 == 1) {
    fVar5 = *(float *)(param_2 + 0x38) + param_1;
LAB_029c5494:
    *(float *)(param_2 + 0x38) = fVar5;
  }
  else {
    if (iVar2 == 0) {
      fVar5 = (float)(**(code **)(**(long **)(param_2 + 0x28) + 0x90))();
      uVar3 = (**(code **)(**(long **)(param_2 + 0x28) + 0x98))();
      fVar5 = *(float *)(param_2 + 0x38) + fVar5 * (float)uVar3 * param_1;
      goto LAB_029c5494;
    }
    fVar5 = *(float *)(param_2 + 0x38);
  }
  fVar5 = fVar5 / fVar4;
  local_44 = param_1 - fVar4;
  local_48 = 0.0;
  pfVar1 = &local_48;
  if (0.0 <= param_1 - fVar4) {
    pfVar1 = &local_44;
  }
  param_1 = *pfVar1;
  if (fVar5 < 1.0) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0xc0))(1.0 - fVar5);
    (**(code **)(**(long **)(param_2 + 0x30) + 0xc0))(fVar5);
                    /* WARNING: Could not recover jumptable at 0x029c551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x30) + 0xa8))
              (param_1,*(long **)(param_2 + 0x30),param_3 & 1);
    return;
  }
LAB_029c556c:
  FUN_00e32be0(param_1,0xbf800000,param_2);
  return;
}


