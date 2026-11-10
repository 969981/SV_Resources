/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dfef8; name: FUN_008dfef8
 */


undefined8 FUN_008dfef8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  local_38 = *(long *)(*(long *)(param_3 + 0x238) + 0x48);
  if (local_38 != -1) {
    iVar1 = *(int *)(param_4 + 0xf4);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x60);
    if (*(int *)(param_4 + 0xf8) != -1) {
      FUN_00c5afc0(param_2,*(int *)(param_4 + 0xf8),0,&local_38,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_00c5afc0(param_2,iVar1,4,&local_38,lVar3 + 0x28);
    }
  }
  local_38 = *(long *)(*(long *)(param_3 + 0x238) + 0x50);
  if (local_38 != -1) {
    iVar1 = *(int *)(param_4 + 0xfc);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x68);
    if (*(int *)(param_4 + 0x100) != -1) {
      FUN_00c5afc0(param_2,*(int *)(param_4 + 0x100),0,&local_38,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_00c5afc0(param_2,iVar1,4,&local_38,lVar3 + 0x28);
    }
  }
  local_38 = *(long *)(*(long *)(param_3 + 0x238) + 0x58);
  if (local_38 != -1) {
    iVar1 = *(int *)(param_4 + 0x104);
    lVar3 = *(long *)(*(long *)(param_3 + 0x238) + 0x70);
    if (*(int *)(param_4 + 0x108) != -1) {
      FUN_00c5afc0(param_2,*(int *)(param_4 + 0x108),0,&local_38,lVar3 + 0x28);
    }
    if (iVar1 != -1) {
      FUN_00c5afc0(param_2,iVar1,4,&local_38,lVar3 + 0x28);
    }
  }
  plVar2 = (long *)(param_5 + 0x18);
  if (*plVar2 != -1) {
    iVar1 = *(int *)(param_4 + 0x10c);
    if (*(int *)(param_4 + 0x110) != -1) {
      FUN_00c5afc0(param_2,*(int *)(param_4 + 0x110),0,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
    if (iVar1 != -1) {
      FUN_00c5afc0(param_2,iVar1,4,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  plVar2 = (long *)(param_5 + 0x20);
  if (*plVar2 != -1) {
    iVar1 = *(int *)(param_4 + 0x114);
    if (*(int *)(param_4 + 0x118) != -1) {
      FUN_00c5afc0(param_2,*(int *)(param_4 + 0x118),0,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
    if (iVar1 != -1) {
      FUN_00c5afc0(param_2,iVar1,4,plVar2,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  return 1;
}


