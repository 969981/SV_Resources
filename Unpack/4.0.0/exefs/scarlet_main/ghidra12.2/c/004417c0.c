/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004417c0; name: FUN_004417c0
 */


undefined8 FUN_004417c0(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0044180c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_003ed1c0();
  if (lVar3 != 0) {
    FUN_003ed410(lVar3);
    uVar2 = FUN_003ed5c0(lVar3);
    lVar4 = FUN_003ed5c0(lVar3);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        lVar5 = FUN_003eb5b0();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_00441928;
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        lVar5 = FUN_003eb5b0();
        *(long *)(param_1 + 0x10) = lVar5;
        if (lVar5 == 0) goto LAB_00441928;
      }
      if (param_3 < 2) {
        FUN_004806c0(5,0x6a,0x65,"external/openssl/crypto/dh/dh_gen.c",0x54);
      }
      else if (param_3 == 5) {
        iVar1 = FUN_003eb9f0(uVar2,0x3c);
        if (iVar1 != 0) {
          uVar6 = 0x17;
          goto LAB_004418d0;
        }
      }
      else {
        if (param_3 == 2) {
          uVar6 = 0x18;
        }
        else {
          uVar6 = 0xc;
        }
        iVar1 = FUN_003eb9f0(uVar2,uVar6);
        if (iVar1 != 0) {
          uVar6 = 0xb;
LAB_004418d0:
          iVar1 = FUN_003eb9f0(lVar4,uVar6);
          if ((((iVar1 != 0) &&
               (iVar1 = FUN_003fc410(*(undefined8 *)(param_1 + 8),param_2,1,uVar2,lVar4,param_4),
               iVar1 != 0)) && (iVar1 = FUN_003fc3a0(param_4,3,0), iVar1 != 0)) &&
             (iVar1 = FUN_003eb9f0(*(undefined8 *)(param_1 + 0x10),param_3), iVar1 != 0)) {
            uVar2 = 1;
            goto LAB_00441948;
          }
        }
      }
    }
  }
LAB_00441928:
  FUN_004806c0(5,0x6a,3,"external/openssl/crypto/dh/dh_gen.c",0x79);
  uVar2 = 0;
LAB_00441948:
  FUN_003ed530(lVar3);
  FUN_003ed280(lVar3);
  return uVar2;
}


