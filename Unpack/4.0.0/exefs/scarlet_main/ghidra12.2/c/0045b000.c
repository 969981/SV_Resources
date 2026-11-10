/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b000; name: FUN_0045b000
 */


char * FUN_0045b000(byte *param_1,long param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    pcVar2 = (char *)FUN_00452ce0(1,"external/openssl/crypto/o_str.c",200);
    return pcVar2;
  }
  pcVar2 = (char *)FUN_00452c30(param_2 * 3,"external/openssl/crypto/o_str.c",0xcb);
  if (pcVar2 == (char *)0x0) {
    FUN_004806c0(0xf,0x75,0x41,"external/openssl/crypto/o_str.c",0xcc);
    return (char *)0x0;
  }
  pcVar4 = pcVar2;
  if (0 < param_2) {
    pcVar3 = pcVar2;
    do {
      pcVar4 = pcVar3 + 3;
      *pcVar3 = "0123456789ABCDEF"[*param_1 >> 4];
      bVar1 = *param_1;
      pcVar3[2] = ':';
      pcVar3[1] = "0123456789ABCDEF"[(ulong)bVar1 & 0xf];
      param_2 = param_2 + -1;
      pcVar3 = pcVar4;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  pcVar4[-1] = '\0';
  return pcVar2;
}


