/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197122c; name: FUN_0197122c
 */


void FUN_0197122c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_44 [4];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar3 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar3;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x90) != -1)) {
    *(undefined8 *)(lVar3 + (long)*(int *)(lVar2 + 0x90) * 8 + 0x6a0) = uVar4;
  }
  local_98 = auStack_44;
  lStack_90 = param_1;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  FUN_019713a0(*(undefined8 *)(param_1 + 0x100),&local_98);
  return;
}


