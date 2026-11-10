/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01734574; name: FUN_01734574
 */


void FUN_01734574(long param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float local_24;
  
  uVar1 = *(int *)(param_1 + 0x1bc) + 1;
  *(uint *)(param_1 + 0x1bc) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x1c0)) {
    local_28 = *(float *)(param_1 + 0x1d4);
    fVar4 = local_28 + *(float *)(param_1 + 0x1cc);
    fVar2 = *(float *)(param_1 + 0x1a0);
    fVar3 = *(float *)(param_1 + 0x1a4);
    if (fVar2 <= fVar4) {
      if (fVar3 < fVar4) {
        fVar4 = fVar2 + (fVar4 - fVar3);
      }
    }
    else {
      fVar4 = fVar3 - (fVar4 - fVar2);
    }
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_24 = fVar4;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&local_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar4;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1c4);
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_28 = *(float *)(param_1 + 0x1d4);
      local_24 = fVar2;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&local_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar2;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}


