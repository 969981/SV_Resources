/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a19f8; name: FUN_010a19f8
 */


long * FUN_010a19f8(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x720,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_010a21a8(plVar4,*param_2,*param_3);
  puVar1 = PTR_DAT_047e2728;
  *(undefined4 *)((long)plVar4 + 0x71c) = 0;
  plVar4[0xe2] = 0;
  plVar4[4] = (long)(puVar1 + 0x838);
  plVar4[5] = (long)(puVar1 + 0x888);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)param_1;
  plVar4[8] = (long)(puVar1 + 0x8e0);
  *(undefined2 *)(plVar4 + 0xe3) = 0;
  plVar4[2] = (long)plVar4;
  *(undefined4 *)(plVar4 + 3) = 0x80720;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


