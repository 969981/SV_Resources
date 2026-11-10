/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ce584; name: FUN_001ce584
 */


long FUN_001ce584(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_50 = *param_2;
  local_48 = param_2[1];
  uStack_40 = param_2[2];
  local_38 = param_2[3];
  local_30 = 0;
  iVar1 = FUN_001cd2ac(&local_30,FUN_001ce4dc,param_1,&local_50);
  if ((iVar1 == -1) || (local_18 != 0)) {
    if (local_20 != 0) {
      FUN_001ec308(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = FUN_001ec328(&DAT_03c886bc);
  }
  else {
    *(undefined1 *)(local_30 + local_28) = 0;
  }
  return local_30;
}


