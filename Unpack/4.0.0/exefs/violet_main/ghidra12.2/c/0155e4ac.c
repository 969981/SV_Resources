/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155e4ac; name: FUN_0155e4ac
 */


void FUN_0155e4ac(float param_1,long param_2)

{
  code *pcVar1;
  float fVar2;
  undefined4 local_8;
  float local_4;
  
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    fVar2 = *(float *)(param_2 + 0x1a0);
    if (param_1 < fVar2) {
      pcVar1 = *(code **)(param_2 + 0x120);
    }
    else {
      fVar2 = *(float *)(param_2 + 0x1a4);
      pcVar1 = *(code **)(param_2 + 0x120);
      if (param_1 <= fVar2) goto LAB_0155e4e8;
    }
    if (pcVar1 != (code *)0x0) {
      local_8 = *(undefined4 *)(param_2 + 0x1d4);
      local_4 = fVar2;
      (*pcVar1)(param_2 + 0x140,&local_4,&local_8);
    }
  }
  else {
    pcVar1 = *(code **)(param_2 + 0x120);
LAB_0155e4e8:
    if (pcVar1 != (code *)0x0) {
      local_8 = *(undefined4 *)(param_2 + 0x1d4);
      local_4 = param_1;
      (*pcVar1)(param_2 + 0x140,&local_4,&local_8);
    }
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x1d4) = fVar2;
  return;
}


