/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a46ef4; name: FUN_00a46ef4
 */


void FUN_00a46ef4(long param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined **local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if ((((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
      (*(char *)(param_3 + 8) == '\0')) || (*(char *)(param_4 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    local_78 = 0;
    local_b8 = &PTR_FUN_04540ef8;
    local_b0 = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    iVar2 = 0;
    local_40 = 0;
    local_38 = 0;
    local_50 = 0x3fffffffffffffff;
    uStack_48 = 0;
    local_98 = 0;
    uStack_90 = DAT_04836488;
    local_88 = 0x3fffffffffffffff;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = DAT_04836488;
    if (2 < (int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2)) {
      iVar2 = *(int *)(*(long *)(param_3 + 0x10) + 8);
      iVar1 = iVar2 + -1;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = iVar2 >> 1;
    }
    FUN_00a43af0(&local_b8,param_2,iVar2);
    FUN_00a43dc0(param_1,&local_b8,param_3,param_4,param_5);
    FUN_00a43810(&local_b8);
  }
  return;
}


