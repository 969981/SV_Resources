/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e868ec; name: FUN_00e868ec
 */


undefined8 * FUN_00e868ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x220,8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00e86a58(puVar3,param_3,*param_4);
  *(undefined1 *)(puVar3 + 0x42) = 0;
  puVar3[0x41] = 0;
  *puVar3 = &PTR_LAB_04544310;
  puVar3[1] = param_2;
  puVar3[0x3e] = 0;
  puVar3[0x43] = 0;
  puVar3[2] = puVar3;
  *(undefined4 *)(puVar3 + 3) = 0x80220;
  puVar3[0x3f] = 0;
  puVar3[0x40] = 0;
  puVar3[4] = &PTR_LAB_045443a8;
  puVar3[5] = &PTR_LAB_045443f8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return puVar3;
}


