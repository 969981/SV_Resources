/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca938; name: FUN_007ca938
 */


void FUN_007ca938(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined *puVar1;
  
  FUN_007c9fac(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  puVar1 = PTR_DAT_047d1150;
  param_1[0x1e] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


