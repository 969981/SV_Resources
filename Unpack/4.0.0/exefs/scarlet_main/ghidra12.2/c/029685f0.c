/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029685f0; name: FUN_029685f0
 */


void FUN_029685f0(long param_1,undefined4 param_2)

{
  char cVar1;
  long *plVar2;
  undefined4 local_28;
  undefined2 local_24;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  local_24 = 3;
  local_28 = param_2;
  cVar1 = (**(code **)(*plVar2 + 0x540))(plVar2,3);
  local_24 = CONCAT11(cVar1 + '\x01',(undefined1)local_24);
  FUN_02940be0(param_1,&local_28);
  return;
}


