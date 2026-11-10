/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02112798; name: FUN_02112798
 */


void FUN_02112798(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *local_230 [64];
  
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar3;
  FUN_00cf9884(local_230,uVar3,"DanCarName");
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_230[0] != (long *)0x0) {
    plVar1 = local_230[0] + 7;
  }
  if (local_230[0] == (long *)0x0) {
    FUN_019c9ba0(local_230,0x100,*plVar1,0);
    FUN_019202d0(param_2,local_230);
  }
  else {
    FUN_019c9ba0(local_230,0x100,*plVar1,local_230[0][8]);
    FUN_019202d0(param_2,local_230);
    (**(code **)(*local_230[0] + 0x20))(local_230[0]);
  }
  return;
}


