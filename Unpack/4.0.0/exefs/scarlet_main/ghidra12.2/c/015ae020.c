/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ae020; name: FUN_015ae020
 */


void FUN_015ae020(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0x9e0f07ad81062efd;
  pcStack_38 = "pe_NetworkViewComponent";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  FUN_015ae228(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x6203b1886fed3036;
  pcStack_38 = "pe_NetworkSyncSRTComponent";
  local_30 = 0x1a;
  local_28 = (long *)0x0;
  FUN_015ae534(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x4c5394d452152f1c;
  pcStack_38 = "pe_NetworkSyncAnimComponent";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_015ae634(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x9f5c9f54c39af036;
  pcStack_38 = "pe_NetworkSyncCharaCreateComponent";
  local_30 = 0x22;
  local_28 = (long *)0x0;
  FUN_015ae734(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x1fe8416cafc69542;
  pcStack_38 = "pe_NetworkScriptRPCComponent";
  local_30 = 0x1c;
  local_28 = (long *)0x0;
  FUN_015ae834(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x607b608079cd2913;
  pcStack_38 = "pe_NetworkScriptDataComponent";
  local_30 = 0x1d;
  local_28 = (long *)0x0;
  FUN_015ae934(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x562576d12a06dc0a;
  pcStack_38 = "pe_NetworkEventTriggerComponent";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_015aea34(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


