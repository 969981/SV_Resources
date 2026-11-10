/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b6eb8; name: FUN_017b6eb8
 */


void FUN_017b6eb8(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  plVar2 = (long *)FUN_0104b474(*param_2 + 0x108,&local_50);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_047d8658 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8658);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d8660;
    local_50 = 0x4596c46a040ed6ad;
    pcStack_48 = "SystemColorFade";
    local_40 = 0xf;
    local_38 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d8668 = uVar3;
    lVar4 = FUN_017b6ff0(uVar3,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_18 = plVar2;
    (**(code **)(*plVar2 + 0x58))(plVar2);
    FUN_017b7dd8(lVar4,&local_18);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    *(undefined1 *)(lVar4 + 100) = 0;
    FUN_014fc4a4(param_1,lVar4);
  }
  return;
}


