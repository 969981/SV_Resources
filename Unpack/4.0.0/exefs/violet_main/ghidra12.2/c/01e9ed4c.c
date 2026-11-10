/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9ed4c; name: FUN_01e9ed4c
 */


void FUN_01e9ed4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)FUN_01cf7e20();
  FUN_01e9f270(&local_50,param_2,param_3);
  FUN_01e9f308(param_1 + 0x18,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))
              (local_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return;
}


