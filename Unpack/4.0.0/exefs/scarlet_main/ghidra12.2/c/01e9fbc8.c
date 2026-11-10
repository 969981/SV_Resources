/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9fbc8; name: FUN_01e9fbc8
 */


void FUN_01e9fbc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  long alStack_80 [4];
  long *local_60;
  undefined8 local_48;
  undefined8 local_28;
  
  local_48 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x238);
  local_28 = local_48;
  local_60 = (long *)FUN_01e9fc70(&local_48,&local_28,param_4);
  FUN_01e9fce0(param_1,param_2,param_3,alStack_80,param_5);
  if (local_60 != (long *)0x0) {
    if (local_60 == alStack_80) {
      pcVar1 = *(code **)(*local_60 + 0x10);
    }
    else {
      pcVar1 = *(code **)(*local_60 + 0x18);
    }
    (*pcVar1)();
  }
  return;
}


