/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbc1b4; name: FUN_00cbc1b4
 */


void FUN_00cbc1b4(long param_1)

{
  undefined4 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 0x378) = 0;
  local_40 = 0xbc071098b7443d50;
  pcStack_38 = "poke_state_int";
  local_30 = 0xe;
  uStack_28 = 0;
  uVar1 = FUN_00d93250((int)param_1,&local_40);
  *(undefined4 *)(param_1 + 0x294) = uVar1;
  return;
}


