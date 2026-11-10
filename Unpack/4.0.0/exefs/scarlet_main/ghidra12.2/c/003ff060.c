/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ff060; name: FUN_003ff060
 */


bool FUN_003ff060(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  FUN_003ed410(param_5);
  if (param_1 == 0) {
    param_1 = FUN_003ed5c0(param_5);
  }
  if (param_2 == 0) {
    param_2 = FUN_003ed5c0(param_5);
  }
  uVar5 = FUN_003ed5c0(param_5);
  lVar6 = FUN_003ed5c0(param_5);
  bVar1 = false;
  if (lVar6 != 0) {
    iVar2 = FUN_003ebf10(param_3,param_4);
    if (iVar2 < 0) {
      FUN_003eb9f0(param_1,0);
      lVar6 = FUN_003eb8f0(param_2,param_3);
      bVar1 = lVar6 != 0;
    }
    else {
      iVar3 = FUN_003eb2b0(param_3);
      iVar2 = *(int *)(param_4 + 0x30) * 2;
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      if (iVar2 != *(int *)(param_4 + 0x34)) {
        FUN_003ed410(param_5);
        lVar7 = FUN_003ed5c0(param_5);
        if ((lVar7 == 0) || (iVar4 = FUN_003ec020(lVar7,iVar2), iVar4 == 0)) {
          iVar3 = -1;
        }
        else {
          iVar4 = FUN_003ed910(param_4 + 0x18,0,lVar7,param_4,param_5);
          if (iVar4 == 0) {
            iVar3 = -1;
          }
        }
        FUN_003ed530(param_5);
        *(int *)(param_4 + 0x34) = iVar3;
      }
      if ((((iVar3 != -1) &&
           (iVar3 = FUN_003f23a0(uVar5,param_3,*(undefined4 *)(param_4 + 0x30)), iVar3 != 0)) &&
          (iVar3 = FUN_003f1d10(lVar6,uVar5,param_4 + 0x18,param_5), iVar3 != 0)) &&
         (iVar2 = FUN_003f23a0(param_1,lVar6,iVar2 - *(int *)(param_4 + 0x30)), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar2 = FUN_003f1d10(lVar6,param_4,param_1,param_5);
        if ((iVar2 != 0) && (iVar2 = FUN_003f05a0(param_2,param_3,lVar6), iVar2 != 0)) {
          iVar2 = 4;
          *(undefined4 *)(param_2 + 0x10) = 0;
          do {
            iVar3 = FUN_003ebf10(param_2,param_4);
            if (iVar3 < 0) {
              iVar2 = FUN_003eb480(param_2);
              if (iVar2 == 0) {
                uVar8 = *(undefined4 *)(param_3 + 0x10);
              }
              else {
                uVar8 = 0;
              }
              *(undefined4 *)(param_2 + 0x10) = uVar8;
              bVar1 = true;
              *(uint *)(param_1 + 0x10) = *(uint *)(param_4 + 0x10) ^ *(uint *)(param_3 + 0x10);
              break;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) {
              FUN_004806c0(3,0x82,0x65,"external/openssl/crypto/bn/bn_recp.c",0x95);
              goto LAB_003ff288;
            }
            iVar3 = FUN_003f05a0(param_2,param_2,param_4);
            if (iVar3 == 0) goto LAB_003ff288;
            iVar3 = FUN_003f2e00(param_1,1);
            bVar1 = false;
          } while (iVar3 != 0);
          goto LAB_003ff28c;
        }
      }
LAB_003ff288:
      bVar1 = false;
    }
  }
LAB_003ff28c:
  FUN_003ed530(param_5);
  return bVar1;
}


