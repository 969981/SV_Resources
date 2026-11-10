/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ef550; name: FUN_002ef550
 */


undefined8 FUN_002ef550(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  void *__ptr;
  undefined8 uVar6;
  undefined8 local_38;
  
  iVar1 = strcmp(param_2,"RS256");
  if (iVar1 != 0) {
    FUN_0043def0();
    return 0;
  }
  lVar2 = FUN_0043c2a0();
  lVar3 = FUN_0043def0();
  local_38 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = FUN_0042bbc0();
  if (lVar4 == 0) {
LAB_002ef678:
    __ptr = (void *)0x0;
  }
  else {
    FUN_0043e440(lVar3,*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_0043c900(lVar4,0,lVar2,0,lVar3);
    if (iVar1 != 1) goto LAB_002ef678;
    sVar5 = strlen(param_3);
    iVar1 = FUN_0042bd60(lVar4,param_3,sVar5);
    if ((iVar1 != 1) || (iVar1 = FUN_0043caf0(lVar4,0,&local_38), iVar1 != 1)) goto LAB_002ef678;
    __ptr = (void *)FUN_0038c780(local_38);
    iVar1 = FUN_0043caf0(lVar4,__ptr,&local_38);
    if (iVar1 == 1) {
      uVar6 = FUN_00366290(__ptr,local_38,1,0);
      goto joined_r0x002ef668;
    }
  }
  uVar6 = 0;
joined_r0x002ef668:
  if (lVar3 != 0) {
    FUN_0043e1f0(lVar3);
  }
  if (lVar4 != 0) {
    FUN_0042bbe0(lVar4);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return uVar6;
}


