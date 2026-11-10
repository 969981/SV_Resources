/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd4d40; name: FUN_01dd4d40
 */


void FUN_01dd4d40(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0x3e7eb23dcb6e8621;
  pcStack_38 = "N_list_temochi_02";
  local_30 = 0x11;
  uStack_28 = 0;
  lVar1 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_40);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_40 = 0xa9aefb5179720017;
  pcStack_38 = "N_box_visible_00";
  local_30 = 0x10;
  uStack_28 = 0;
  lVar1 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_40);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  return;
}


