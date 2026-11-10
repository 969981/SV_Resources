/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038edc0; name: FUN_0038edc0
 */


void FUN_0038edc0(undefined8 param_1,char *param_2,long param_3,uint param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_50;
  long lStack_48;
  char **local_40;
  undefined *puStack_38;
  ulong local_30;
  undefined *puStack_28;
  
  local_50 = param_2;
  lStack_48 = param_3;
  if (((param_3 == 0) || (*param_2 == '[')) ||
     (lVar1 = FUN_00395e80(&local_50,0x3a,0xffffffffffffffff), lVar1 == -1)) {
    pcVar2 = "%s:%d";
    uVar3 = 5;
  }
  else {
    pcVar2 = "[%s]:%d";
    uVar3 = 7;
  }
  local_30 = (ulong)param_4;
  local_40 = &local_50;
  puStack_38 = PTR_FUN_047cd008;
  puStack_28 = PTR_FUN_047cc9c8;
  FUN_00391b20(param_1,pcVar2,uVar3,&local_40,2);
  return;
}


