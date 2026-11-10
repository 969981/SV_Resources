/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011576b8; name: FUN_011576b8
 */


long * FUN_011576b8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *__s;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_48;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x1a0,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x1a0);
  puVar1 = PTR_DAT_047d66f8;
  __s[2] = 0;
  *(undefined4 *)(__s + 3) = 0;
  *__s = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *__s = (long)(PTR_DAT_047d8c78 + 0x10);
  __s[1] = lVar8;
  __s[4] = (long)(puVar1 + 0x88);
  plVar7 = __s + 5;
  *plVar7 = (long)(puVar1 + 0xd8);
  __s[7] = 0;
  __s[6] = 0;
  FUN_00d1a3f4(__s + 6,plVar7);
  *__s = (long)&PTR_FUN_04545120;
  __s[4] = (long)&PTR_LAB_04545198;
  *plVar7 = (long)&PTR_LAB_045451e8;
  __s[10] = 0;
  __s[0xb] = 0;
  __s[0xc] = 0;
  __s[0xd] = 0;
  __s[0xe] = 0;
  __s[0xf] = 0;
  __s[8] = (long)(PTR_DAT_047d9448 + 0x10);
  __s[9] = 0;
  FUN_01157b78(__s + 0x10);
  __s[0x20] = 0;
  __s[0x21] = 0;
  __s[0x1e] = 0;
  __s[0x1f] = 0;
  puVar1 = PTR_DAT_047d8c28;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_48 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar7 = (long *)PTR_DAT_047d8c30;
  plVar6 = *(long **)PTR_DAT_047d8c30;
  __s[0x2e] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_48 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
    plVar7 = (long *)PTR_DAT_047d8c30;
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar6 = (long *)*plVar7;
  __s[0x2f] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_48 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar6 = (long *)*plVar7;
  __s[0x30] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_48 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar6 = (long *)*plVar7;
  __s[0x31] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_48 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar7 = (long *)*plVar7;
  __s[0x32] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(__s + 3) = 0x1001a0;
  __s[1] = (long)param_1;
  __s[2] = (long)__s;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return __s;
}


