/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e726bc; name: FUN_01e726bc
 */


long * FUN_01e726bc(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x3af8,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_70 = 0;
  uStack_68 = 0;
  FUN_01e761c0(&local_70,param_2);
  puVar1 = PTR_DAT_047d66f8;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *plVar4 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar4[1] = lVar6;
  plVar4[4] = (long)(puVar1 + 0x88);
  plVar7 = plVar4 + 5;
  *plVar7 = (long)(puVar1 + 0xd8);
  plVar4[7] = 0;
  plVar4[6] = 0;
  FUN_00d1a3f4(plVar4 + 6,plVar7);
  *plVar4 = (long)&DAT_04551f48;
  plVar4[4] = (long)&PTR_LAB_04551fc0;
  *plVar7 = (long)&PTR_LAB_04552010;
  plVar4[8] = 0;
  plVar4[9] = 0;
  FUN_01e761c0(plVar4 + 8,&local_70);
  *(undefined4 *)(plVar4 + 10) = 0;
  *(undefined1 *)((long)plVar4 + 0x2a04) = 0;
  *(undefined1 *)((long)plVar4 + 0x2a14) = 0;
  *(undefined1 *)((long)plVar4 + 0x3264) = 0;
  *(undefined1 *)(plVar4 + 0x758) = 0;
  *(undefined1 *)(plVar4 + 0x75b) = 0;
  *(undefined1 *)(plVar4 + 0x75e) = 0;
  *(undefined4 *)((long)plVar4 + 0x3ab7) = 0;
  *(undefined4 *)((long)plVar4 + 0x3ab4) = 0;
  memset(plVar4 + 0xb,0,0x29ab);
  *(undefined1 *)(plVar4 + 0xd) = 1;
  *(undefined1 *)(plVar4 + 0x117) = 0;
  memset((void *)((long)plVar4 + 0x8bc),0,0x84e);
  *(undefined1 *)((long)plVar4 + 0x8ba) = 1;
  *(undefined1 *)((long)plVar4 + 0x110a) = 0;
  memset((void *)((long)plVar4 + 0x110e),0,0x84e);
  *(undefined1 *)((long)plVar4 + 0x110c) = 1;
  *(undefined1 *)((long)plVar4 + 0x195c) = 0;
  memset(plVar4 + 0x32c,0,0x84e);
  *(undefined1 *)((long)plVar4 + 0x195e) = 1;
  *(undefined1 *)((long)plVar4 + 0x21ae) = 0;
  memset((void *)((long)plVar4 + 0x21b2),0,0x84e);
  *(undefined1 *)(plVar4 + 0x436) = 1;
  *(undefined1 *)(plVar4 + 0x540) = 0;
  FUN_01e72aa4(&local_70);
  *(undefined4 *)(plVar4 + 3) = 0x83af8;
  plVar4[1] = (long)param_1;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


