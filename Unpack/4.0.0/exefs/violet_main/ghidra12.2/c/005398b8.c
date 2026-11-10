/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005398b8; name: FUN_005398b8
 */


void FUN_005398b8(undefined8 param_1,undefined8 param_2)

{
  byte local_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)FUN_01cf7e20();
  local_40 = 0;
  uStack_3f = 0;
  FUN_0053991c(param_1,param_2,&local_40);
  if ((local_40 & 1) != 0) {
    (**(code **)(*local_28 + 0x18))
              (local_28,local_30,
               CONCAT62(uStack_3e,CONCAT11(uStack_3f,local_40)) & 0xfffffffffffffffe,1);
  }
  return;
}


