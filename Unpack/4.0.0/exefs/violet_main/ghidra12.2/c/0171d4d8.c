/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0171d4d8; name: FUN_0171d4d8
 */


uint FUN_0171d4d8(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  switch(param_2) {
  case 1:
    pcStack_28 = "0550_glad01";
    local_30 = 0x27741f968e4bbbfd;
    goto LAB_0171d520;
  case 2:
    local_30 = 0x758a9783b17c2e36;
    pcStack_28 = "0560_notice01";
    local_20 = 0xd;
    break;
  case 3:
    pcStack_28 = "0563_hate01";
    local_30 = 0xef83efd1d0f31925;
LAB_0171d520:
    local_20 = 0xb;
    break;
  case 4:
    local_30 = 0x733663e7c8c1b2e1;
    pcStack_28 = "0320_refresh01";
    local_20 = 0xe;
    break;
  default:
    uVar1 = 0;
    goto LAB_0171d534;
  }
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_0171d534:
  return uVar1 & 1;
}


