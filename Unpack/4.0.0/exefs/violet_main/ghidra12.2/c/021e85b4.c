/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e85b4; name: FUN_021e85b4
 */


void FUN_021e85b4(undefined8 param_1)

{
  size_t sVar1;
  char local_30 [8];
  undefined1 *local_28;
  
  local_28 = local_30;
  local_30[0] = '\0';
  sVar1 = strlen(local_30);
  builtin_strncpy(local_30 + sVar1,"backup",7);
  FUN_00cf9768(param_1,&local_28);
  return;
}


