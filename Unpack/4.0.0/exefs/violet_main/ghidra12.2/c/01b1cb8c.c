/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b1cb8c; name: FUN_01b1cb8c
 */


void FUN_01b1cb8c(undefined8 param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined8 local_18;
  
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = &LAB_01b1d8e4;
  if (DAT_048043a8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01b1d980(param_1,puVar1,0,&local_18);
  return;
}


