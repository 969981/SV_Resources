/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145339c; name: FUN_0145339c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0145339c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1f0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar5,0x80008080);
  lVar1 = _DAT_03caa980;
  plVar5[0x27] = _UNK_03caa988;
  plVar5[0x26] = lVar1;
  puVar2 = PTR_DAT_047d9c30;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  *(undefined4 *)(plVar5 + 0x28) = 0;
  *(undefined4 *)((long)plVar5 + 0x114) = 0;
  plVar5[2] = (long)plVar5;
  plVar5[4] = (long)(puVar2 + 0x160);
  plVar5[5] = (long)(puVar2 + 0x288);
  plVar5[6] = (long)(puVar2 + 0x2e0);
  plVar5[7] = (long)(puVar2 + 0x308);
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[1] = (long)param_2;
  plVar5[0x2a] = (long)&LAB_02b3e198;
  plVar5[0x2b] = (long)&LAB_02b3e1a0;
  *(undefined4 *)(plVar5 + 3) = 0x1001f0;
  plVar5[0x2c] = (long)&LAB_02b3e1a4;
  plVar5[0x2d] = (long)&LAB_02b3e1a8;
  *(undefined1 *)(plVar5 + 0x3a) = 1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


