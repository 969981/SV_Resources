/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124470; name: FUN_00124470
 */


long FUN_00124470(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  void *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_48;
  
  uVar1 = param_1[2];
  if (param_2 <= param_1[1] - uVar1) {
    return *param_1 + uVar1;
  }
  lVar8 = param_1[3];
  if (CARRY8(param_2,uVar1)) {
    iVar2 = FUN_00123a70(lVar8,"buffer too large");
    uVar7 = (ulong)iVar2;
    if ((long *)*param_1 != param_1 + 4) goto LAB_001244cc;
  }
  else {
    uVar6 = param_1[1] << 1;
    uVar7 = uVar1 + param_2;
    if (uVar1 + param_2 <= uVar6) {
      uVar7 = uVar6;
    }
    if ((long *)*param_1 != param_1 + 4) {
LAB_001244cc:
      pcVar3 = (code *)FUN_00123610(lVar8,&local_48);
      plVar4 = (long *)FUN_00c41a10(lVar8,param_3);
      __dest = (void *)(*pcVar3)(local_48,*plVar4,plVar4[1],uVar7);
      if ((uVar7 != 0) && (__dest == (void *)0x0)) {
        FUN_00c85bd0(lVar8,"not enough memory");
        FUN_00123400(lVar8);
      }
      *plVar4 = (long)__dest;
      plVar4[1] = uVar7;
      goto LAB_00124610;
    }
  }
  FUN_00c5dcd0(lVar8,param_3,0xffffffff);
  FUN_00c5db00(lVar8,0xfffffffe);
  puVar5 = (undefined8 *)FUN_00c5e120(lVar8,0x10,0);
  *puVar5 = 0;
  puVar5[1] = 0;
  iVar2 = FUN_00123ea0(lVar8,"_UBOX*");
  if (iVar2 != 0) {
    FUN_00eeb2f0(lVar8,&DAT_04483118,0);
  }
  FUN_00c5e190(lVar8,0xfffffffe);
  FUN_00c5dcd0(lVar8,param_3,1);
  FUN_00123440(lVar8,param_3);
  pcVar3 = (code *)FUN_00123610(lVar8,&local_48);
  puVar5 = (undefined8 *)FUN_00c41a10(lVar8,param_3);
  __dest = (void *)(*pcVar3)(local_48,*puVar5,puVar5[1],uVar7);
  if ((uVar7 != 0) && (__dest == (void *)0x0)) {
    FUN_00c85bd0(lVar8,"not enough memory");
    FUN_00123400(lVar8);
  }
  *puVar5 = __dest;
  puVar5[1] = uVar7;
  memcpy(__dest,(void *)*param_1,param_1[2]);
LAB_00124610:
  *param_1 = (long)__dest;
  param_1[1] = uVar7;
  return (long)__dest + param_1[2];
}


