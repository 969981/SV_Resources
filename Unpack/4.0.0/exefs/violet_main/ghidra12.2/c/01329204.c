/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01329204; name: FUN_01329204
 */


long * FUN_01329204(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar5,0x80008080);
  puVar2 = PTR_DAT_047d9c38;
  *plVar5 = (long)(PTR_DAT_047d9c38 + 0x10);
  plVar5[4] = (long)(puVar2 + 0x158);
  plVar5[5] = (long)(puVar2 + 0x280);
  puVar6 = puVar2 + 0x300;
  plVar5[6] = (long)(puVar2 + 0x2d8);
  plVar7 = plVar5 + 7;
  *plVar7 = (long)puVar6;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x26] = 0;
  plVar5[0x27] = 0;
  if (((char)plVar5[0xb] != -0x7e) || (*(char *)((long)plVar5 + 0x59) != -0x7e)) {
    lVar1 = plVar5[0xb];
    *(undefined2 *)(plVar5 + 0xb) = 0x8282;
    if (plVar5[9] != 0) {
      FUN_00c6a584(plVar5[9],plVar7);
      puVar6 = (undefined *)*plVar7;
    }
    (**(code **)(puVar6 + 0x20))(plVar7,(short)lVar1);
  }
  *(undefined4 *)(plVar5 + 3) = 0x100140;
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


