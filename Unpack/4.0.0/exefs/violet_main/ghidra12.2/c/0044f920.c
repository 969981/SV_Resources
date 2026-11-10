/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0044f920; name: FUN_0044f920
 */


undefined8 FUN_0044f920(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  byte *local_38;
  byte local_24 [4];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = strtoul(param_1,(char **)&local_38,10);
  if (((local_38 != (byte *)0x0) && (*local_38 != 0)) && (param_1 + param_2 < local_38)) {
    return 0;
  }
  if ((long)uVar1 < 0) {
    FUN_004806c0(0xd,0xb6,0xbb,"external/openssl/crypto/asn1/asn1_gen.c",0x168);
    return 0;
  }
  *param_3 = (int)uVar1;
  if ((local_38 == (byte *)0x0) || ((int)param_1 - (int)local_38 == -param_2)) {
switchD_0044f9b4_caseD_43:
    uVar2 = 0x80;
  }
  else {
    local_24[0] = *local_38;
    switch(local_24[0]) {
    case 0x41:
      uVar2 = 0x40;
      break;
    default:
      local_24[1] = 0;
      FUN_004806c0(0xd,0xb6,0xba,"external/openssl/crypto/asn1/asn1_gen.c",0x187);
      FUN_00481380(2,"Char=",local_24);
      return 0;
    case 0x43:
      goto switchD_0044f9b4_caseD_43;
    case 0x50:
      uVar2 = 0xc0;
      break;
    case 0x55:
      *param_4 = 0;
      return 1;
    }
  }
  *param_4 = uVar2;
  return 1;
}


