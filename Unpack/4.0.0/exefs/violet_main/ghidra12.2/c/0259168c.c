/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259168c; name: FUN_0259168c
 */


void FUN_0259168c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047df758;
  if (DAT_04851f80 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = param_3;
  FUN_02592c88(local_40,param_2,puVar1,0,&local_8);
  *param_1 = 0;
  if (local_40[0] != '\0') {
    *(undefined8 *)(param_1 + 0x10) = local_30;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *param_1 = 1;
  }
  return;
}


