/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01167c8c; name: FUN_01167c8c
 */


long * FUN_01167c8c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar4 + 1,0,0x78);
  puVar1 = PTR_DAT_047d66f8;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar4[2] = (long)plVar4;
  plVar4[4] = (long)&PTR_LAB_0459dce0;
  plVar4[5] = 0;
  *plVar4 = (long)&DAT_0459dca8;
  plVar4[1] = (long)param_2;
  *(undefined4 *)(plVar4 + 3) = 0x80080;
  plVar4[6] = (long)&PTR_FUN_0459dd10;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


