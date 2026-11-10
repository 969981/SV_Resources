/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259652c; name: FUN_0259652c
 */


void FUN_0259652c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_30 [8];
  undefined8 local_28;
  
  puVar1 = PTR_FUN_047df830;
  if (DAT_04852038 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02596b58(local_30,param_2,puVar1,0);
  *param_1 = 0;
  if (local_30[0] != '\0') {
    *(undefined8 *)(param_1 + 8) = local_28;
    *param_1 = 1;
  }
  return;
}


