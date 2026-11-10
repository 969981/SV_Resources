/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d2d79c; name: FUN_01d2d79c
 */


uint FUN_01d2d79c(undefined8 param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_20 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_20 = 0;
  }
  puVar1 = PTR_FUN_047d7900;
  if (DAT_0482f068 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01d33248(param_1,puVar1,0,&local_18,&local_20);
  return uVar2 & 1;
}


