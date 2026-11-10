/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012f1be0; name: FUN_012f1be0
 */


void FUN_012f1be0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0xe7d2d8591b038f6d;
  pcStack_38 = "trinity_ModelComponent";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f21ac(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xc64eacca765b2539;
  pcStack_38 = "trinity_Locator";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f22b8(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x54fb1870f837c75;
  pcStack_38 = "trinity_LightApplierComponent";
  local_30 = 0x1d;
  local_28 = (long *)0x0;
  FUN_012f1dac(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x337d6ee837bd6a68;
  pcStack_38 = "trinity_LightDirectApplierComponent";
  local_30 = 0x23;
  local_28 = (long *)0x0;
  FUN_012f1eac(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xc7ba7e4f0b347e2b;
  pcStack_38 = "trinity_AttachmentComponent";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_012f1fac(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xf19dc575f7a65539;
  pcStack_38 = "trinity_EnvironmentParameter";
  local_30 = 0x1c;
  local_28 = (long *)0x0;
  FUN_012f20ac(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


