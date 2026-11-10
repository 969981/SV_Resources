/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd197c; name: FUN_00dd197c
 */


void FUN_00dd197c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x90);
  lVar5 = *plVar6;
  pcVar2 = (char *)FUN_00ccbbb0(*(long *)(*(long *)(plVar6[2] + 0x70) + 0x110) + -2,plVar6[2] + 0x30
                               );
  if (*pcVar2 != '\0' && *(long *)(pcVar2 + 8) != 0) {
    if (*(long *)(*(long *)(pcVar2 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    plVar3 = (long *)(**(code **)PTR_DAT_047d8da8)();
    if (plVar3 != (long *)0x0) {
      plVar6[3] = *plVar3;
      puVar1 = PTR_DAT_047e0be0;
      lVar4 = (**(code **)PTR_DAT_047e0be0)(lVar5 + 0x10,plVar3);
      plVar6[4] = lVar4;
      plVar6[5] = plVar3[2];
      lVar5 = (**(code **)puVar1)(lVar5 + 0x10,plVar3 + 2);
      plVar6[6] = lVar5;
    }
  }
  *(long *)(param_1 + 0x130) =
       *(long *)(*(long *)(param_1 + 0x90) + 0x30) - *(long *)(*(long *)(param_1 + 0x90) + 0x20);
  return;
}


