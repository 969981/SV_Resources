/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a315e4; name: FUN_02a315e4
 */


long * FUN_02a315e4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xa8,8);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *plVar4 = (long)&DAT_045690c8;
  plVar4[1] = lVar6;
  plVar4[4] = (long)&PTR_LAB_045690f8;
  if (((DAT_0483af60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483af60), iVar2 != 0)) {
    FUN_00100190(&LAB_02a319d0,&DAT_0483af50,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af60);
  }
  DAT_0483af58 = 1;
  *plVar4 = (long)&PTR_LAB_04569078;
  plVar4[4] = (long)&PTR_LAB_045690a8;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar6 = tpidr_el0;
    lVar5 = *(long *)(lVar6 + 0x30);
    if (lVar5 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(plVar4 + 0xc) = 0;
  plVar4[9] = lVar5;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined4 *)((long)plVar4 + 0x6c) = 0;
  *(undefined1 *)(plVar4 + 0xe) = 0;
  *(undefined4 *)((long)plVar4 + 0xa4) = 0;
  *(undefined8 *)((long)plVar4 + 0x74) = 0;
  *(undefined1 *)((long)plVar4 + 0x7c) = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x11) = 0;
  *(undefined8 *)((long)plVar4 + 0x8c) = 0;
  *(undefined1 *)((long)plVar4 + 0x94) = 0;
  plVar4[10] = 0x7ffffffffffffff;
  plVar4[0xb] = 0;
  puVar1 = PTR_DAT_047d4df8;
  plVar4[0x13] = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar5 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar5;
  plVar4[5] = lVar5;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  *(undefined4 *)(plVar4 + 3) = 0x800a8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


