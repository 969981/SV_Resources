/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a8ffc; name: FUN_028a8ffc
 */


void FUN_028a8ffc(long param_1)

{
  undefined1 *puVar1;
  undefined1 local_24 [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_4[0] = 0x5f;
  if (*(char *)(param_1 + 0xa5) == '\0') {
    if (*(char *)(param_1 + 0xa6) == '\0') {
      puVar1 = *(undefined1 **)(param_1 + 0x48);
      if (puVar1 == *(undefined1 **)(param_1 + 0x50)) {
        FUN_028a6904(param_1 + 0x40,local_4);
        return;
      }
    }
    else {
      local_24[0] = 0x5f;
      puVar1 = *(undefined1 **)(param_1 + 0x48);
      if (*(undefined1 **)(param_1 + 0x50) <= puVar1) {
        puVar1 = local_24;
        goto LAB_028a9080;
      }
    }
    *puVar1 = 0x5f;
    *(undefined1 **)(param_1 + 0x48) = puVar1 + 1;
  }
  else {
    local_8[0] = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),0x5f);
    puVar1 = *(undefined1 **)(param_1 + 0x48);
    if (puVar1 < *(undefined1 **)(param_1 + 0x50)) {
      *puVar1 = local_8[0];
      *(undefined1 **)(param_1 + 0x48) = puVar1 + 1;
      return;
    }
    puVar1 = local_8;
LAB_028a9080:
    FUN_028a66e8(param_1 + 0x40,puVar1);
  }
  return;
}


