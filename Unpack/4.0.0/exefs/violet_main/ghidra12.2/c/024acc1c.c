/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024acc1c; name: FUN_024acc1c
 */


void FUN_024acc1c(long param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (*param_2 != 2) {
    puVar1 = (undefined8 *)FUN_024a6a88(param_2,*puVar1);
  }
  local_18 = puVar1;
  FUN_024acf2c(param_1,&local_18,param_2,param_3);
  return;
}


