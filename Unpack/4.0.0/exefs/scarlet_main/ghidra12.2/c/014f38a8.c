/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f38a8; name: FUN_014f38a8
 */


void FUN_014f38a8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  iVar1 = FUN_014f3a04();
  iVar2 = FUN_014f3a34(param_1);
  fVar6 = (float)FUN_014f39f8();
  if (((*PTR_DAT_047d8658 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8658);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8660;
  *(undefined8 *)PTR_DAT_047d8668 = uVar4;
  local_60 = 0x4596c46a040ed6ad;
  pcStack_58 = "SystemColorFade";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar5 = FUN_014fbaa8(uVar4,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_014f39f0((float)(uint)(iVar1 - iVar2) / fVar6,lVar5);
    local_60 = 0x4596c46a040ed6ad;
    pcStack_58 = "SystemColorFade";
    local_50 = 0xf;
    local_48 = (long *)0x0;
    FUN_014f3a64(&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


