/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0279abe4; name: FUN_0279abe4
 */


void FUN_0279abe4(undefined8 param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xbe699d34b0318b46;
  pcStack_28 = "ToBeaconLoop";
  local_20 = 0xc;
  local_18 = (long *)0x0;
  FUN_0279ac44(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


