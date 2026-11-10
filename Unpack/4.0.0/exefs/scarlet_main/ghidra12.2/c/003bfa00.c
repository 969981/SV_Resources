/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bfa00; name: FUN_003bfa00
 */


undefined8 FUN_003bfa00(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2[1] != 0) {
    lVar2 = FUN_0045ace0(*param_2,param_2[1] * 0x38,"external/openssl/ssl/statem/extensions_cust.c",
                         0x116);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
    uVar5 = param_2[1];
    if (uVar5 != 0) {
      lVar7 = 0;
      bVar1 = false;
      uVar8 = 1;
      while( true ) {
        lVar4 = *param_2 + lVar7;
        if (*(undefined1 **)(lVar4 + 0x10) == &LAB_003bfbd0) {
          if (bVar1) {
            *(undefined8 *)(lVar2 + lVar7 + 0x20) = 0;
            *(undefined8 *)(lVar2 + lVar7 + 0x30) = 0;
            bVar1 = true;
          }
          else {
            uVar3 = FUN_0045ace0(*(undefined8 *)(lVar4 + 0x20),0x18,
                                 "external/openssl/ssl/statem/extensions_cust.c",0x12e);
            lVar2 = lVar2 + lVar7;
            *(undefined8 *)(lVar2 + 0x20) = uVar3;
            lVar4 = FUN_0045ace0(*(undefined8 *)(lVar4 + 0x30),0x10,
                                 "external/openssl/ssl/statem/extensions_cust.c",0x130);
            *(long *)(lVar2 + 0x30) = lVar4;
            bVar1 = lVar4 == 0 || *(long *)(lVar2 + 0x20) == 0;
            uVar5 = param_2[1];
          }
        }
        if (uVar5 <= uVar8) break;
        lVar2 = *param_1;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x38;
      }
      if (bVar1) {
        lVar2 = *param_1;
        uVar5 = param_1[1];
        if (uVar5 != 0) {
          uVar8 = 0;
          puVar6 = (undefined8 *)(lVar2 + 0x30);
          do {
            if ((undefined1 *)puVar6[-4] == &LAB_003bfbd0) {
              FUN_00452f80(puVar6[-2],"external/openssl/ssl/statem/extensions_cust.c",0x149);
              FUN_00452f80(*puVar6,"external/openssl/ssl/statem/extensions_cust.c",0x14a);
              uVar5 = param_1[1];
            }
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 7;
          } while (uVar8 < uVar5);
          lVar2 = *param_1;
        }
        FUN_00452f80(lVar2,"external/openssl/ssl/statem/extensions_cust.c",0x14c);
        return 0;
      }
    }
  }
  return 1;
}


