/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019221e4; name: FUN_019221e4
 */


void FUN_019221e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 local_100 [4];
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  long *local_68;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_100[0] = 0;
  local_a8 = 0;
  local_f8 = &DAT_cbf29ce484222645;
  puStack_f0 = &DAT_03c886bc;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  local_d8 = &DAT_cbf29ce484222645;
  puStack_d0 = &DAT_03c886bc;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  local_a0 = &DAT_cbf29ce484222645;
  puStack_98 = &DAT_03c886bc;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_80 = &DAT_cbf29ce484222645;
  puStack_78 = &DAT_03c886bc;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_40 = &DAT_cbf29ce484222645;
  puStack_38 = &DAT_03c886bc;
  local_30 = 0;
  local_28 = (long *)0x0;
  FUN_019222e8(local_100,param_3);
  FUN_0102e1b0(param_1,param_2,local_100);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  return;
}


