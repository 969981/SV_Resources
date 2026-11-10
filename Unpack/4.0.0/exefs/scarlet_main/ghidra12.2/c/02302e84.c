/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02302e84; name: FUN_02302e84
 */


undefined1  [16] FUN_02302e84(undefined1 *param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1._8_8_ = 0x40490fdb;
  auVar1._0_8_ = 0x40490fdb00000000;
  auVar3._8_8_ = 0x40490fdb;
  auVar3._0_8_ = 0x40490fdb00000000;
  switch(*param_1) {
  case 0:
    auVar3 = auVar1;
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
      pauVar2 = (undefined1 (*) [12])(*param_2)();
      auVar3._12_4_ = 0;
      auVar3._0_12_ = *pauVar2;
    }
    break;
  case 1:
    auVar3 = FUN_023030bc(param_1 + 8);
    break;
  case 2:
    auVar3 = FUN_02303108(param_1 + 8);
    break;
  case 3:
    auVar3 = FUN_02303164(param_1 + 8);
  }
  auVar4._0_8_ = auVar3._0_8_;
  auVar4._8_8_ = auVar3._8_8_ & 0xffffffff;
  return auVar4;
}


