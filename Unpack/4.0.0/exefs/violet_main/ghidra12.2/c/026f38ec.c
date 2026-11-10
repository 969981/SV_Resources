/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f38ec; name: FUN_026f38ec
 */


void FUN_026f38ec(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_1 + 0xec) = param_2;
  uVar1 = FUN_026f3950(*(undefined8 *)(param_1 + 0x90),0);
  local_40 = *(undefined4 *)(param_1 + 0xec);
  uStack_3c = local_40;
  local_38 = local_40;
  uStack_34 = local_40;
  local_30 = local_40;
  uStack_2c = local_40;
  local_28 = local_40;
  uStack_24 = local_40;
  FUN_026f3960(*(undefined8 *)(param_1 + 0x90),uVar1,0,&local_40,8);
  return;
}


