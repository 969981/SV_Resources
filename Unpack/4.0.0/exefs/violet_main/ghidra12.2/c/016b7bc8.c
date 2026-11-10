/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b7bc8; name: FUN_016b7bc8
 */


void FUN_016b7bc8(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  
  FUN_00d1a22c(param_1,0xc);
  *param_1 = &PTR_FUN_04601940;
  param_1[4] = &PTR_LAB_04601a88;
  param_1[5] = &DAT_04601bb0;
  param_1[6] = &PTR_LAB_04601c08;
  param_1[7] = &PTR_LAB_04601c30;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x27,0,1);
  *(undefined2 *)(param_1 + 0x29) = 0;
  if (((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
      (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar1 != 0)) &&
     (*(char *)((long)param_2 + uVar1) != '\0')) {
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


