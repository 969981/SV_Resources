/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0234fc7c; name: FUN_0234fc7c
 */


void FUN_0234fc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  puVar1 = PTR_FUN_047de900;
  if (DAT_04849108 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = (undefined8 *)FUN_0235588c(param_2);
  local_68 = *puVar2;
  uStack_60 = puVar2[1];
  local_58 = puVar2[2];
  local_50 = (long *)puVar2[3];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  local_48 = puVar2[4];
  uStack_40 = puVar2[5];
  local_38 = (long *)puVar2[6];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  FUN_0235591c(param_1,puVar1,0,&local_68);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


