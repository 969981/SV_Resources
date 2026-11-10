/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c3188; name: FUN_012c3188
 */


long * FUN_012c3188(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *__s;
  
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
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x148,8);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x148);
  FUN_012c3344(__s);
  puVar1 = PTR_DAT_047e2460 + 0x10;
  __s[4] = (long)(PTR_DAT_047e2460 + 0x40);
  __s[5] = 0;
  *__s = (long)puVar1;
  *(undefined4 *)((long)__s + 0x3c) = 1;
  nn::os::InitializeLightEvent(__s + 6,0,1);
  FUN_012c35a4(__s + 8);
  __s[0x16] = 0;
  __s[0x17] = 0;
  __s[0x15] = 0;
  FUN_012c3470(__s + 0x18);
  __s[0x28] = 0;
  __s[0x1c] = (long)&PTR_FUN_045e7400;
  __s[0x1d] = 0;
  __s[0x24] = (long)&DAT_cbf29ce484222645;
  __s[0x25] = (long)&DAT_03c886bc;
  __s[0x22] = 0;
  __s[0x23] = 0;
  *(undefined4 *)(__s + 3) = 0x80148;
  __s[0x20] = 0;
  __s[0x21] = 0;
  __s[0x1e] = 0;
  __s[0x1f] = 0;
  __s[0x26] = 0;
  __s[0x27] = 0;
  __s[1] = (long)param_1;
  __s[2] = (long)__s;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


