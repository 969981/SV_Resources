/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049aca0; name: FUN_0049aca0
 */


long FUN_0049aca0(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_28;
  
  local_28 = 0;
  if (param_2 == (char *)0x0) {
    uVar5 = 0x6d;
    uVar6 = 0xca;
  }
  else {
    local_28 = FUN_003eb5b0();
    if (local_28 == 0) {
      uVar5 = 0x41;
      uVar6 = 0xcf;
    }
    else {
      cVar1 = *param_2;
      if (cVar1 == '-') {
        param_2 = param_2 + 1;
      }
      if ((*param_2 == '0') && ((byte)(param_2[1] | 0x20U) == 0x78)) {
        param_2 = param_2 + 2;
        iVar3 = FUN_003fb700(&local_28,param_2);
      }
      else {
        iVar3 = FUN_003fb8a0(&local_28,param_2);
      }
      if ((iVar3 != 0) && (param_2[iVar3] == '\0')) {
        if (cVar1 == '-') {
          iVar3 = FUN_003eb480(local_28);
          bVar2 = iVar3 != 0;
        }
        else {
          bVar2 = true;
        }
        lVar4 = FUN_003e10e0(local_28,0);
        FUN_003eb520(local_28);
        if (lVar4 == 0) {
          FUN_004806c0(0x22,0x6c,0x65,"external/openssl/crypto/x509v3/v3_utl.c",0xf0);
          return 0;
        }
        if (bVar2) {
          return lVar4;
        }
        *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x100;
        return lVar4;
      }
      FUN_003eb520(local_28);
      uVar5 = 100;
      uVar6 = 0xe5;
    }
  }
  FUN_004806c0(0x22,0x6c,uVar5,"external/openssl/crypto/x509v3/v3_utl.c",uVar6);
  return 0;
}


