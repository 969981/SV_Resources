/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f233a0; name: FUN_01f233a0
 */


long FUN_01f233a0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  undefined8 auStack_1c0 [12];
  undefined1 *local_160;
  code *local_158;
  code *local_150;
  undefined1 *puStack_148;
  undefined8 local_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0 [12];
  
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
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x1d0,0x10);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_c0[0] = *param_3;
  *param_3 = 0;
  local_e0 = &LAB_01f237ec;
  local_d8 = FUN_00b3791c;
  local_d0 = FUN_00b37994;
  puStack_c8 = &LAB_00b37a54;
  local_140[0] = *param_4;
  *param_4 = 0;
  local_160 = &LAB_01f23948;
  local_158 = FUN_00b37a64;
  local_150 = FUN_00b37adc;
  puStack_148 = &LAB_00b37b9c;
  auStack_1c0[0] = *param_5;
  *param_5 = 0;
  local_1e0 = &LAB_01f23ab0;
  local_1d8 = FUN_00b37bac;
  local_1d0 = FUN_00b37c24;
  local_1c8 = &LAB_00b37ce4;
  FUN_01749d60(lVar4,param_2,&local_e0,&local_160,&local_1e0);
  pcVar1 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (code *)0x0;
    local_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar1)(auStack_1c0);
  }
  pcVar1 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar1)(local_140);
  }
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(local_c0);
  }
  *(undefined4 *)(lVar4 + 0x18) = 0x1001d0;
  *(long **)(lVar4 + 8) = param_1;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


