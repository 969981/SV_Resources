/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1272c; name: FUN_01e1272c
 */


uint FUN_01e1272c(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0xb96dc674c4fc54a5;
  pcStack_28 = "0511_stun01_loop";
  local_20 = 0x10;
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30,param_2);
  return uVar1 & 1;
}


