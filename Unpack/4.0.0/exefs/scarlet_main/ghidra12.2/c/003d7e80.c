/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d7e80; name: FUN_003d7e80
 */


undefined8 FUN_003d7e80(undefined8 *param_1,long *param_2,ulong *param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 != 0 && (uVar6 & 1) == 0) {
    lVar3 = FUN_00452c30(uVar6 & 0xfffffffffffffffe,"external/openssl/ssl/t1_lib.c",0x713);
    if (lVar3 != 0) {
      uVar4 = 0;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
LAB_003d7f08:
        if (uVar4 != uVar6) {
          FUN_00452f80(lVar3,"external/openssl/ssl/t1_lib.c",0x71b);
          return 0;
        }
      }
      else {
        uVar5 = param_1[1];
        do {
          bVar2 = uVar5 < 2;
          uVar5 = uVar5 - 2;
          if (bVar2) goto LAB_003d7f08;
          uVar1 = *(ushort *)*param_1;
          *param_1 = (ushort *)*param_1 + 1;
          param_1[1] = uVar5;
          *(ushort *)(lVar3 + uVar4 * 2) = uVar1 >> 8 | uVar1 << 8;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      FUN_00452f80(*param_2,"external/openssl/ssl/t1_lib.c",0x71f);
      *param_2 = lVar3;
      *param_3 = uVar6;
      return 1;
    }
    FUN_004806c0(0x14,0x274,0x41,"external/openssl/ssl/t1_lib.c",0x714);
  }
  return 0;
}


