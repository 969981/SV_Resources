/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec8a0; name: FUN_007ec8a0
 */


undefined8 FUN_007ec8a0(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  switch(param_1) {
  case 0x2c:
    return 0x20000;
  default:
    uVar1 = 0;
switchD_007ec8c8_caseD_58:
    return uVar1;
  case 0x30:
    return 0x40000;
  case 0x58:
    goto switchD_007ec8c8_caseD_58;
  case 0x65:
    return 0x40;
  case 0x68:
    return 0x80;
  case 0x74:
    return 0x4000000;
  case 0x75:
    return 0x400000;
  case 0x76:
    return 0x800000;
  case 0x77:
    return 0x2000000;
  case 0x7b:
    return 0x8000;
  case 0x7c:
    return 0x100;
  case 0x80:
    return 0x10000000;
  case 0x81:
    return 0x20000000;
  case 0x98:
    return 0x200000;
  case 0xa0:
    return 0x1000000;
  case 0xa4:
    return 0x400;
  case 0xac:
    return 0x8000000;
  case 0xb0:
    return 0x40000000;
  case 0xb4:
    return 0x80000000;
  }
}


