/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e587c; name: FUN_028e587c
 */


void FUN_028e587c(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_1c [4];
  long local_18;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  local_1c[0] = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_18 = param_1;
  FUN_00f84c44(*(undefined8 *)(param_1 + 200),&local_18,local_1c,&uStack_28,&local_30);
  return;
}


