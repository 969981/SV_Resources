/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d84c; name: FUN_01f6d84c
 */


undefined8 * FUN_01f6d84c(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x70,8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_01f6db78();
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined2 *)((long)puVar3 + 0x34) = 0;
  *puVar3 = &DAT_04559b60;
  puVar3[1] = param_1;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[2] = puVar3;
  *(undefined4 *)(puVar3 + 3) = 0x80070;
  puVar3[4] = &PTR_LAB_04559ba0;
  puVar3[5] = &PTR_LAB_04559bc0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return puVar3;
}


