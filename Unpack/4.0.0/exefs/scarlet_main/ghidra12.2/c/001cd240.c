/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cd240; name: FUN_001cd240
 */


void FUN_001cd240(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  long lStack_20;
  long local_18;
  
  lStack_20 = 0;
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  uStack_30 = param_4[3];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_001cd2ac(&local_28,&LAB_001ce360,param_3,&local_48);
  if ((iVar1 != -1) && (local_18 != 0)) {
    if (local_18 == lStack_20) {
      local_28[-1] = 0;
    }
    else {
      *local_28 = 0;
    }
  }
  return;
}


