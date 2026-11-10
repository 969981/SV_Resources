/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113421c; name: FUN_0113421c
 */


long FUN_0113421c(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  undefined8 local_40;
  long *local_38;
  
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
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0xe0,8);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_50 = &DAT_cbf29ce484222645;
  bVar1 = *param_2;
  pbVar5 = param_2;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar5;
  }
  local_40 = 0xc;
  local_38 = (long *)0x0;
  pbStack_48 = param_2;
  FUN_01106688(lVar4,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined4 *)(lVar4 + 0x18) = 0x800e0;
  *(long **)(lVar4 + 8) = param_1;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


