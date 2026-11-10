/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164b17c; name: FUN_0164b17c
 */


long * FUN_0164b17c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
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
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0xe8,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar4 + 1,0,0xe0);
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
  *(undefined1 *)(plVar4 + 10) = 0;
  *plVar4 = (long)&PTR_FUN_04580ca8;
  plVar4[4] = (long)&PTR_LAB_04580d68;
  *(undefined4 *)((long)plVar4 + 0x54) = 0;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  *plVar7 = (long)&DAT_04580db8;
  plVar4[0xc] = -0x88cae98ccccfd53;
  plVar4[0xd] = (long)"FixedSymbol";
  plVar4[0xe] = 0xb;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  FUN_0164b524(plVar4 + 0x12);
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x16] = 0;
  FUN_0164b3f0(plVar4 + 0x19);
  *(undefined4 *)(plVar4 + 3) = 0x800e8;
  plVar4[1] = (long)param_1;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


