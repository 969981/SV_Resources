/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01691358; name: FUN_01691358
 */


void FUN_01691358(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [32];
  long *local_40;
  undefined4 local_4;
  
  puVar1 = &LAB_00a0decc;
  if (DAT_048310f8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_3;
  FUN_016913d0(auStack_60,param_2,puVar1,0,&local_4);
  FUN_01691500(param_1,auStack_60);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


