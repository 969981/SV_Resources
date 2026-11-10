/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bb590; name: FUN_021bb590
 */


long FUN_021bb590(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1c0,8);
  if (lVar5 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_70 = *param_2;
  uStack_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = (long *)param_2[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  plVar2 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  plVar7 = (long *)*param_3;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 6;
  }
  local_90 = *plVar6;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 7;
  }
  lStack_88 = *plVar6;
  if (plVar7 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar7[8];
  }
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar6 = (long *)*param_4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 7;
    plVar2 = plVar6 + 6;
  }
  local_b0 = *plVar2;
  lStack_a8 = *plVar1;
  if (plVar6 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = plVar6[8];
  }
  local_98 = (long *)0x0;
  local_78 = plVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_98 = plVar6;
  FUN_021bb81c(lVar5,&local_70,&local_90,&local_b0,*param_5,0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined4 *)(lVar5 + 0x18) = 0x801c0;
  *(long **)(lVar5 + 8) = param_1;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return lVar5;
}


