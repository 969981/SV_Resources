/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226efe4; name: FUN_0226efe4
 */


void FUN_0226efe4(long param_1,uint param_2,SixAxisSensorState *param_3)

{
  SixAxisSensorHandle *pSVar1;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    if (param_2 != 3) goto joined_r0x0226f038;
    break;
  case 3:
    if (param_2 == 2) {
      pSVar1 = (SixAxisSensorHandle *)(param_1 + 0x1c);
      goto LAB_0226f020;
    }
    if (param_2 != 1) {
      return;
    }
    break;
  case 4:
    if (1 < param_2) {
      return;
    }
    break;
  case 5:
    param_2 = param_2 & 0xfffffffd;
joined_r0x0226f038:
    if (param_2 != 0) {
switchD_0226f00c_default:
      return;
    }
    break;
  default:
    goto switchD_0226f00c_default;
  }
  pSVar1 = (SixAxisSensorHandle *)(param_1 + 0x18);
LAB_0226f020:
  nn::hid::GetSixAxisSensorState(param_3,pSVar1);
  return;
}


