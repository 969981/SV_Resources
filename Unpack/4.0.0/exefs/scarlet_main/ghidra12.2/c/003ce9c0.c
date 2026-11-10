/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ce9c0; name: FUN_003ce9c0
 */


undefined8 FUN_003ce9c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_003a1e80(param_3,2);
  if (iVar1 == 0) {
    uVar5 = 0x944;
  }
  else {
    if ((param_2 != 0) && (iVar1 = FUN_0047e430(param_2), 0 < iVar1)) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0047e450(param_2,iVar1);
        if ((((lVar4 == 0) || (iVar2 = FUN_0048b9c0(lVar4,0), iVar2 < 0)) ||
            (iVar3 = FUN_003a1ca0(param_3,iVar2,auStack_38,2), iVar3 == 0)) ||
           (iVar3 = FUN_0048b9c0(lVar4,auStack_38), iVar3 != iVar2)) {
          uVar5 = 0x956;
          goto LAB_003ceacc;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0047e430(param_2);
      } while (iVar1 < iVar2);
    }
    iVar1 = FUN_003a1fe0(param_3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar5 = 0x95e;
  }
LAB_003ceacc:
  FUN_003c3950(param_1,0x50,0x228,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar5);
  return 0;
}


