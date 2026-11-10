/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01156270; name: FUN_01156270
 */


void FUN_01156270(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0x77d5798c74cc1c98;
  pcStack_38 = "ti_PokemonModelComponent";
  local_30 = 0x18;
  local_28 = (long *)0x0;
  FUN_01156324(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x92c1e1b5b70d0f6a;
  pcStack_38 = "ti_PokemonModelComponentForSimpleParam";
  local_30 = 0x26;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_01156424(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


