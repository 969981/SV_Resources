/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e42e8; name: FUN_011e42e8
 */


long * FUN_011e42e8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar4,0x80068080);
  puVar1 = PTR_DAT_047dd6f8;
  plVar4[0x3e] = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x2b] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x2c] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x40] = 0;
  plVar4[0x41] = 0;
  plVar4[0x34] = 0;
  plVar4[0x35] = 0;
  plVar4[4] = (long)(puVar1 + 0x198);
  plVar4[5] = (long)(puVar1 + 0x2c0);
  plVar4[6] = (long)(puVar1 + 0x318);
  plVar4[7] = (long)(puVar1 + 0x340);
  plVar4[0x24] = (long)(puVar1 + 0x378);
  plVar4[0x25] = (long)(puVar1 + 0x3c8);
  plVar4[0x26] = 0;
  plVar4[0x27] = (long)&PTR_FUN_045a2028;
  plVar4[0x2e] = 0;
  plVar4[0x2f] = (long)&PTR_FUN_045a2028;
  plVar4[0x36] = 0;
  plVar4[0x37] = (long)&PTR_FUN_045a2028;
  *(undefined4 *)((long)plVar4 + 0x21c) = 1;
  plVar4[0x30] = 0;
  plVar4[0x31] = 0;
  plVar4[0x32] = 0;
  plVar4[0x33] = 0;
  plVar4[0x38] = 0;
  plVar4[0x39] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  nn::os::InitializeLightEvent(plVar4 + 0x42,0,1);
  *(undefined4 *)(plVar4 + 0x44) = 0;
  *(undefined2 *)((long)plVar4 + 0x224) = 0;
  *(undefined4 *)(plVar4 + 0x45) = 0;
  *(undefined1 *)((long)plVar4 + 0x22c) = 0;
  *(undefined4 *)(plVar4 + 0x46) = 0;
  *(undefined1 *)((long)plVar4 + 0x234) = 0;
  plVar4[0x47] = 0;
  plVar4[0x48] = 0;
  *(undefined4 *)(plVar4 + 3) = 0x100250;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


