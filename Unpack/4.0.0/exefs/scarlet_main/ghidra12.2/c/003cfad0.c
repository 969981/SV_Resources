/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cfad0; name: FUN_003cfad0
 */


undefined8 FUN_003cfad0(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  default:
    FUN_003c3950(param_1,0x50,0x1af,0xec,"external/openssl/ssl/statem/statem_srvr.c",0x416);
    return 0;
  case 0x15:
    *param_3 = PTR_LAB_047cd1c0;
    *param_4 = 3;
    return 1;
  case 0x16:
    *param_3 = PTR_LAB_047cd1c8;
    *param_4 = 2;
    return 1;
  case 0x17:
    *param_3 = PTR_LAB_047cd1d0;
    *param_4 = 0xb;
    return 1;
  case 0x18:
    *param_3 = PTR_LAB_047cd1d8;
    *param_4 = 0xc;
    return 1;
  case 0x19:
    *param_3 = PTR_LAB_047cd1e0;
    *param_4 = 0xd;
    return 1;
  case 0x1a:
    *param_3 = PTR_LAB_047cd1e8;
    *param_4 = 0xe;
    return 1;
  case 0x21:
    *param_3 = PTR_LAB_047cd1f0;
    *param_4 = 4;
    return 1;
  case 0x22:
    *param_3 = PTR_LAB_047cd1f8;
    *param_4 = 0x16;
    return 1;
  case 0x23:
    break;
  case 0x24:
    *param_3 = PTR_LAB_047cd188;
    *param_4 = 0x14;
    return 1;
  case 0x25:
    *param_3 = &LAB_003d1840;
    *param_4 = 8;
    return 1;
  case 0x28:
    *param_3 = PTR_LAB_047cd168;
    *param_4 = 0xf;
    return 1;
  case 0x2a:
    *param_3 = PTR_LAB_047cd190;
    *param_4 = 0x18;
    return 1;
  case 0x2e:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  }
  puVar1 = PTR_LAB_047cd178;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    puVar1 = PTR_LAB_047cd170;
  }
  *param_3 = puVar1;
  *param_4 = 0x101;
  return 1;
}


