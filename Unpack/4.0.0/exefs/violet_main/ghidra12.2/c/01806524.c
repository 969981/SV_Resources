/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01806524; name: FUN_01806524
 */


undefined8 * FUN_01806524(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *__s;
  
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
  __s = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x168,8);
  if (__s == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x168);
  FUN_018067e4(__s);
  *__s = &PTR_LAB_0455fb60;
  __s[8] = 0;
  __s[4] = &PTR_LAB_0455fb90;
  __s[5] = 0;
  __s[6] = __s + 6;
  __s[7] = __s + 6;
  FUN_018066b0(__s + 9);
  __s[0x13] = 0;
  __s[0x14] = 0;
  __s[0x11] = 0;
  __s[0x12] = 0;
  __s[0xf] = 0;
  __s[0x10] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  __s[0xd] = puVar1;
  __s[0xe] = 0;
  __s[0x15] = puVar1;
  __s[0x16] = 0;
  *(undefined4 *)(__s + 3) = 0x80168;
  __s[0x17] = 0;
  __s[0x18] = 0;
  __s[0x19] = 0;
  __s[0x1a] = 0;
  __s[0x1b] = 0;
  __s[0x1c] = 0;
  __s[1] = param_1;
  __s[2] = __s;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


