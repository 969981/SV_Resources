/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f3938; name: FUN_001f3938
 */


int FUN_001f3938(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(int *)(param_1 + 0x930) == 1) goto LAB_001f3988;
  }
  else if (*(int *)(param_1 + 0x938) < 1) {
LAB_001f3988:
    if (0x2aaaaaaaaaaaaaaa <
        ((ulong)(param_3 * -0x5555555555555555) >> 1 | param_3 * -0x5555555555555555 << 0x3f)) {
      return -0x1f5;
    }
    iVar1 = FUN_001f4d4c(&local_28,&local_88,param_2,param_3,param_1 + 0x890);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      iVar1 = FUN_001fa208(param_1,0,local_28,local_88);
    }
    else {
      FUN_001f46ac(auStack_80,param_3,4,0,0);
      local_70 = local_88;
      uStack_68 = local_28;
      iVar1 = FUN_001f0530(param_1,auStack_80,1);
    }
    FUN_001f45b0(param_1 + 0x890,local_28);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_001eda20(auStack_98);
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      param_4 = 0;
    }
    lVar2 = FUN_001ee4f4(param_1,1,0,auStack_98,1,param_4);
    if (lVar2 == 0) {
      return -0x385;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      FUN_001f9648(lVar2,2);
      *(undefined4 *)(param_1 + 0x934) = 1;
      *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 2;
      return 0;
    }
    FUN_001f9648(lVar2,1);
    *(undefined8 *)(param_1 + 0x938) = 0x100000001;
    return 0;
  }
  return -0x1f9;
}


