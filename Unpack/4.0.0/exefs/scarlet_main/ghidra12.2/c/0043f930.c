/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043f930; name: FUN_0043f930
 */


undefined8 FUN_0043f930(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) ||
      ((*(long *)(lVar4 + 0xb8) == 0 &&
       ((*(long *)(lVar4 + 0x98) == 0 && (*(long *)(lVar4 + 0xa8) == 0)))))) ||
     (*(code **)(lVar4 + 0xc0) == (code *)0x0)) {
    FUN_004806c0(6,0x9b,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0xe4);
    return 0xfffffffe;
  }
  iVar1 = (int)param_1[4];
  if (((iVar1 != 0x100) && (iVar1 != 0x200)) && (iVar1 != 0x400)) {
    uVar2 = 0x97;
    uVar3 = 0xeb;
    goto LAB_0043faa4;
  }
  uVar2 = (**(code **)(lVar4 + 0xc0))(param_1,2,0,param_2);
  if (0 < (int)uVar2) {
    if ((int)uVar2 != 2) {
      if ((int *)param_1[2] == (int *)0x0) {
        uVar2 = 0x9a;
        uVar3 = 0xf8;
LAB_0043faa4:
        FUN_004806c0(6,0x9b,uVar2,"external/openssl/crypto/evp/pmeth_fn.c",uVar3);
        return 0xffffffff;
      }
      if (*(int *)param_1[2] != *param_2) {
        uVar2 = 0x65;
        uVar3 = 0xfd;
        goto LAB_0043faa4;
      }
      iVar1 = FUN_0043de00(param_2);
      if ((iVar1 == 0) && (iVar1 = FUN_0043de20(param_1[2],param_2), iVar1 == 0)) {
        uVar2 = 0x99;
        uVar3 = 0x10a;
        goto LAB_0043faa4;
      }
      FUN_0043e1f0(param_1[3]);
      param_1[3] = (long)param_2;
      uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,2,1,param_2);
      if ((int)uVar2 < 1) {
        param_1[3] = 0;
        return uVar2;
      }
      FUN_0043dfc0(param_2);
    }
    uVar2 = 1;
  }
  return uVar2;
}


