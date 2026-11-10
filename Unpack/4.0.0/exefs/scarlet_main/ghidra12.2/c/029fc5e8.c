/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fc5e8; name: FUN_029fc5e8
 */


void FUN_029fc5e8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0xd0;
  uVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(uVar2,"hkaiDirectedGraphInstanceData");
  }
  FUN_029fc754(uVar2,param_2);
  *param_1 = uVar2;
  return;
}


