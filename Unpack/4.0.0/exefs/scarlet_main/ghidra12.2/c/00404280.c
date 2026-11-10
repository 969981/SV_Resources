/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00404280; name: FUN_00404280
 */


undefined8 FUN_00404280(undefined4 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((param_3 == 0) || (lVar2 = FUN_0040c210(param_3), lVar2 == 0)) {
    uVar5 = 0x7c;
    uVar6 = 0x1f;
  }
  else {
    iVar1 = FUN_0040d5a0();
    if ((iVar1 == 0) || (iVar1 = FUN_0040d580(lVar2), iVar1 == 0)) {
      piVar4 = (int *)FUN_003df280();
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      iVar1 = FUN_00405c40(param_3,piVar4 + 2);
      *piVar4 = iVar1;
      if (0 < iVar1) {
        uVar7 = 0x10;
        *param_2 = (long)piVar4;
        goto LAB_00404340;
      }
      FUN_003df2e0(piVar4);
      uVar6 = 0x42;
      uVar5 = 0x10;
    }
    else {
      lVar2 = FUN_0045bc10();
      if ((lVar2 != 0) && (lVar3 = FUN_0045cdb0(lVar2), lVar3 != 0)) {
        *param_2 = lVar2;
        uVar7 = 6;
LAB_00404340:
        *param_1 = uVar7;
        return 1;
      }
      FUN_003dffa0(lVar2);
      uVar5 = 0xa7;
      uVar6 = 0x2a;
    }
  }
  FUN_004806c0(0x10,0xdf,uVar5,"external/openssl/crypto/ec/ec_ameth.c",uVar6);
  return 0;
}


