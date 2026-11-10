/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c6344; name: FUN_014c6344
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_014c6344(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb0,0x10);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar8 = *param_3;
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
  *(undefined1 *)(plVar4 + 9) = 1;
  *(undefined8 *)((long)plVar4 + 0x4c) = 0x3f8000003f800000;
  *plVar4 = (long)&DAT_046081a8;
  plVar4[1] = (long)param_2;
  lVar6 = _UNK_03cac228;
  lVar5 = _DAT_03cac220;
  plVar4[4] = (long)&PTR_LAB_046082b8;
  plVar4[8] = lVar8;
  *plVar7 = (long)&DAT_04608308;
  *(undefined8 *)((long)plVar4 + 0x74) = 0x40490fdb40490fdb;
  *(undefined1 *)(plVar4 + 0xe) = 0;
  *(undefined1 *)((long)plVar4 + 0x7c) = 0;
  plVar4[0x12] = 0;
  plVar4[2] = (long)plVar4;
  plVar4[0x10] = 0x40490fdb40490fdb;
  plVar4[0x11] = 0x40490fdb40490fdb;
  plVar4[0xd] = lVar6;
  plVar4[0xc] = lVar5;
  lVar5 = _UNK_03cab4f8;
  lVar8 = _DAT_03cab4f0;
  *(undefined4 *)(plVar4 + 3) = 0x1000b0;
  plVar4[0x15] = lVar5;
  plVar4[0x14] = lVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


