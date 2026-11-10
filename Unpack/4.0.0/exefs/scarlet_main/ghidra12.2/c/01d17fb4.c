/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d17fb4; name: FUN_01d17fb4
 */


void FUN_01d17fb4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_204;
  undefined1 auStack_200 [480];
  
  puVar1 = PTR_FUN_047d7398;
  if (DAT_0482cd18 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_204 = param_3;
  FUN_01d18754(auStack_200,param_2,puVar1,0,&local_204);
  FUN_01d0f100(param_1,auStack_200);
  FUN_01cfa274(auStack_200);
  return;
}


