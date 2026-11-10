/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046fd50; name: FUN_0046fd50
 */


undefined8
FUN_0046fd50(int param_1,long *param_2,uint param_3,long *param_4,ulong *param_5,undefined8 param_6,
            ulong param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  long *__s2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *local_60;
  uint local_54;
  
  local_54 = 0;
  local_60 = (void *)0x0;
  iVar1 = FUN_00469640(param_8);
  if ((long)iVar1 != param_7) {
    FUN_004806c0(4,0x91,0x77,"external/openssl/crypto/rsa/rsa_sign.c",0x84);
    return 0;
  }
  __s2 = (long *)FUN_00452c30(param_7,"external/openssl/crypto/rsa/rsa_sign.c",0x89);
  if (__s2 == (long *)0x0) {
    uVar5 = 0x41;
    uVar4 = 0x8b;
    goto LAB_0046ffdc;
  }
  uVar2 = FUN_004696a0(param_7 & 0xffffffff,param_6,__s2,param_8,1);
  if ((int)uVar2 < 1) {
LAB_0046ffe4:
    uVar7 = 0;
  }
  else {
    if (param_1 == 0x72) {
      if (uVar2 == 0x24) {
        if (param_4 != (long *)0x0) {
          lVar8 = __s2[1];
          lVar3 = *__s2;
          lVar10 = __s2[3];
          lVar9 = __s2[2];
          *(int *)(param_4 + 4) = (int)__s2[4];
          param_4[1] = lVar8;
          *param_4 = lVar3;
          param_4[3] = lVar10;
          param_4[2] = lVar9;
          uVar6 = 0x24;
LAB_0046fe10:
          *param_5 = uVar6;
          uVar5 = 1;
          uVar2 = 0;
          goto LAB_0046ffec;
        }
        if (param_3 == 0x24) {
          if (((*__s2 == *param_2 && __s2[1] == param_2[1]) &&
              (__s2[2] == param_2[2] && __s2[3] == param_2[3])) && (int)__s2[4] == (int)param_2[4])
          {
LAB_004700a0:
            uVar2 = 0;
            uVar5 = 1;
            goto LAB_0046ffec;
          }
          uVar5 = 0x68;
          uVar4 = 0xa9;
        }
        else {
          uVar5 = 0x83;
          uVar4 = 0xa4;
        }
      }
      else {
        uVar5 = 0x68;
        uVar4 = 0x9b;
      }
LAB_0046ffdc:
      FUN_004806c0(4,0x91,uVar5,"external/openssl/crypto/rsa/rsa_sign.c",uVar4);
      goto LAB_0046ffe4;
    }
    if ((((param_1 == 0x5f) && (uVar2 == 0x12)) && ((char)*__s2 == '\x04')) &&
       (*(char *)((long)__s2 + 1) == '\x10')) {
      if (param_4 != (long *)0x0) {
        lVar3 = *(long *)((long)__s2 + 2);
        uVar6 = 0x10;
        param_4[1] = *(long *)((long)__s2 + 10);
        *param_4 = lVar3;
        goto LAB_0046fe10;
      }
      if (param_3 == 0x10) {
        if (*param_2 == *(long *)((long)__s2 + 2) && param_2[1] == *(long *)((long)__s2 + 10))
        goto LAB_004700a0;
        uVar5 = 0x68;
        uVar4 = 0xbd;
      }
      else {
        uVar5 = 0x83;
        uVar4 = 0xb8;
      }
      goto LAB_0046ffdc;
    }
    if (param_4 != (long *)0x0) {
      FUN_0045bce0(param_1);
      lVar3 = FUN_0043d130();
      if (lVar3 == 0) {
        uVar5 = 0x75;
        uVar4 = 0xca;
      }
      else {
        param_3 = FUN_0043b720();
        if (param_3 <= uVar2) {
          param_2 = (long *)((long)__s2 + ((ulong)uVar2 - (ulong)param_3));
          goto LAB_0046ff6c;
        }
        uVar5 = 0x8f;
        uVar4 = 0xd0;
      }
      goto LAB_0046ffdc;
    }
LAB_0046ff6c:
    uVar6 = (ulong)param_3;
    iVar1 = FUN_0046fc70(&local_60,&local_54,param_1,param_2,uVar6);
    uVar7 = local_54;
    if (iVar1 != 0) {
      if ((local_54 == uVar2) && (iVar1 = memcmp(local_60,__s2,(ulong)uVar2), iVar1 == 0)) {
        if (param_4 != (long *)0x0) {
          memcpy(param_4,param_2,uVar6);
          *param_5 = uVar6;
        }
        uVar5 = 1;
        goto LAB_0046ffec;
      }
      FUN_004806c0(4,0x91,0x68,"external/openssl/crypto/rsa/rsa_sign.c",0xdc);
    }
  }
  uVar5 = 0;
  uVar2 = uVar7;
LAB_0046ffec:
  FUN_00453260(local_60,(long)(int)uVar2,"external/openssl/crypto/rsa/rsa_sign.c",0xea);
  FUN_00453260(__s2,param_7,"external/openssl/crypto/rsa/rsa_sign.c",0xeb);
  return uVar5;
}


