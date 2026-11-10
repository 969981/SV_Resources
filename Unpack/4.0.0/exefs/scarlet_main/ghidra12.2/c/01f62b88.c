/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f62b88; name: FUN_01f62b88
 */


void FUN_01f62b88(long param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  *(char *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + '\x01';
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((((lVar3 != 0) && (lVar3 = FUN_0156cb10(), lVar3 != param_2)) &&
      (lVar3 = FUN_019d8b6c(), lVar3 != 0)) &&
     (uVar4 = FUN_01f62c80(lVar3,param_2,param_4 + 2,*param_4,param_4[1]), (uVar4 & 1) != 0)) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    FUN_01f62d4c(param_2,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(auStack_80);
    }
  }
  return;
}


