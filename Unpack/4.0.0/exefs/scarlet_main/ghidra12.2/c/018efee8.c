/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018efee8; name: FUN_018efee8
 */


void FUN_018efee8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  if (*(long *)(*(long *)(lVar1 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_buffer","Map",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
               ,0x31);
  }
  puVar2 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
  *puVar2 = 0x1000200010000;
  *(undefined4 *)(puVar2 + 1) = 0x20003;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  return;
}


