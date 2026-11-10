/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017344c0; name: FUN_017344c0
 */


void FUN_017344c0(long param_1)

{
  uint uVar1;
  float fVar2;
  float local_28;
  float fStack_24;
  
  uVar1 = *(int *)(param_1 + 0x1bc) + 1;
  *(uint *)(param_1 + 0x1bc) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x1c0)) {
    fVar2 = (float)FUN_02166aa8(param_1 + 0x10);
    local_28 = *(float *)(param_1 + 0x1d4);
    *(float *)(param_1 + 0x1d8) = fVar2 - local_28;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      fStack_24 = fVar2;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar2;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_28 = *(float *)(param_1 + 0x1d4);
      fStack_24 = fVar2;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar2;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}


