/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03489adc; name: FUN_03489adc
 */


void FUN_03489adc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_1[4] = param_2[4];
  memcpy(param_1 + 5,param_2 + 5,0x50);
  param_1[0xf] = param_2[0xf];
  if (param_1[0x11] != 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    (**(code **)(*(long *)param_1[0x10] + 0x18))();
    param_1[0x11] = 0;
    *(undefined4 *)((long)param_1 + 0x94) = 0;
  }
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  if ((param_1[0x15] != 0) && (*(char *)(param_1 + 0x16) != '\0')) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))();
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  param_1[0x15] = 0;
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_2[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((long)param_1 + 0x14c) = *(undefined4 *)((long)param_2 + 0x14c);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  FUN_034fd078(param_1 + 0x18,param_2 + 0x18);
  if (param_1[0x25] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
  }
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  return;
}


