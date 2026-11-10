/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271761c; name: FUN_0271761c
 */


void FUN_0271761c(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char *pcVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined4 *local_c0;
  undefined4 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined4 *local_a0;
  undefined4 *puStack_98;
  
  pcVar3 = (code *)PTR_FUN_047e0e10;
  local_c0 = param_2;
  puStack_b8 = param_3;
  local_b0 = param_4;
  puStack_a8 = param_5;
  local_a0 = param_6;
  puStack_98 = param_7;
  pcVar1 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  if (*pcVar1 != '\0' && *(long *)(pcVar1 + 8) != 0) {
    if (*(long *)(*(long *)(pcVar1 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    puVar2 = (undefined2 *)(**(code **)PTR_DAT_047d8da8)();
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)*param_2;
      puVar2[1] = (short)*param_3;
      puVar2[2] = (short)*param_4;
      puVar2[3] = (short)*param_5;
      puVar2[4] = (short)*param_6;
      puVar2[5] = (short)*param_7;
      goto LAB_0271770c;
    }
  }
  pcVar3 = (code *)PTR_FUN_047e0e10;
LAB_0271770c:
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(&local_c0);
  }
  return;
}


