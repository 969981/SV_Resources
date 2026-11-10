/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a32dc; name: FUN_034a32dc
 */


void FUN_034a32dc(long *param_1,int *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (((param_3 & 1) == 0) &&
     (iVar3 = *(int *)((long)param_1 + 0x2d4) + -1,
     *(int *)((long)param_1 + 0x2d4) != 0 && iVar3 != 0)) {
    *(int *)((long)param_1 + 0x2d4) = iVar3;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  if (*param_2 == 0) {
    lVar2 = param_1[0x47];
    if (lVar2 == 0) {
      *(undefined4 *)((long)param_1 + 0x26c) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x034a3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1);
      return;
    }
    uVar1 = *(undefined8 *)PTR_DAT_047e7038;
    iVar3 = 0;
    iStack_3c = 4;
  }
  else {
    iVar3 = *param_2;
    iStack_3c = param_2[1];
    lVar2 = param_1[0x47];
    if (lVar2 == 0) {
      local_48 = *(undefined4 *)((long)param_1 + 0x26c);
      local_58 = param_1 + 2;
      local_50 = 0x8000000;
      local_44 = 0x3f800000;
      local_38 = 0x1a;
      local_34 = 0x100;
      local_32 = 0;
      local_40 = iVar3;
      lVar2 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_58,0);
      param_1[0x47] = lVar2;
      (**(code **)(*param_1 + 0xb0))(param_1,0xe,iVar3);
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x28))(local_44,param_1,local_50,1);
        return;
      }
      return;
    }
    uVar1 = *(undefined8 *)PTR_DAT_047e7038;
  }
  FUN_034e6c0c(0x3f800000,uVar1,lVar2,0x8000000,iVar3,iStack_3c,0);
  return;
}


