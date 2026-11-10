/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01772010; name: FUN_01772010
 */


void FUN_01772010(long param_1,void *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [96];
  
  memcpy(auStack_90,param_2,0x28);
  pcVar1 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  if (*pcVar1 == '\0' || *(long *)(pcVar1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(*(long *)(pcVar1 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    uVar2 = (**(code **)PTR_DAT_047d8da8)();
  }
  FUN_01772ab0(auStack_90,uVar2);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  return;
}


