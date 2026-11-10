/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01920760; name: FUN_01920760
 */


undefined8 FUN_01920760(short *param_1,uint param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  short sVar3;
  
  if (((param_2 == 0) || (sVar3 = *param_1, sVar3 == 0)) ||
     (uVar1 = FUN_01920950(param_1), (uVar1 & 1) == 0)) {
LAB_01920934:
    uVar2 = 0;
  }
  else {
    switch(param_3) {
    case 1:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_01920934;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 2:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_01920934;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 3:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_01920934;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 4:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_01920934;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    default:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if (((param_3 - 1 < 5) || (param_3 == 7)) &&
           ((sVar3 != 0x4edd && ((ushort)(sVar3 + 0xb200U) < 0x51a1)))) goto LAB_01920934;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
    }
  }
  return uVar2;
}


