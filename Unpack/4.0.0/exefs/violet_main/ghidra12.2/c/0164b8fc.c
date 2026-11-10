/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164b8fc; name: FUN_0164b8fc
 */


long * FUN_0164b8fc(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x4078,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar5 + 1,0,0x4070);
  puVar2 = PTR_DAT_047d66f8;
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *plVar5 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar5[1] = lVar7;
  plVar5[4] = (long)(puVar2 + 0x88);
  plVar8 = plVar5 + 5;
  *plVar8 = (long)(puVar2 + 0xd8);
  plVar5[7] = 0;
  plVar5[6] = 0;
  FUN_00d1a3f4(plVar5 + 6,plVar8);
  *(undefined1 *)(plVar5 + 10) = 0;
  *plVar5 = (long)&PTR_LAB_04580a30;
  plVar5[4] = (long)&PTR_LAB_04580af0;
  *(undefined4 *)((long)plVar5 + 0x54) = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  *plVar8 = (long)&DAT_04580b40;
  plVar5[0xe] = 0xd;
  plVar5[0xc] = -0x53e5c4fef2a901ba;
  plVar5[0xd] = (long)"ExclusionArea";
  lVar6 = 0x78;
  do {
    puVar1 = (undefined8 *)((long)plVar5 + lVar6);
    lVar6 = lVar6 + 0x40;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 1;
  } while (puVar1 + 8 != plVar5 + 0x80f);
  *(undefined4 *)(plVar5 + 3) = 0x84078;
  plVar5[1] = (long)param_1;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


