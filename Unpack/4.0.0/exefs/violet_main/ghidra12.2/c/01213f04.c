/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01213f04; name: FUN_01213f04
 */


long * FUN_01213f04(long *param_1,undefined8 param_2,long *param_3)

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
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x330,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar7 = *param_3;
  FUN_00e86a58(plVar6,param_2,lVar7);
  plVar6[0x41] = 0;
  plVar6[0x3f] = 0;
  plVar6[0x40] = 0;
  plVar6[0x3e] = 0;
  puVar1 = PTR_DAT_047dd3b8 + 0x10;
  puVar2 = PTR_DAT_047dd3b8 + 0xa8;
  puVar3 = PTR_DAT_047dd3b8 + 0xf8;
  plVar6[0x42] = 0;
  plVar6[4] = (long)puVar2;
  plVar6[5] = (long)puVar3;
  plVar6[0x46] = 0x3f8000003f800000;
  plVar6[0x47] = 0x3f800000;
  plVar6[0x48] = 0x100000001;
  plVar6[0x49] = 0x100000001;
  plVar6[0x4e] = 0x333333333333333;
  plVar6[0x55] = 0x1ffffffffffffff;
  plVar6[0x45] = 0;
  plVar6[0x44] = 0;
  plVar6[0x58] = (long)&DAT_cbf29ce484222645;
  plVar6[0x59] = (long)&DAT_03c886bc;
  plVar6[0x5f] = 0xaaaaaaaaaaaaaaa;
  *(undefined4 *)(plVar6 + 0x43) = 0;
  plVar6[0x4a] = 0;
  plVar6[0x4b] = 0;
  plVar6[0x4c] = 0;
  plVar6[0x4d] = lVar7;
  plVar6[0x4f] = 0;
  *(undefined4 *)(plVar6 + 0x50) = 0;
  plVar6[0x51] = 0;
  plVar6[0x52] = 0;
  plVar6[0x53] = 0;
  plVar6[0x54] = lVar7;
  plVar6[0x56] = 0;
  *(undefined4 *)(plVar6 + 0x57) = 0;
  plVar6[0x5a] = 0;
  plVar6[0x5b] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5d] = 0;
  plVar6[0x5e] = lVar7;
  plVar6[0x60] = 0;
  *(undefined4 *)(plVar6 + 0x61) = 0;
  plVar6[0x65] = 0;
  plVar6[100] = 0;
  plVar6[99] = 0;
  plVar6[0x62] = 0;
  plVar6[2] = (long)plVar6;
  *(undefined4 *)(plVar6 + 3) = 0x100330;
  *plVar6 = (long)puVar1;
  plVar6[1] = (long)param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


