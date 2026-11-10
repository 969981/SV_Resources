/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02272fa0; name: FUN_02272fa0
 */


long FUN_02272fa0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  undefined8 local_48;
  
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
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x180,8);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_48 = *param_2;
  *param_2 = 0;
  plVar5 = (long *)*param_3;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 6;
  }
  local_68 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 7;
  }
  lStack_60 = *plVar1;
  if (plVar5 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = plVar5[8];
  }
  local_50 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_50 = plVar5;
  FUN_02273188(lVar4,&local_48,&local_68,*param_4,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_0227232c(&local_48);
  *(undefined4 *)(lVar4 + 0x18) = 0x80180;
  *(long **)(lVar4 + 8) = param_1;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


