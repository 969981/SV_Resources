/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040cc50; name: FUN_0040cc50
 */


undefined8 FUN_0040cc50(long *param_1,long *param_2)

{
  long lVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  
  if (*(long *)(*param_1 + 0x20) == 0) {
    uVar2 = 0x6a;
    uVar5 = 0x42;
    uVar6 = 0x85;
    goto LAB_0040cca4;
  }
  if (*param_1 != *param_2) {
    uVar2 = 0x6a;
    uVar5 = 0x65;
    uVar6 = 0x89;
    goto LAB_0040cca4;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  if ((int)param_2[0x13] == 0) {
    lVar1 = 0;
LAB_0040cd10:
    param_1[0x14] = lVar1;
  }
  else if ((int)param_2[0x13] == 5) {
    lVar1 = FUN_0040e5b0(param_2[0x14]);
    goto LAB_0040cd10;
  }
  lVar3 = param_2[0x12];
  lVar1 = param_1[0x12];
  if (lVar3 == 0) {
    FUN_003eccf0();
    param_1[0x12] = 0;
    plVar4 = (long *)param_2[1];
    plVar8 = (long *)param_1[1];
    if (plVar4 == (long *)0x0) goto LAB_0040cdc0;
LAB_0040cd48:
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_0040cf10(param_1);
      param_1[1] = (long)plVar8;
      if (plVar8 == (long *)0x0) {
        return 0;
      }
      plVar4 = (long *)param_2[1];
    }
    pcVar7 = *(code **)(*plVar8 + 0x68);
    if (pcVar7 == (code *)0x0) {
      uVar2 = 0x72;
      uVar5 = 0x42;
      uVar6 = 0x2c1;
      goto LAB_0040cca4;
    }
    if ((*plVar8 != *plVar4) ||
       ((((int)plVar4[1] != 0 && ((int)plVar8[1] != 0)) && ((int)plVar8[1] != (int)plVar4[1])))) {
      uVar2 = 0x72;
      uVar5 = 0x65;
      uVar6 = 0x2c8;
      goto LAB_0040cca4;
    }
    if ((plVar8 != plVar4) && (uVar2 = (*pcVar7)(plVar8), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  else {
    if (lVar1 == 0) {
      lVar1 = FUN_003ecc70();
      param_1[0x12] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      lVar3 = param_2[0x12];
    }
    lVar1 = FUN_003ecfb0(lVar1,lVar3);
    if (lVar1 == 0) {
      return 0;
    }
    plVar4 = (long *)param_2[1];
    plVar8 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) goto LAB_0040cd48;
LAB_0040cdc0:
    if (plVar8 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar8 + 0x60);
      if ((pcVar7 != (code *)0x0) || (pcVar7 = *(code **)(*plVar8 + 0x58), pcVar7 != (code *)0x0)) {
        (*pcVar7)(plVar8);
      }
      FUN_00453260(plVar8,0x30,"external/openssl/crypto/ec/ec_lib.c",699);
    }
    param_1[1] = 0;
  }
  if ((*(byte *)*param_2 >> 1 & 1) == 0) {
    lVar1 = FUN_003eb8f0(param_1[2],param_2[2]);
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = FUN_003eb8f0(param_1[3],param_2[3]);
    if (lVar1 == 0) {
      return 0;
    }
  }
  plVar8 = param_1 + 6;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  if (param_2[6] == 0) {
    FUN_00452f80(*plVar8,"external/openssl/crypto/ec/ec_lib.c",0xe2);
    *plVar8 = 0;
    param_1[7] = 0;
  }
  else {
    FUN_00452f80(*plVar8,"external/openssl/crypto/ec/ec_lib.c",0xd9);
    __dest = (void *)FUN_00452c30(param_2[7],"external/openssl/crypto/ec/ec_lib.c",0xda);
    *plVar8 = (long)__dest;
    if (__dest == (void *)0x0) {
      uVar2 = 0x6a;
      uVar5 = 0x41;
      uVar6 = 0xdb;
LAB_0040cca4:
      FUN_004806c0(0x10,uVar2,uVar5,"external/openssl/crypto/ec/ec_lib.c",uVar6);
      return 0;
    }
    memcpy(__dest,(void *)param_2[6],param_2[7]);
    param_1[7] = param_2[7];
  }
                    /* WARNING: Could not recover jumptable at 0x0040ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return uVar2;
}


