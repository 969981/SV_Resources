/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131878c; name: FUN_0131878c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0131878c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
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
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1b0,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar6,0x80008080);
  puVar3 = PTR_DAT_047d8d00;
  *(undefined1 *)((long)plVar6 + 0x11e) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6[4] = (long)(puVar3 + 0x158);
  plVar6[5] = (long)(puVar3 + 0x280);
  plVar6[6] = (long)(puVar3 + 0x2d8);
  plVar6[7] = (long)(puVar3 + 0x300);
  FUN_01318944(plVar6 + 0x24,0);
  FUN_01318c64(plVar6 + 0x26,0);
  *(undefined4 *)(plVar6 + 0x28) = 0;
  FUN_00ddaef8(plVar6 + 0x29,"default",0);
  *(undefined2 *)(plVar6 + 0x2e) = 0;
  *(undefined4 *)(plVar6 + 0x2a) = 0x3dcccccd;
  lVar2 = _UNK_03cabe58;
  lVar1 = _DAT_03cabe50;
  *(undefined1 *)(plVar6 + 0x30) = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  *(undefined4 *)((long)plVar6 + 0x184) = 0;
  *(undefined4 *)(plVar6 + 3) = 0x1001b0;
  plVar6[0x34] = 0;
  plVar6[0x35] = 0;
  plVar6[1] = (long)param_2;
  plVar6[2] = (long)plVar6;
  plVar6[0x33] = lVar2;
  plVar6[0x32] = lVar1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


