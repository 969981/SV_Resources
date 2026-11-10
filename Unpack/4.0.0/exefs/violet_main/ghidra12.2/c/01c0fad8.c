/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0fad8; name: FUN_01c0fad8
 */


void FUN_01c0fad8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_LAB_047d5b98;
  if (DAT_04812518 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c10554(local_48,param_2,puVar1,0);
  if (local_48[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_30 = local_40;
    uStack_28 = uStack_38;
    FUN_01c105c8(param_1 + 8,&local_30);
  }
  return;
}


