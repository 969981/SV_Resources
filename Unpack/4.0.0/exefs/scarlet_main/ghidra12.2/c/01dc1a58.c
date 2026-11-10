/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


