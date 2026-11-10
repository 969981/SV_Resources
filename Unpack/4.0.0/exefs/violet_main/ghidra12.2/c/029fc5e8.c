/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


