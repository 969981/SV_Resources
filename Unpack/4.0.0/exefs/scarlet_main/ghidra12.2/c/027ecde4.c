/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ecde4; name: FUN_027ecde4
 */


void FUN_027ecde4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  if (((*PTR_DAT_047da868 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047da868), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da868);
  }
  lVar3 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar3;
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  local_24 = 1;
  FUN_027edb20(&local_60);
  FUN_01ee9cb0(param_1,uVar4,param_2,&local_24,&local_60);
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar3 + 0x30) = DAT_04859430;
  }
  plVar1 = local_58;
  local_58 = (long *)0x0;
  local_50 = *(undefined8 *)(lVar3 + 0x30);
  local_48 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x30) = local_60;
  *(undefined2 *)(lVar3 + 0x38) = 1;
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(lVar3 + 0x30) = local_50;
    *(undefined2 *)(lVar3 + 0x38) = (undefined2)local_48;
  }
  else {
    (**(code **)(*plVar1 + 8))();
    *(undefined8 *)(lVar3 + 0x30) = local_50;
    *(undefined2 *)(lVar3 + 0x38) = (undefined2)local_48;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 8))(local_58);
    }
  }
  FUN_015d209c(*param_1);
  return;
}


