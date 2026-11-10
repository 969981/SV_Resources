/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf3018; name: FUN_01cf3018
 */


void FUN_01cf3018(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char local_30 [4];
  undefined8 local_2c;
  undefined8 local_8;
  
  puVar1 = &LAB_009f6128;
  if (DAT_0481bcc0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01cf3850(local_30,param_2,puVar1,0);
  if (local_30[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_8 = local_2c;
    FUN_01cf38a0(param_1 + 8,&local_8);
  }
  return;
}


