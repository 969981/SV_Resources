/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bfc00; name: FUN_003bfc00
 */


void FUN_003bfc00(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(lVar1 + 0x30);
    do {
      if ((undefined1 *)puVar4[-4] == &LAB_003bfbd0) {
        FUN_00452f80(puVar4[-2],"external/openssl/ssl/statem/extensions_cust.c",0x149);
        FUN_00452f80(*puVar4,"external/openssl/ssl/statem/extensions_cust.c",0x14a);
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 7;
    } while (uVar3 < uVar2);
    lVar1 = *param_1;
  }
  FUN_00452f80(lVar1,"external/openssl/ssl/statem/extensions_cust.c",0x14c);
  return;
}


