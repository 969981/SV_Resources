/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029771b0; name: FUN_029771b0
 */


bool FUN_029771b0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  long *local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  bVar1 = true;
  local_38 = 0;
  local_30 = 0;
  local_28 = 1;
  local_40 = param_2;
  cVar2 = FUN_0293dbf0(param_1,&local_40);
  if (cVar2 != '\0') {
    sVar3 = (**(code **)(*param_2 + 0x230))(param_2);
    bVar1 = sVar3 != 0;
  }
  return bVar1;
}


