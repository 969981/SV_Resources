/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029cbc38; name: FUN_029cbc38
 */


void FUN_029cbc38(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  long local_18;
  
  *param_1 = &PTR_FUN_04607348;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_18 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_18 = 0;
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar2);
      local_18 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(param_1 + 1,&local_18);
  return;
}


