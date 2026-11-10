/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01536f6c; name: FUN_01536f6c
 */


long * FUN_01536f6c(undefined8 param_1,long *param_2)

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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x570,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0104bbb4();
  puVar1 = PTR_DAT_047dd060;
  *plVar4 = (long)(PTR_DAT_047dd060 + 0x10);
  plVar4[4] = (long)(puVar1 + 0x188);
  plVar4[5] = (long)(puVar1 + 0x1d8);
  memset(plVar4 + 0x84,0,0x80);
  plVar4[0x95] = (long)&DAT_03c886bc;
  plVar4[0x99] = (long)&DAT_03c886bc;
  plVar4[0x9d] = (long)&DAT_03c886bc;
  plVar4[0xa1] = (long)&DAT_03c886bc;
  plVar4[0xa5] = (long)&DAT_03c886bc;
  plVar4[0xa9] = (long)&DAT_03c886bc;
  plVar4[0x96] = 0;
  plVar4[0x94] = (long)&DAT_cbf29ce484222645;
  plVar4[0x97] = 0;
  plVar4[0x98] = (long)&DAT_cbf29ce484222645;
  plVar4[0x9a] = 0;
  plVar4[0x9b] = 0;
  plVar4[0x9c] = (long)&DAT_cbf29ce484222645;
  plVar4[0x9e] = 0;
  plVar4[0x9f] = 0;
  plVar4[0xa0] = (long)&DAT_cbf29ce484222645;
  plVar4[0xa2] = 0;
  plVar4[0xa3] = 0;
  plVar4[0xa4] = (long)&DAT_cbf29ce484222645;
  plVar4[0xa7] = 0;
  plVar4[0xa6] = 0;
  plVar4[0xa8] = (long)&DAT_cbf29ce484222645;
  plVar4[0xaa] = 0;
  plVar4[0xab] = 0;
  *(undefined1 *)(plVar4 + 0xac) = 0;
  *(undefined4 *)(plVar4 + 3) = 0x100570;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


