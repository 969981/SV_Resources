/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9d10c; name: FUN_01e9d10c
 */


void FUN_01e9d10c(undefined1 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_1e0 [26];
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [328];
  short local_78;
  undefined2 local_76;
  long *local_70 [2];
  
  puVar5 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar7 = PTR_DAT_047d4ca8;
  puVar6 = PTR_DAT_047d4ca0;
  lVar15 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar15;
  puVar9 = PTR_DAT_047d4ce8;
  puVar8 = PTR_DAT_047d4ce0;
  plVar2 = *(long **)(lVar15 + 0x1c8);
  for (plVar1 = *(long **)(lVar15 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar15 = *plVar1;
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x28))((undefined8 *)(lVar15 + 0x28));
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      uVar14 = FUN_01b3fb0c();
      *(undefined8 *)puVar9 = uVar14;
      __cxa_guard_release(puVar8);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar9) goto LAB_01e9d1c4;
    }
  }
  lVar15 = 0;
LAB_01e9d1c4:
  if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar16 = *(long *)puVar6;
  *(long *)puVar7 = lVar16;
  puVar6 = PTR_DAT_047d8f00;
  puVar5 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar16 + 0x1c0);
  plVar2 = *(long **)(lVar16 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar16 = *plVar1;
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x28))((undefined8 *)(lVar16 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
      uVar14 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar14;
      __cxa_guard_release(puVar5);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar6) goto LAB_01e9d238;
    }
  }
  lVar16 = 0;
LAB_01e9d238:
  FUN_00eebacc(local_70,lVar16,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54));
  if ((local_70[0] == (long *)0x0) ||
     ((((*(byte *)(*(long *)(local_70[0][0xe] + 0x10) + 4) >> 2 & 1) == 0 &&
       (sVar10 = FUN_00cf44f4(), sVar10 == 0)) ||
      (uVar13 = FUN_01e9e130(param_2,local_70), (uVar13 & 1) == 0)))) {
    *param_1 = 0;
  }
  else {
    memset(auStack_1e0,0,0x16c);
    FUN_01e9e398(lVar15,auStack_1e0);
    local_1c4 = FUN_0192028c(lVar15);
    local_1c6 = FUN_00e677a0(lVar15);
    local_1c5 = FUN_01e9e4c0(lVar15);
    local_78 = FUN_01e9e4c8(lVar15);
    local_78 = local_78 << 8;
    local_76 = 0x100;
    thunk_FUN_021f1018(local_70[0],auStack_1c0);
    memcpy(param_1 + 4,auStack_1e0,0x16c);
    *param_1 = 1;
  }
  if (local_70[0] != (long *)0x0) {
    plVar1 = local_70[0] + 5;
    do {
      lVar15 = *plVar1;
      iVar11 = (int)lVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


