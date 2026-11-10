/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c59b80; name: FUN_00c59b80
 */


void FUN_00c59b80(long *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  pcVar2 = (char *)FUN_00ccbbb0(*(long *)(*(long *)(param_1[2] + 0x70) + 0x110) + -2,
                                param_1[2] + 0x30);
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
      param_1[3] = *plVar3;
      puVar1 = PTR_DAT_047e0be0;
      lVar4 = (**(code **)PTR_DAT_047e0be0)(lVar5 + 0x10,plVar3);
      param_1[4] = lVar4;
      param_1[5] = plVar3[2];
      lVar5 = (**(code **)puVar1)(lVar5 + 0x10,plVar3 + 2);
      param_1[6] = lVar5;
    }
  }
  return;
}


