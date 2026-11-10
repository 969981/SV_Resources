/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226ee78; name: FUN_0226ee78
 */


void FUN_0226ee78(long param_1,uint param_2)

{
  uint uVar1;
  SixAxisSensorHandle *pSVar2;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    uVar1 = param_2;
    if (param_2 != 3) goto joined_r0x0226eef4;
    break;
  case 3:
    if (param_2 != 2) {
      if (param_2 != 1) goto switchD_0226eec8_default;
      break;
    }
    pSVar2 = (SixAxisSensorHandle *)(param_1 + 0x1c);
    goto LAB_0226eedc;
  case 4:
    if (1 < param_2) goto switchD_0226eec8_default;
    break;
  case 5:
    uVar1 = param_2 & 0xfffffffd;
joined_r0x0226eef4:
    if (uVar1 != 0) goto switchD_0226eec8_default;
    break;
  default:
    goto switchD_0226eec8_default;
  }
  pSVar2 = (SixAxisSensorHandle *)(param_1 + 0x18);
LAB_0226eedc:
  nn::hid::StartSixAxisSensor(pSVar2);
switchD_0226eec8_default:
  *(undefined1 *)(param_1 + (int)param_2 + 0x38) = 1;
  return;
}


