/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01195bb4; name: FUN_01195bb4
 */


void FUN_01195bb4(undefined8 *param_1,long param_2,int param_3)

{
  if (param_3 == 0) {
switchD_01195bec_default:
    param_2 = param_2 + 0x38;
  }
  else {
    switch(param_3) {
    case 1:
      param_2 = param_2 + 0x48;
      break;
    case 2:
      param_2 = param_2 + 0x58;
      break;
    case 3:
      param_2 = param_2 + 0x78;
      break;
    case 4:
      param_2 = param_2 + 0x68;
      break;
    case 5:
      param_2 = param_2 + 0x88;
      break;
    case 6:
      param_2 = param_2 + 0x98;
      break;
    default:
      goto switchD_01195bec_default;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00f3e8f8(param_1,param_2);
  return;
}


