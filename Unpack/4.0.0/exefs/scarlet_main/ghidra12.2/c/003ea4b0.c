/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ea4b0; name: FUN_003ea4b0
 */


long FUN_003ea4b0(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_0049c7e0();
  pcVar3 = strchr(param_2,0x62);
  uVar1 = 0x11;
  if (pcVar3 != (char *)0x0) {
    uVar1 = 1;
  }
  if (lVar2 == 0) {
    piVar5 = __errno_location();
    FUN_004806c0(2,1,*piVar5,"external/openssl/nnsdk/crypto/bio/bss_file.c",0x108);
    FUN_00481380(5,"fopen(\'",param_1,&DAT_03c0fe88,param_2,&DAT_03bfafc6);
    piVar5 = __errno_location();
    uVar6 = 0x80;
    if (*piVar5 != 2) {
      uVar6 = 2;
    }
    FUN_004806c0(0x20,0x6d,uVar6,"external/openssl/nnsdk/crypto/bio/bss_file.c",0x10a);
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_003e8a30(&DAT_044a2670);
    if (lVar4 == 0) {
      FUN_0049c8e0(lVar2);
    }
    else {
      FUN_003e8cb0(lVar4,0);
      FUN_003e9560(lVar4,0x6a,uVar1,lVar2);
    }
  }
  return lVar4;
}


