/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f2f314; name: FUN_01f2f314
 */


void FUN_01f2f314(long param_1,byte param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_2 < 0x18) && (*(ulong *)(param_3 + 0x10) < 0x20)) {
    local_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_48 = 0;
    local_58 = 0;
    snprintf((char *)&local_58,0x20,"%s",*(undefined8 *)(param_3 + 8));
    lVar1 = param_1 + (ulong)param_2 * 0x30;
    if (*(char *)(lVar1 + 0x80) == '\0') {
      local_38 = param_4;
      memcpy((undefined8 *)(lVar1 + 0x88),&local_58,0x28);
      *(char *)(lVar1 + 0x80) = '\x01';
    }
    else {
      *(undefined8 *)(lVar1 + 0x88) = local_58;
      *(undefined8 *)(lVar1 + 0x90) = local_50;
      *(undefined8 *)(lVar1 + 0x98) = local_48;
      *(undefined8 *)(lVar1 + 0xa0) = local_40;
      *(undefined8 *)(param_1 + (ulong)param_2 * 0x30 + 0xa8) = param_4;
    }
  }
  return;
}


