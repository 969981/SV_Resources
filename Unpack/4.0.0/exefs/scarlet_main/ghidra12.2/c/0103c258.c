/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0103c258; name: FUN_0103c258
 */


long * FUN_0103c258(long *param_1)

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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x218,8);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
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
  *(undefined4 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_LAB_045eae58;
  plVar4[1] = lVar6;
  plVar4[4] = (long)&PTR_LAB_045eae90;
  plVar4[6] = 0;
  *(undefined4 *)((long)plVar4 + 0x44) = 1;
  nn::os::InitializeLightEvent(plVar4 + 7,0,1);
  plVar4[9] = 0;
  *(undefined4 *)((long)plVar4 + 0x5c) = 1;
  nn::os::InitializeLightEvent(plVar4 + 10,0,1);
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xc] = 0;
  FUN_0103b81c();
  plVar4[0x13] = 0;
  *(undefined4 *)((long)plVar4 + 0xac) = 1;
  nn::os::InitializeLightEvent(plVar4 + 0x14,0,1);
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x16] = 0;
  FUN_0103b6e0();
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1d] = 0;
  FUN_0103b958();
  plVar4[0x29] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x28] = 0;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  FUN_0103ba94(plVar4 + 0x24);
  plVar4[0x30] = 0;
  plVar4[0x31] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2d] = 0;
  FUN_0103b6e0(plVar4 + 0x2b);
  memset(plVar4 + 0x32,0,0x88);
  *(undefined4 *)(plVar4 + 3) = 0x80218;
  plVar4[1] = (long)param_1;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


