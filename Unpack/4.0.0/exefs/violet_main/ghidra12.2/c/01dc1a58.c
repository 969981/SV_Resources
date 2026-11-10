/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc1a58; name: FUN_01dc1a58
 */


float FUN_01dc1a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  long *local_68;
  long *local_60;
  long *local_58;
  
  local_58 = *(long **)(param_1 + 0x6cd0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x58))();
  }
  fVar1 = (float)FUN_014a3d64(&local_58,param_2);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x60))();
  }
  local_60 = *(long **)(param_1 + 0x6cd0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x58))();
  }
  fVar2 = (float)FUN_014a3d64(&local_60,param_3);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  local_68 = *(long **)(param_1 + 0x6cd0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x58))();
  }
  FUN_014a3d64(&local_68,param_4);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  return fVar2 - fVar1;
}


