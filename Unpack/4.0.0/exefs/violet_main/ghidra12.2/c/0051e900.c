/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051e900; name: FUN_0051e900
 */


bool FUN_0051e900(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte local_70 [16];
  undefined8 local_60;
  int local_58;
  
  switch(param_2 - param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    param_2 = param_2 + -0x20;
    uVar2 = FUN_0051e02c(param_3,param_2,param_1);
    if ((uVar2 & 1) != 0) {
      local_58 = 0;
      FUN_004fe9d4(local_70,param_1);
                    /* try { // try from 0051e978 to 0051e98f has its CatchHandler @ 0051eb2c */
      FUN_004fe9d4(param_1,param_2);
      FUN_004fe9d4(param_2,local_70);
      if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
    }
    break;
  case 3:
    FUN_0051e180(param_1,param_1 + 0x20,param_2 + -0x20,param_3);
    return true;
  case 4:
    FUN_0051e3c0(param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
    return true;
  case 5:
    FUN_0051e580(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_2 + -0x20,param_3);
    break;
  default:
    FUN_0051e180(param_1,param_1 + 0x20,param_1 + 0x40,param_3);
    puVar1 = PTR_LAB_047cba48;
    if (param_1 + 0x60 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      lVar7 = param_1 + 0x60;
      lVar4 = param_1 + 0x40;
      do {
        lVar3 = lVar7;
        uVar2 = FUN_0051e02c(param_3,lVar3,lVar4);
        if ((uVar2 & 1) != 0) {
          local_58 = 0;
          FUN_004fe9d4(local_70,lVar3);
          lVar7 = lVar5;
          do {
            lVar4 = param_1 + lVar7;
                    /* try { // try from 0051ea5c to 0051ea77 has its CatchHandler @ 0051eb34 */
            FUN_004fe9d4(lVar4 + 0x60,lVar4 + 0x40);
            if (lVar7 == -0x40) {
              lVar7 = param_1;
              goto LAB_0051ea90;
            }
            uVar2 = FUN_0051e02c(param_3,local_70,lVar4 + 0x20);
            lVar7 = lVar7 + -0x20;
          } while ((uVar2 & 1) != 0);
          lVar7 = param_1 + lVar7 + 0x60;
LAB_0051ea90:
                    /* try { // try from 0051ea90 to 0051ea97 has its CatchHandler @ 0051eb30 */
          FUN_004fe9d4(lVar7,local_70);
          iVar6 = iVar6 + 1;
          if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
            FUN_0049e790(puVar1,local_60);
          }
          if (iVar6 == 8) {
            return lVar3 + 0x20 == param_2;
          }
        }
        lVar5 = lVar5 + 0x20;
        lVar7 = lVar3 + 0x20;
        lVar4 = lVar3;
      } while (lVar3 + 0x20 != param_2);
    }
  }
  return true;
}


