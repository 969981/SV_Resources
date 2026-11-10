/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048add0; name: FUN_0048add0
 */


int FUN_0048add0(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,long param_5
                )

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 local_48;
  int local_44;
  long local_38;
  
  local_38 = 0;
  if (param_5 == 0) {
    uVar5 = 0x43;
    uVar6 = 0x62;
LAB_0048aee0:
    FUN_004806c0(0xd,0xc5,uVar5,"external/openssl/crypto/asn1/a_verify.c",uVar6);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    uVar5 = 0xdc;
    uVar6 = 0x67;
    goto LAB_0048aee0;
  }
  lVar3 = FUN_0042bbc0();
  if (lVar3 == 0) {
    uVar5 = 0x41;
    uVar6 = 0x6d;
  }
  else {
    uVar5 = FUN_0045bea0(*param_2);
    iVar1 = FUN_0045d190(uVar5,&local_44,&local_48);
    if (iVar1 == 0) {
      uVar5 = 199;
      uVar6 = 0x73;
    }
    else if (local_44 == 0) {
      if ((*(long *)(param_5 + 0x10) == 0) ||
         (pcVar7 = *(code **)(*(long *)(param_5 + 0x10) + 200), pcVar7 == (code *)0x0)) {
        uVar5 = 199;
        uVar6 = 0x79;
      }
      else {
        iVar2 = (*pcVar7)(lVar3,param_1,param_4,param_2,param_3,param_5);
        if (iVar2 != 2) {
          iVar1 = 0;
          goto LAB_0048b040;
        }
LAB_0048af58:
        iVar1 = FUN_003e3920(param_4,&local_38,param_1);
        if (iVar1 < 1) {
          uVar5 = 0x44;
          uVar6 = 0x9e;
        }
        else {
          if (local_38 != 0) {
            iVar2 = FUN_0043cf50(lVar3,*(undefined8 *)(param_3 + 2),(long)*param_3,local_38,iVar1);
            if (iVar2 < 1) {
              FUN_004806c0(0xd,0xc5,6,"external/openssl/crypto/asn1/a_verify.c",0xaa);
            }
            else {
              iVar2 = 1;
            }
            goto LAB_0048b040;
          }
          uVar5 = 0x41;
          uVar6 = 0xa2;
        }
      }
    }
    else {
      FUN_0045bce0();
      lVar4 = FUN_0043d130();
      if (lVar4 == 0) {
        uVar5 = 0xa1;
        uVar6 = 0x8a;
      }
      else {
        iVar1 = FUN_0043e280(local_48);
        if (iVar1 == **(int **)(param_5 + 0x10)) {
          iVar1 = FUN_0043cae0(lVar3,0,lVar4,0,param_5);
          if (iVar1 == 0) {
            FUN_004806c0(0xd,0xc5,6,"external/openssl/crypto/asn1/a_verify.c",0x95);
            iVar2 = 0;
            iVar1 = 0;
            goto LAB_0048b040;
          }
          goto LAB_0048af58;
        }
        uVar5 = 200;
        uVar6 = 0x90;
      }
    }
  }
  FUN_004806c0(0xd,0xc5,uVar5,"external/openssl/crypto/asn1/a_verify.c",uVar6);
  iVar1 = 0;
  iVar2 = -1;
LAB_0048b040:
  FUN_00453260(local_38,iVar1,"external/openssl/crypto/asn1/a_verify.c",0xaf);
  FUN_0042bbe0(lVar3);
  return iVar2;
}


