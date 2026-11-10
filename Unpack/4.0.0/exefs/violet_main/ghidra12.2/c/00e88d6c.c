/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e88d6c; name: FUN_00e88d6c
 */


long * FUN_00e88d6c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2a8,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar7 = *param_4;
  FUN_00e86a58(plVar6,param_3,lVar7);
  *(undefined1 *)(plVar6 + 0x42) = 0;
  plVar6[0x41] = 0;
  plVar6[0x3e] = 0;
  plVar6[0x43] = 0;
  plVar6[0x3f] = 0;
  plVar6[0x40] = 0;
  puVar1 = PTR_DAT_047de130 + 0x10;
  puVar2 = PTR_DAT_047de130 + 0xa8;
  puVar3 = PTR_DAT_047de130 + 0xf8;
  plVar6[0x44] = 0;
  plVar6[0x45] = 0;
  plVar6[0x46] = 0;
  plVar6[0x47] = 0;
  plVar6[0x48] = 0;
  plVar6[0x49] = 0;
  plVar6[0x4a] = lVar7;
  plVar6[0x4c] = 0;
  *(undefined4 *)(plVar6 + 0x4d) = 0;
  plVar6[0x4e] = 0;
  plVar6[0x4f] = lVar7;
  plVar6[0x51] = 0;
  *(undefined4 *)(plVar6 + 0x52) = 0;
  plVar6[0x53] = 0;
  plVar6[2] = (long)plVar6;
  plVar6[4] = (long)puVar2;
  plVar6[5] = (long)puVar3;
  plVar6[0x4b] = 0x3ffffffffffffff;
  plVar6[0x50] = 0x3ffffffffffffff;
  *(undefined4 *)(plVar6 + 0x54) = 0x3f800000;
  *(undefined4 *)(plVar6 + 3) = 0x802a8;
  *plVar6 = (long)puVar1;
  plVar6[1] = (long)param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


