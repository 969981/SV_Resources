/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c1ce94; name: FUN_01c1ce94
 */


void FUN_01c1ce94(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_12b4;
  undefined1 auStack_12b0 [2376];
  undefined1 auStack_968 [2376];
  
  puVar1 = PTR_LAB_047d5c78;
  if (DAT_04812530 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_12b4 = param_3;
  FUN_01c1e824(auStack_12b0,param_2,puVar1,0,&local_12b4);
  *param_1 = 1;
  memcpy(auStack_968,auStack_12b0,0x948);
  FUN_01c1e8d8(param_1 + 8,auStack_968);
  return;
}


