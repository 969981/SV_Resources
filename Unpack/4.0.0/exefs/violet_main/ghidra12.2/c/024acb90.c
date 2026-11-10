/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024acb90; name: FUN_024acb90
 */


void FUN_024acb90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_38;
  
  FUN_024acc84();
  uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),0x50,0x10);
  FUN_024acd68(uVar1,param_4,param_2 + 0x18,*(undefined8 *)(param_2 + 0x28));
  local_38 = *(long *)(param_2 + 0x28);
  if (local_38 == 0) {
    local_38 = FUN_024a7940();
  }
  *param_1 = uVar1;
  FUN_024ace6c(param_1 + 1,uVar1,param_2,&local_38);
  return;
}


