/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dd780; name: FUN_012dd780
 */


undefined8 * FUN_012dd780(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
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
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x380,8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  uVar4 = *param_2;
  FUN_00da3348(puVar3,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(puVar3 + 0x6e) = 1;
  *(undefined4 *)(puVar3 + 0x6b) = 1;
  puVar3[0x6d] = 0;
  puVar3[0x6c] = 0;
  *(undefined1 *)((long)puVar3 + 0x374) = 0;
  puVar3[0x6f] = uVar4;
  puVar3[2] = puVar3;
  *(undefined4 *)(puVar3 + 3) = 0x80380;
  puVar3[4] = &PTR_LAB_045ab720;
  puVar3[5] = &DAT_045ab770;
  *puVar3 = &DAT_045ab670;
  puVar3[1] = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return puVar3;
}


