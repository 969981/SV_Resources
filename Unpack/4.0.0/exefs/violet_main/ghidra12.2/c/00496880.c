/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00496880; name: FUN_00496880
 */


undefined8 FUN_00496880(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_b0 [128];
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) {
    return 0;
  }
  iVar4 = FUN_003e6880(param_2,"%*snamingAuthority: ",param_3,&DAT_03c886bc);
  if (iVar4 < 1) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_0045bea0();
    puVar5 = (undefined1 *)FUN_0045bdc0();
    iVar4 = FUN_003e6880(param_2,"%*s  admissionAuthorityId: ",param_3,&DAT_03c886bc);
    if (iVar4 < 1) {
      return 0;
    }
    FUN_0045c520(auStack_b0,0x80,*param_1,1);
    bVar3 = puVar5 != (undefined1 *)0x0;
    puVar1 = &DAT_03c886bc;
    if (bVar3) {
      puVar1 = &DAT_03c2afeb;
    }
    puVar2 = &DAT_03c886bc;
    if (bVar3) {
      puVar2 = puVar5;
    }
    puVar5 = &DAT_03c886bc;
    if (bVar3) {
      puVar5 = &DAT_03c8f4f1;
    }
    iVar4 = FUN_003e6880(param_2,"%s%s%s%s\n",puVar2,puVar1,auStack_b0,puVar5);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if (((param_1[2] == 0) ||
      (((iVar4 = FUN_003e6880(param_2,"%*s  namingAuthorityText: ",param_3,&DAT_03c886bc), 0 < iVar4
        && (iVar4 = FUN_0048aa40(param_2,param_1[2]), 0 < iVar4)) &&
       (iVar4 = FUN_003e6880(param_2,&DAT_03c67c74), 0 < iVar4)))) &&
     ((param_1[1] == 0 ||
      (((iVar4 = FUN_003e6880(param_2,"%*s  namingAuthorityUrl: ",param_3,&DAT_03c886bc), 0 < iVar4
        && (iVar4 = FUN_0048aa40(param_2,param_1[1]), 0 < iVar4)) &&
       (iVar4 = FUN_003e6880(param_2,&DAT_03c67c74), 0 < iVar4)))))) {
    return 1;
  }
  return 0;
}


