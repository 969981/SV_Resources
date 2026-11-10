/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004792d0; name: FUN_004792d0
 */


bool FUN_004792d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = FUN_0040c210();
  uVar5 = FUN_0040d4f0();
  local_60 = 0;
  local_58 = 0;
  lVar6 = FUN_003ed1c0();
  lVar7 = FUN_0040cf10(uVar4);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x12e;
  }
  else {
    FUN_003ed410(lVar6);
    uVar8 = FUN_003ed5c0(lVar6);
    lVar9 = FUN_003ed5c0(lVar6);
    if (lVar9 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x136;
    }
    else {
      FUN_00406030(param_2,&local_58,&local_60);
      uVar1 = local_58;
      uVar10 = FUN_003eb200();
      iVar3 = FUN_003ebf70(uVar1,uVar10);
      uVar1 = local_60;
      if (-1 < iVar3) {
        uVar10 = FUN_003eb200();
        iVar3 = FUN_003ebf70(uVar1,uVar10);
        if (((-1 < iVar3) && (iVar3 = FUN_003ebf70(uVar5,local_58), 0 < iVar3)) &&
           (iVar3 = FUN_003ebf70(uVar5,local_60), 0 < iVar3)) {
          iVar3 = FUN_003f08f0(uVar8,local_58,local_60,uVar5,lVar6);
          if (iVar3 == 0) {
            uVar5 = 0x14f;
LAB_0047948c:
            uVar4 = 3;
          }
          else {
            iVar3 = FUN_003eb480(uVar8);
            uVar1 = local_60;
            if (iVar3 == 0) {
              uVar10 = FUN_0040c290(param_1);
              iVar3 = FUN_0040e430(uVar4,lVar7,uVar1,uVar10,uVar8,lVar6);
              if ((iVar3 != 0) && (iVar3 = FUN_0040dd90(uVar4,lVar7,lVar9,0,lVar6), iVar3 != 0)) {
                iVar3 = FUN_003f08f0(uVar8,param_3,lVar9,uVar5,lVar6);
                if (iVar3 != 0) {
                  iVar3 = FUN_003ebf70(local_58,uVar8);
                  bVar2 = iVar3 == 0;
                  goto LAB_00479448;
                }
                uVar5 = 0x15f;
                goto LAB_0047948c;
              }
              uVar5 = 0x15a;
              uVar4 = 0x10;
            }
            else {
              uVar4 = 0x65;
              uVar5 = 0x154;
            }
          }
          goto LAB_00479440;
        }
      }
      uVar4 = 0x65;
      uVar5 = 0x14a;
    }
  }
LAB_00479440:
  FUN_004806c0(0x35,0x6b,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar5);
  bVar2 = false;
LAB_00479448:
  FUN_0040caf0(lVar7);
  FUN_003ed280(lVar6);
  return bVar2;
}


