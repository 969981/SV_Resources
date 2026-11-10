/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5e3b0; name: FUN_01e5e3b0
 */


long FUN_01e5e3b0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ea5c30(lVar3,*param_3);
  *(undefined4 *)(lVar3 + 0x18) = 0x80058;
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


