/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b920; name: FUN_0043b920
 */


undefined8
FUN_0043b920(long param_1,char *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined4 local_a0;
  int iStack_9c;
  
  uVar8 = param_3 & 0xffffffff;
  iVar2 = FUN_0045bea0();
  if (iVar2 == 0) goto LAB_0043ba18;
  local_a0 = 0;
  iStack_9c = iVar2;
  if (DAT_047f1848 == 0) {
LAB_0043b980:
    lVar4 = FUN_0045c970(&local_a0,&DAT_044a82c8,0x1d,0x18,&LAB_0043bbd0);
    if (lVar4 == 0) {
LAB_0043ba18:
      FUN_004806c0(6,0x74,0x79,"external/openssl/crypto/evp/evp_pbe.c",0x5f);
      if (param_1 == 0) {
        FUN_0045ad70(&local_a0,&DAT_03c08ca3,0x50);
      }
      else {
        FUN_003dfa20(&local_a0,0x50,param_1);
      }
      FUN_00481380(2,"TYPE=",&local_a0);
      return 0;
    }
  }
  else {
    uVar3 = FUN_0047e200(DAT_047f1848,&local_a0);
    lVar4 = FUN_0047e450(DAT_047f1848,uVar3);
    if (lVar4 == 0) goto LAB_0043b980;
  }
  iVar2 = *(int *)(lVar4 + 8);
  iVar1 = *(int *)(lVar4 + 0xc);
  pcVar9 = *(code **)(lVar4 + 0x10);
  if (param_2 == (char *)0x0) {
    uVar8 = 0;
    if (iVar2 == -1) goto LAB_0043ba84;
LAB_0043b9cc:
    FUN_0045bce0(iVar2);
    lVar4 = FUN_0043d0f0();
    if (lVar4 == 0) {
      uVar6 = 0xa0;
      uVar7 = 0x72;
      goto LAB_0043baf0;
    }
  }
  else {
    if ((int)param_3 == -1) {
      uVar8 = strlen(param_2);
    }
    if (iVar2 != -1) goto LAB_0043b9cc;
LAB_0043ba84:
    lVar4 = 0;
  }
  if (iVar1 == -1) {
    lVar5 = 0;
  }
  else {
    FUN_0045bce0(iVar1);
    lVar5 = FUN_0043d130();
    if (lVar5 == 0) {
      uVar6 = 0xa1;
      uVar7 = 0x7c;
      goto LAB_0043baf0;
    }
  }
  iVar2 = (*pcVar9)(param_5,param_2,uVar8 & 0xffffffff,param_4,lVar4,lVar5,param_6);
  if (iVar2 != 0) {
    return 1;
  }
  uVar7 = 0x82;
  uVar6 = 0x78;
LAB_0043baf0:
  FUN_004806c0(6,0x74,uVar6,"external/openssl/crypto/evp/evp_pbe.c",uVar7);
  return 0;
}


