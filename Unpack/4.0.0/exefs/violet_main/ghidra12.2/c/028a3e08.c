/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a3e08; name: FUN_028a3e08
 */


void FUN_028a3e08(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_028a41e8();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_028a41e8();
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_028a41e8();
  }
  if (*(long *)(param_1 + 0x330) != 0) {
    FUN_028a41e8();
  }
  if (*(long *)(param_1 + 0x408) != 0) {
    FUN_028a41e8();
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x430));
  lVar1 = *(long *)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = 0;
  if (lVar1 != 0) {
    FUN_028a42bc(param_1 + 0x410);
  }
  FUN_012e7480(param_1 + 0x3d0);
  FUN_012e76d0(param_1 + 0x368);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x358));
  lVar1 = *(long *)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (lVar1 != 0) {
    FUN_028a42bc(param_1 + 0x338);
  }
  FUN_012e7480(param_1 + 0x2f8);
  FUN_012e76d0(param_1 + 0x290);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x280));
  lVar1 = *(long *)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (lVar1 != 0) {
    FUN_028a42bc(param_1 + 0x260);
  }
  FUN_012e7480(param_1 + 0x220);
  FUN_012e76d0(param_1 + 0x1b8);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1a8));
  lVar1 = *(long *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (lVar1 != 0) {
    FUN_028a42bc(param_1 + 0x188);
  }
  FUN_012e7480(param_1 + 0x148);
  FUN_012e76d0(param_1 + 0xe0);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd0));
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    FUN_028a42bc(param_1 + 0xb0);
  }
  FUN_012e7480(param_1 + 0x70);
  FUN_012e76d0(param_1 + 8);
  return;
}


