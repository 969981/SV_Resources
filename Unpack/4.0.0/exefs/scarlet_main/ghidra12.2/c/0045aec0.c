/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045aec0; name: FUN_0045aec0
 */


byte * FUN_0045aec0(char *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  
  sVar5 = strlen(param_1);
  pbVar6 = (byte *)FUN_00452c30(sVar5 >> 1,"external/openssl/crypto/o_str.c",0x9c);
  if (pbVar6 == (byte *)0x0) {
    FUN_004806c0(0xf,0x76,0x41,"external/openssl/crypto/o_str.c",0x9d);
  }
  else {
    pcVar2 = param_1 + 1;
    pbVar8 = pbVar6;
    while (pcVar7 = pcVar2, cVar1 = pcVar7[-1], cVar1 != '\0') {
      pcVar2 = pcVar7 + 1;
      if (cVar1 != ':') {
        if (*pcVar7 == '\0') {
          FUN_004806c0(0xf,0x76,0x67,"external/openssl/crypto/o_str.c",0xa7);
          FUN_00452f80(pbVar6,"external/openssl/crypto/o_str.c",0xa8);
          return (byte *)0x0;
        }
        uVar3 = FUN_0045ae90();
        uVar4 = FUN_0045ae90(cVar1);
        if ((int)(uVar4 | uVar3) < 0) {
          FUN_00452f80(pbVar6,"external/openssl/crypto/o_str.c",0xae);
          FUN_004806c0(0xf,0x76,0x66,"external/openssl/crypto/o_str.c",0xaf);
          return (byte *)0x0;
        }
        *pbVar8 = (byte)uVar3 | (byte)(uVar4 << 4);
        pcVar2 = pcVar7 + 2;
        pbVar8 = pbVar8 + 1;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pbVar8 - (long)pbVar6;
    }
  }
  return pbVar6;
}


