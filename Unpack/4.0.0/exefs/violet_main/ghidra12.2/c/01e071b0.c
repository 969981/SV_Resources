/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e071b0; name: FUN_01e071b0
 */


void FUN_01e071b0(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_48;
  undefined8 *puStack_40;
  long local_38;
  undefined8 local_30 [2];
  undefined1 *local_20;
  undefined8 uStack_18;
  
  if ((DAT_04837608 & 1) == 0) {
    local_30[0] = param_2;
    local_20 = param_1;
    uStack_18._4_4_ = param_3;
    iVar1 = __cxa_guard_acquire(&DAT_04837608);
    param_1 = local_20;
    param_2 = local_30[0];
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
      param_1 = local_20;
      param_2 = local_30[0];
    }
  }
  local_48 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  puStack_40 = local_30;
  local_38 = (long)local_30 + 0x2c;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_30[0] = param_2;
  FUN_01e072cc(&local_48,param_1,local_30 + 5,8);
  FUN_01e072cc(&local_48,param_1,local_30 + 5,3);
  return;
}


