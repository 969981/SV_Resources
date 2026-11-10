/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020b4f4c; name: FUN_020b4f4c
 */


void FUN_020b4f4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_18;
  undefined1 local_16;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c00,param_4);
    if (iVar1 != 0) {
      FUN_00100190(param_2,param_3,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  local_16 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_18 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = FUN_00cf1f38(param_2,param_3,uVar2,param_4,&local_70,1,0,&local_18);
  if (iVar1 != 0) {
    *(undefined1 *)param_1 = 1;
    param_1[2] = local_70;
    param_1[3] = uStack_68;
  }
  FUN_012c7df0(&uStack_38);
  return;
}


