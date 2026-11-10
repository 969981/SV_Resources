/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045e0c0; name: FUN_0045e0c0
 */


int FUN_0045e0c0(long *param_1,long param_2,long *param_3,code *param_4,char *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  char acStack_484 [1024];
  undefined1 auStack_84 [64];
  int local_44;
  
  local_44 = (int)*param_3;
  if (0x7fffffff < *param_3) {
    uVar8 = 0x1a6;
    uVar7 = 0x80;
    goto LAB_0045e2e8;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    if (param_5 != (char *)0x0) {
      sVar5 = strlen(param_5);
      uVar2 = (uint)sVar5;
      if (0x3ff < (int)uVar2) {
        uVar2 = 0x400;
      }
      uVar10 = (ulong)uVar2;
      memcpy(acStack_484,param_5,(long)(int)uVar2);
      goto joined_r0x0045e2cc;
    }
    pcVar6 = (char *)FUN_0045f070();
    pcVar1 = "Enter PEM pass phrase:";
    if (pcVar6 != (char *)0x0) {
      pcVar1 = pcVar6;
    }
    iVar3 = FUN_0045f090(acStack_484,0,0x400,pcVar1,0);
    if (iVar3 == 0) {
      uVar10 = strlen(acStack_484);
      uVar2 = (uint)uVar10;
      goto joined_r0x0045e2cc;
    }
    FUN_004806c0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
    memset(acStack_484,0,0x400);
  }
  else {
    uVar4 = (*param_4)(acStack_484,0x400,0,param_5);
    uVar10 = uVar4 & 0xffffffff;
    uVar2 = (uint)uVar4;
joined_r0x0045e2cc:
    if (-1 < (int)uVar2) {
      lVar9 = *param_1;
      uVar7 = FUN_0043bf30();
      iVar3 = FUN_0045f180(lVar9,uVar7,param_1 + 1,acStack_484,uVar10 & 0xffffffff,1,auStack_84,0);
      if (iVar3 == 0) {
        return 0;
      }
      lVar9 = FUN_00439de0();
      if (lVar9 == 0) {
        return 0;
      }
      iVar3 = FUN_0043a9a0(lVar9,*param_1,0,auStack_84,param_1 + 1);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0043a300(lVar9,param_2,&local_44,param_2,local_44), iVar3 != 0)) {
        *param_3 = (long)local_44;
        iVar3 = FUN_0043a720(lVar9,param_2 + local_44,&local_44);
        if (iVar3 != 0) {
          *param_3 = *param_3 + (long)local_44;
          goto LAB_0045e240;
        }
      }
      FUN_004806c0(9,0x6a,0x65,"external/openssl/crypto/pem/pem_lib.c",0x1cd);
      iVar3 = 0;
LAB_0045e240:
      FUN_00439e00(lVar9);
      FUN_00453300(acStack_484,0x400);
      FUN_00453300(auStack_84,0x40);
      return iVar3;
    }
  }
  uVar7 = 0x68;
  uVar8 = 0x1b2;
LAB_0045e2e8:
  FUN_004806c0(9,0x6a,uVar7,"external/openssl/crypto/pem/pem_lib.c",uVar8);
  return 0;
}


