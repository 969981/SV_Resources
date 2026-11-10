/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01728020; name: FUN_01728020
 */


void FUN_01728020(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    bVar1 = FUN_020e8340(param_1,0x10003f003a34000,"savedata.bin");
    *(byte *)(param_1 + 0x38) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_020e8340(param_1,0x100187003a36000,"savedata.bin");
      *(byte *)(param_1 + 0x38) = bVar1 & 1;
    }
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    bVar1 = FUN_020e8340(param_1,0x100abf008968000,&DAT_03c60f6f);
    *(byte *)(param_1 + 0x39) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_020e8340(param_1,0x1008db008c2c000,&DAT_03c60f6f);
      *(byte *)(param_1 + 0x39) = bVar1 & 1;
    }
  }
  if (*(char *)(param_1 + 0x3a) == '\0') {
    bVar1 = FUN_020e8340(param_1,0x100000011d90000,"SaveData.bin");
    *(byte *)(param_1 + 0x3a) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_020e8340(param_1,0x10018e011d92000,"SaveData.bin");
      *(byte *)(param_1 + 0x3a) = bVar1 & 1;
    }
  }
  if (*(char *)(param_1 + 0x3b) == '\0') {
    bVar1 = FUN_020e8340(param_1,0x1001f5010dfa000,&DAT_03c60f6f);
    *(byte *)(param_1 + 0x3b) = bVar1 & 1;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    bVar1 = FUN_020e8340(param_1,0x10015f008c54000,"savedata.bin");
    *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  }
  return;
}


