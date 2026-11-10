/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df5708; name: FUN_01df5708
 */


void FUN_01df5708(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_c8 [24];
  long *local_b0;
  long *local_a8;
  long *local_a0 [4];
  long *local_80;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_18;
  
  FUN_0100e6b8(*param_2,param_3,0);
  local_70 = &PTR_FUN_04542ef8;
  uStack_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_00cbf4c0(local_a0,param_4);
  FUN_010c7db4(&local_70,local_a0);
  local_a8 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar7;
  FUN_00cf9884(&local_18,uVar7,"global");
  plVar5 = local_a8;
  local_a8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  local_a8 = local_18;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  puVar8 = (undefined8 *)FUN_012f9cf0();
  puVar8 = (undefined8 *)FUN_012f9cf8(*puVar8);
  uVar7 = *puVar8;
  FUN_0135d26c(auStack_c8,&local_a8);
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar9 + 0x30) = DAT_04859430;
  }
  FUN_01100fc0(&local_18,uVar7,auStack_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  uVar7 = FUN_010fff68(*param_1,*(undefined8 *)(*param_1 + 8),&local_18);
  FUN_010ff8f0(uVar7,&local_70);
  if (local_18 != (long *)0x0) {
    lVar9 = local_18[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  FUN_00f43db0(&local_70);
  return;
}


