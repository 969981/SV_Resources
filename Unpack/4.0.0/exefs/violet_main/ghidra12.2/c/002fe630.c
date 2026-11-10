/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fe630; name: FUN_002fe630
 */


undefined4 FUN_002fe630(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  
  if (param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_003eaa40(param_2,param_3 & 0xffffffff);
  if (param_1 == 0) {
    return 2;
  }
  if (lVar2 == 0) {
    return 0xc;
  }
  if (param_4 == (long *)0x0) {
    lVar3 = FUN_0045f8d0(lVar2,0,0,&DAT_03c886bc);
    if (lVar3 == 0) {
LAB_002fe7c8:
      FUN_004808e0();
      uVar7 = 2;
      goto joined_r0x002fe848;
    }
    lVar8 = 0;
    do {
      FUN_004808e0();
      iVar1 = FUN_00484b20(param_1,lVar3);
      if ((iVar1 == 0) && (uVar5 = FUN_00480980(), (uVar5 & 0xff000fff) != 0xb000065))
      goto LAB_002fe7c0;
      FUN_0048c830(lVar3);
      lVar8 = lVar8 + 1;
      lVar3 = FUN_0045f8d0(lVar2,0,0,&DAT_03c886bc);
    } while (lVar3 != 0);
  }
  else {
    lVar3 = FUN_0047dcc0();
    *param_4 = lVar3;
    if (lVar3 == 0) {
      return 0xc;
    }
    lVar3 = FUN_0045f8d0(lVar2,0,0,&DAT_03c886bc);
    if (lVar3 == 0) goto LAB_002fe7c8;
    lVar8 = 0;
    do {
      lVar4 = FUN_00483b40(lVar3);
      if (lVar4 == 0) {
        uVar6 = 2;
        goto LAB_002fe834;
      }
      lVar4 = FUN_0048b9f0();
      if (lVar4 == 0) {
        uVar6 = 0xc;
        goto LAB_002fe834;
      }
      FUN_0047e2f0(*param_4,lVar4);
      FUN_004808e0();
      iVar1 = FUN_00484b20(param_1,lVar3);
      if ((iVar1 == 0) && (uVar5 = FUN_00480980(), (uVar5 & 0xff000fff) != 0xb000065))
      goto LAB_002fe7c0;
      FUN_0048c830(lVar3);
      lVar8 = lVar8 + 1;
      lVar3 = FUN_0045f8d0(lVar2,0,0,&DAT_03c886bc);
    } while (lVar3 != 0);
  }
  FUN_004808e0();
  if (lVar8 != 0) {
    uVar7 = 0;
    goto LAB_002fe804;
  }
  uVar7 = 2;
  goto joined_r0x002fe848;
LAB_002fe7c0:
  uVar6 = 7;
LAB_002fe834:
  uVar7 = 2;
  if (lVar8 != 0) {
    uVar7 = uVar6;
  }
  FUN_0048c830(lVar3);
joined_r0x002fe848:
  if (param_4 != (long *)0x0) {
    FUN_0047e3b0(*param_4,PTR_FUN_047cca78);
    *param_4 = 0;
  }
LAB_002fe804:
  FUN_003e8b90(lVar2);
  return uVar7;
}


