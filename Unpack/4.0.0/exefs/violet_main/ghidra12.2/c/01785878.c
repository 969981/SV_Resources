/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01785878; name: FUN_01785878
 */


void FUN_01785878(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  undefined8 *puStack_38;
  
  FUN_01785b60();
  param_1[0xe] = 0;
  *param_1 = &DAT_04554e08;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[6] = &PTR_LAB_04554e90;
  param_1[7] = &PTR_LAB_04554ea8;
  param_1[4] = &PTR_LAB_04554e58;
  param_1[5] = &PTR_LAB_04554e78;
  param_1[0xc] = param_1[1];
  param_1[0xd] = 0xfffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar1 = param_1 + 0x10;
  *plVar1 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x13] = param_1[1];
  param_1[0x14] = 0x1fffffffffffffff;
  lVar2 = *plVar1;
  if ((ulong)(param_1[0x12] - lVar2 >> 3) < 8) {
    lVar3 = param_1[0x11];
    local_40 = 0;
    puStack_38 = param_1 + 0x13;
    local_58 = (**(code **)(*(long *)param_1[0x13] + 0x10))((long *)param_1[0x13],0x40,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[0x13] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar3 - lVar2 >> 3) * 8;
    local_40 = local_58 + 0x40;
    local_48 = lStack_50;
    FUN_017859a4(plVar1,&local_58);
    FUN_01785a0c(&local_58);
  }
  return;
}


