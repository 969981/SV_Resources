/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ef1d0; name: FUN_012ef1d0
 */


void FUN_012ef1d0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  FUN_012f0c80();
  FUN_012f1430();
  FUN_012f1be0(param_1);
  FUN_012f02c0(param_1);
  FUN_012f23d0(param_1);
  FUN_012f0020();
  FUN_012f06c0(param_1);
  local_40 = 0x3e580bbc202b40d5;
  pcStack_38 = "trinity_ProgressEventTriggerComponent";
  local_30 = 0x25;
  local_28 = (long *)0x0;
  FUN_012ef514(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x7c0bb2f25af31a7f;
  pcStack_38 = "trinity_EventStateEventTriggerComponent";
  local_30 = 0x27;
  local_28 = (long *)0x0;
  FUN_012ef614(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xab75b9d0d42bc375;
  pcStack_38 = "trinity_ScriptComponent";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  FUN_012ef714(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x65841f1d93b160e;
  pcStack_38 = "trinity_LayoutComponent";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  FUN_012ef814(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xcfcf8eb386f320d9;
  pcStack_38 = "trinity_LayoutCommonResourceComponent";
  local_30 = 0x25;
  local_28 = (long *)0x0;
  FUN_012ef914(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x797d0dc763296cf1;
  pcStack_38 = "trinity_TextureBufferComponent";
  local_30 = 0x1e;
  local_28 = (long *)0x0;
  FUN_012efa14(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x9b4c054dcb9c03f6;
  pcStack_38 = "trinity_ParticleComponent";
  local_30 = 0x19;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012eff14(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x2e8f73ffa8aa4cd1;
  pcStack_38 = "trinity_DecalComponent";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  FUN_012efb14(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xb2c8a0bc02220d6c;
  pcStack_38 = "trinity_AtmosphereComponent";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_012efc14(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xce50e1ecfbfae7df;
  pcStack_38 = "trinity_VATComponent";
  local_30 = 0x14;
  local_28 = (long *)0x0;
  FUN_012efd14(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xfc3e1a9748433ddc;
  pcStack_38 = "trinity_ModelInstancerComponent";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  FUN_012efe14(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


