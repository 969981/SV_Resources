/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0c9e8; name: FUN_00d0c9e8
 */


void FUN_00d0c9e8(undefined8 param_1)

{
  size_t sVar1;
  char local_30 [4];
  undefined1 auStack_2c [4];
  undefined1 *local_28;
  
  local_28 = local_30;
  local_30[0] = '\0';
  sVar1 = strlen(local_30);
  builtin_strncpy(local_30 + sVar1,"main",4);
  auStack_2c[sVar1] = 0;
  FUN_00cf9768(param_1,&local_28);
  return;
}


