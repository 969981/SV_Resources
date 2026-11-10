/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01687e24; name: FUN_01687e24
 */


long * FUN_01687e24(long *param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
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
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,600,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  param_2 = (long *)*param_2;
  uVar10 = *param_3;
  *plVar5 = (long)(PTR_DAT_047d66f8 + 0x10);
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_LAB_045dae00;
  plVar5[1] = lVar9;
  plVar5[4] = (long)&PTR_LAB_045daec8;
  plVar5[6] = (long)&PTR_LAB_045daef8;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *(undefined4 *)((long)plVar5 + 0x54) = 1;
  nn::os::InitializeLightEvent(plVar5 + 9,0,1);
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_a8 = 0x38e38e38e38e38e;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0x38e38e38e38e38e;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  local_b0 = param_2;
  local_80 = param_2;
  memcpy(plVar5 + 0xe,&uStack_b8,0x28);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  plVar5[0x13] = 0;
  memcpy(plVar5 + 0x14,&uStack_88,0x28);
  local_90 = 0;
  uStack_88 = 0;
  FUN_01688374(&local_d0);
  plVar5[0x1a] = 0;
  plVar5[0x1b] = (long)(plVar5 + 0x1b);
  *(undefined1 *)(plVar5 + 0x26) = 0;
  plVar5[0x1c] = (long)(plVar5 + 0x1b);
  plVar5[0x1d] = 0;
  plVar5[0x22] = (long)(plVar5 + 0x21);
  plVar5[0x23] = (long)(plVar5 + 0x21);
  *plVar5 = (long)&PTR_FUN_045dacb0;
  plVar5[0x1e] = (long)(plVar5 + 0x1e);
  plVar5[0x1f] = (long)(plVar5 + 0x1e);
  plVar5[4] = (long)&PTR_LAB_045dad78;
  plVar5[6] = (long)&PTR_LAB_045dada8;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  *(undefined4 *)(plVar5 + 0x24) = 0;
  plVar5[0x20] = 0;
  plVar5[0x21] = 0;
  plVar5[0x27] = 0;
  plVar5[0x28] = 0;
  puVar2 = PTR_DAT_047e1940;
  plVar5[0x29] = 0;
  plVar5[0x2a] = 0;
  (**(code **)puVar2)(&local_d0);
  (**(code **)PTR_DAT_047e1948)(&local_d0,*param_4);
  (**(code **)PTR_DAT_047e1950)(&local_d0,*(undefined4 *)(param_4 + 1));
  uVar10 = uVar10 & 0xfffffffffffff000;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar10,0x1000);
  lVar9 = plVar5[0x27];
  plVar5[0x27] = lVar6;
  if (lVar9 != 0) {
    plVar1 = (long *)plVar5[0x28];
    lVar6 = plVar5[0x29];
    lVar11 = plVar5[0x2a];
    uVar7 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar9,lVar6,lVar11);
        goto LAB_01688064;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar6,lVar11);
  }
LAB_01688064:
  plVar5[0x28] = (long)param_2;
  plVar5[0x29] = uVar10;
  plVar5[0x2a] = 0x1000;
  (**(code **)PTR_DAT_047e1958)(&local_d0,plVar5[0x27],uVar10);
  (**(code **)PTR_DAT_047e1960)(plVar5 + 0x2b,&local_d0);
  FUN_01688244(plVar5 + 8,uVar10,0);
  *(undefined4 *)(plVar5 + 3) = 0x80258;
  plVar5[1] = (long)param_1;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


