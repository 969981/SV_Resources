/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146ab00; name: FUN_0146ab00
 */


void FUN_0146ab00(long param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 local_24 [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_4[0] = param_2;
  if (*(char *)(param_1 + 0xa5) == '\0') {
    if (*(char *)(param_1 + 0xa6) == '\0') {
      puVar1 = *(undefined1 **)(param_1 + 0x30);
      if (puVar1 == *(undefined1 **)(param_1 + 0x38)) {
        FUN_028a6904(param_1 + 0x28,local_4);
        return;
      }
    }
    else {
      puVar1 = *(undefined1 **)(param_1 + 0x30);
      if (*(undefined1 **)(param_1 + 0x38) <= puVar1) {
        puVar1 = local_24;
        local_24[0] = param_2;
        goto LAB_0146ab84;
      }
    }
    *puVar1 = param_2;
  }
  else {
    local_8[0] = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    puVar1 = *(undefined1 **)(param_1 + 0x30);
    if (*(undefined1 **)(param_1 + 0x38) <= puVar1) {
      puVar1 = local_8;
LAB_0146ab84:
      FUN_028a66e8(param_1 + 0x28,puVar1);
      return;
    }
    *puVar1 = local_8[0];
  }
  *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
  return;
}


