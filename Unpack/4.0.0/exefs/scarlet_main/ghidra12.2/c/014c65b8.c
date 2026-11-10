/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c65b8; name: FUN_014c65b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_014c65b8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x110,0x10);
  puVar5 = PTR_DAT_047d66f8;
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar12 = *param_3;
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar10 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *plVar8 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar8[1] = lVar10;
  plVar8[4] = (long)(puVar5 + 0x88);
  plVar11 = plVar8 + 5;
  *plVar11 = (long)(puVar5 + 0xd8);
  plVar8[7] = 0;
  plVar8[6] = 0;
  FUN_00d1a3f4(plVar8 + 6,plVar11);
  *(undefined8 *)((long)plVar8 + 0x4c) = 0x3f8000003f800000;
  *(undefined1 *)(plVar8 + 9) = 1;
  lVar2 = DAT_03cab628;
  lVar1 = DAT_03cab620;
  lVar10 = _UNK_03caa5b8;
  lVar9 = _DAT_03caa5b0;
  plVar8[4] = (long)&PTR_LAB_04608460;
  lVar4 = _UNK_03cabe68;
  lVar3 = _DAT_03cabe60;
  *plVar8 = (long)&DAT_04608360;
  plVar8[8] = lVar12;
  *plVar11 = (long)&DAT_046084b0;
  plVar8[0xd] = lVar2;
  plVar8[0xc] = lVar1;
  plVar8[0xf] = lVar10;
  plVar8[0xe] = lVar9;
  *(undefined8 *)((long)plVar8 + 0x84) = 0x40490fdb40490fdb;
  *(undefined8 *)((long)plVar8 + 0x8c) = 0x40490fdb40490fdb;
  *(undefined1 *)(plVar8 + 0x10) = 0;
  *(undefined4 *)(plVar8 + 3) = 0x100110;
  plVar8[1] = (long)param_2;
  plVar8[2] = (long)plVar8;
  plVar8[0x15] = lVar2;
  plVar8[0x14] = lVar1;
  plVar8[0x17] = lVar4;
  plVar8[0x16] = lVar3;
  lVar1 = _UNK_03cabe58;
  lVar12 = _DAT_03cabe50;
  plVar8[0x19] = lVar10;
  plVar8[0x18] = lVar9;
  plVar8[0x1b] = lVar1;
  plVar8[0x1a] = lVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return plVar8;
}


