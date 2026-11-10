/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01778c00; name: FUN_01778c00
 */


undefined8 * FUN_01778c00(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *__s;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
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
  FUN_01778d38(__s);
  __s[7] = 0;
  *__s = &DAT_04540d60;
  __s[1] = param_1;
  __s[9] = 0;
  __s[0xb] = 0;
  __s[0xd] = 0;
  __s[0xf] = 0;
  __s[0x11] = 0;
  __s[0x13] = 0;
  __s[0x15] = 0;
  __s[0x17] = 0;
  __s[0x19] = 0;
  __s[0x1b] = 0;
  __s[0x1d] = 0;
  __s[0x1f] = 0;
  __s[0x21] = 0;
  __s[0x23] = 0;
  __s[0x25] = 0;
  __s[0x27] = 0;
  __s[0x29] = 0;
  __s[0x2b] = 0;
  __s[2] = __s;
  *(undefined4 *)(__s + 3) = 0x80168;
  __s[4] = &PTR_LAB_04540d90;
  __s[5] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return __s;
}


