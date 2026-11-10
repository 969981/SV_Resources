/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040fb50; name: FUN_0040fb50
 */


bool FUN_0040fb50(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  FUN_004808e0();
  if (param_5 == 0) {
    param_5 = FUN_003ed1c0();
    lVar10 = param_5;
    if (param_5 == 0) {
      return false;
    }
  }
  else {
    lVar10 = 0;
  }
  FUN_003ed410(param_5);
  uVar5 = FUN_003ed5c0(param_5);
  uVar6 = FUN_003ed5c0(param_5);
  uVar7 = FUN_003ed5c0(param_5);
  lVar8 = FUN_003ed5c0(param_5);
  if (lVar8 != 0) {
    plVar1 = param_1 + 9;
    iVar3 = FUN_00409c50(uVar6,param_3,plVar1);
    if (iVar3 != 0) {
      iVar3 = FUN_003eb480(uVar6);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar6,param_5);
        if ((((iVar3 != 0) &&
             (iVar3 = (**(code **)(*param_1 + 0x118))(param_1,uVar5,param_1[0xd],uVar5,param_5),
             iVar3 != 0)) && (iVar3 = FUN_00409b80(uVar5,param_1[0xc],uVar5), iVar3 != 0)) &&
           (iVar3 = FUN_00409b80(uVar5,uVar6,uVar5), iVar3 != 0)) {
          iVar3 = FUN_0040b360(lVar8,uVar5,plVar1,param_5);
          if (iVar3 == 0) {
            uVar9 = FUN_00480c80();
            if ((uVar9 & 0xff000fff) == 0x3000074) {
              FUN_004808e0();
              uVar5 = 0x6e;
              uVar6 = 0x52;
            }
            else {
              uVar6 = 0x55;
              uVar5 = 3;
            }
            FUN_004806c0(0x10,0xa4,uVar5,"external/openssl/crypto/ec/ec2_oct.c",uVar6);
          }
          else {
            iVar3 = FUN_003ec640(lVar8);
            iVar4 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar6,lVar8,param_5);
            if (iVar4 != 0) {
              if ((param_4 != 0) == (iVar3 == 0)) {
                iVar3 = FUN_00409b80(uVar7,uVar7,uVar6);
                goto joined_r0x0040fd1c;
              }
              goto LAB_0040fc14;
            }
          }
        }
      }
      else {
        iVar3 = FUN_0040b2c0(uVar7,param_1[0xd],plVar1,param_5);
joined_r0x0040fd1c:
        if (iVar3 != 0) {
LAB_0040fc14:
          iVar3 = FUN_0040dbd0(param_1,param_2,uVar6,uVar7,param_5);
          bVar2 = iVar3 != 0;
          goto LAB_0040fd80;
        }
      }
    }
  }
  bVar2 = false;
LAB_0040fd80:
  FUN_003ed530(param_5);
  FUN_003ed280(lVar10);
  return bVar2;
}


