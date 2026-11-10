/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042bfb0; name: FUN_0042bfb0
 */


undefined8 FUN_0042bfb0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *__dest;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    uVar2 = 0x6f;
    uVar3 = 0xd8;
LAB_0042bff8:
    FUN_004806c0(6,0x6e,uVar2,"external/openssl/crypto/evp/digest.c",uVar3);
    return 0;
  }
  if (*param_1 == *param_2) {
    __dest = (void *)param_1[3];
    FUN_0043b7a0(param_1,4);
  }
  else {
    __dest = (void *)0x0;
  }
  FUN_0042bb10(param_1);
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  lVar1 = param_2[4];
  lVar9 = param_2[1];
  lVar8 = *param_2;
  param_1[5] = param_2[5];
  param_1[4] = lVar1;
  param_1[1] = lVar9;
  *param_1 = lVar8;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  FUN_0043b7c0(param_1,0x400);
  param_1[4] = 0;
  plVar5 = param_1 + 3;
  *plVar5 = 0;
  if ((param_2[3] != 0) && (iVar4 = *(int *)(*param_1 + 0x44), iVar4 != 0)) {
    if (__dest == (void *)0x0) {
      __dest = (void *)FUN_00452c30((long)iVar4,"external/openssl/crypto/evp/digest.c",0xf9);
      *plVar5 = (long)__dest;
      if (__dest == (void *)0x0) {
        uVar2 = 0x41;
        uVar3 = 0xfb;
        goto LAB_0042bff8;
      }
      iVar4 = *(int *)(*param_1 + 0x44);
    }
    else {
      *plVar5 = (long)__dest;
    }
    memcpy(__dest,(void *)param_2[3],(long)iVar4);
  }
  param_1[5] = param_2[5];
  if (param_2[4] != 0) {
    lVar1 = FUN_00440230();
    param_1[4] = lVar1;
    if (lVar1 == 0) {
      FUN_0042bb10(param_1);
      return 0;
    }
  }
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0042c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return uVar2;
}


