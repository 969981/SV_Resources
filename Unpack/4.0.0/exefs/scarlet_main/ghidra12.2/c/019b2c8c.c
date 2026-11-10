/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b2c8c; name: FUN_019b2c8c
 */


long FUN_019b2c8c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x70,8);
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  uVar4 = *param_2;
  local_60 = 0;
  uStack_58 = 0;
  FUN_019b3220(&local_60,param_3);
  local_70 = 0;
  uStack_68 = 0;
  FUN_019de648(&local_70,param_4);
  FUN_019b2e24(lVar3,uVar4,&local_60,&local_70,*param_5);
  FUN_0199e4d0(&local_70);
  FUN_019b2320(&local_60);
  *(undefined4 *)(lVar3 + 0x18) = 0x80070;
  *(long **)(lVar3 + 8) = param_1;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


