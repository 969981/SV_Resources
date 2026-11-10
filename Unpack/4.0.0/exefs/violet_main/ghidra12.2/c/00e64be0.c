/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e64be0; name: FUN_00e64be0
 */


void FUN_00e64be0(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  long lVar3;
  uint *local_90;
  long lStack_88;
  uint local_14;
  
  local_14 = *(uint *)(param_1 + 0x28);
  if (local_14 != 0) {
    lVar3 = *(long *)(param_1 + 0x70);
    local_90 = &local_14;
    lStack_88 = param_1;
    pcVar1 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x110),lVar3 + 0x30);
    if (*pcVar1 == '\0' || *(long *)(pcVar1 + 8) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      if (*(long *)(*(long *)(pcVar1 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_buffer","Map",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                   ,0x31);
      }
      puVar2 = (uint *)(**(code **)PTR_DAT_047d8da8)();
    }
    *puVar2 = local_14;
    memcpy(puVar2 + 4,*(void **)(param_1 + 0x30),(ulong)*local_90 << 4);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x110),lVar3 + 0x30);
    FUN_02baf814(&local_90);
    FUN_00e65f54(*(undefined8 *)(*(long *)(param_1 + 0x68) + 200),*(undefined4 *)(param_1 + 0x28),1,
                 1);
    FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


