/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ce400; name: FUN_001ce400
 */


long FUN_001ce400(undefined8 param_1)

{
  int iVar1;
  undefined1 local_100 [128];
  long local_60;
  long local_58;
  long local_50;
  int local_48;
  
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  iVar1 = FUN_001cd2ac(&local_60,FUN_001ce4dc,param_1,local_100 + 0x80);
  if ((iVar1 == -1) || (local_48 != 0)) {
    if (local_50 != 0) {
      FUN_001ec308(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = FUN_001ec328(&DAT_03c886bc);
  }
  else {
    *(undefined1 *)(local_60 + local_58) = 0;
  }
  return local_60;
}


