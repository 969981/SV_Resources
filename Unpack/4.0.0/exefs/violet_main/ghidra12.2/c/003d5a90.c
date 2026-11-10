/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d5a90; name: FUN_003d5a90
 */


undefined8 FUN_003d5a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_a0;
  undefined1 auStack_98 [120];
  
  local_a0 = 0;
  uVar1 = FUN_003f4860(param_3,0x3a,1,&LAB_003d5b10,&local_a0);
  if ((int)uVar1 != 0) {
    if (param_1 == 0) {
      return 1;
    }
    uVar1 = FUN_003d5960(param_1,param_2,auStack_98,local_a0);
  }
  return uVar1;
}


