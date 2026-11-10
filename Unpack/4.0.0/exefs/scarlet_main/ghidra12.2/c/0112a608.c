/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112a608; name: FUN_0112a608
 */


undefined1 FUN_0112a608(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x13d) == '\0') {
    lVar15 = *(long *)(param_1 + 0x1d8);
    *(undefined8 *)(lVar15 + 0x40) = 0;
    *(undefined4 *)(lVar15 + 0x50) = 0;
    FUN_0112ae94(&local_40,lVar15,0);
    plVar12 = *(long **)(lVar15 + 0x48);
    *(undefined8 *)(lVar15 + 0x48) = 0;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        lVar7 = *plVar1;
        iVar11 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(ulong *)(lVar15 + 0x48) = CONCAT44(uStack_3c,local_40);
    puVar8 = PTR_DAT_047dadd8;
    if (((*PTR_DAT_047dadd8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047dadd8), iVar11 != 0)) {
      FUN_00100190(&LAB_02a27cb8,PTR_DAT_047dade0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dadd8);
    }
    puVar9 = PTR_DAT_047dade8;
    puVar14 = (undefined8 *)PTR_DAT_047dade0;
    lVar15 = *(long *)PTR_DAT_047dade0;
    *(long *)PTR_DAT_047dade8 = lVar15;
    if (*(char *)(lVar15 + 0x28) != '\0') {
      if (((*puVar8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047dadd8), puVar14 = (undefined8 *)PTR_DAT_047dade0,
         iVar11 != 0)) {
        FUN_00100190(&LAB_02a27cb8,PTR_DAT_047dade0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dadd8);
        puVar14 = (undefined8 *)PTR_DAT_047dade0;
      }
      *(undefined8 *)puVar9 = *puVar14;
      uVar13 = FUN_0112a954();
      if ((uVar13 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        FUN_0112a848(&local_40);
        *(undefined4 *)(param_1 + 0x164) = local_28;
        uVar10 = 1;
        *(undefined8 *)(param_1 + 0x154) = local_38;
        *(undefined8 *)(param_1 + 0x15c) = uStack_30;
        puVar14 = (undefined8 *)(param_1 + 0x154);
        if (*(char *)(param_1 + 0x13b) != '\0') {
          puVar14 = (undefined8 *)(param_1 + 0x168);
        }
        uVar4 = *(undefined4 *)(puVar14 + 2);
        uVar2 = puVar14[1];
        *(undefined8 *)(param_1 + 0x140) = *puVar14;
        *(undefined8 *)(param_1 + 0x148) = uVar2;
        *(undefined4 *)(param_1 + 0x150) = uVar4;
        *(undefined4 *)(param_1 + 0x1d0) = uStack_3c;
      }
      *(undefined1 *)(param_1 + 0x13d) = uVar10;
      return uVar10;
    }
    *(undefined8 *)(param_1 + 0x154) = 0x45afc80042960000;
    *(undefined8 *)(param_1 + 0x15c) = 0x45fd200042b40000;
    *(undefined4 *)(param_1 + 0x164) = 0x451ab000;
    puVar14 = (undefined8 *)(param_1 + 0x154);
    if (*(char *)(param_1 + 0x13b) != '\0') {
      puVar14 = (undefined8 *)(param_1 + 0x168);
    }
    uVar2 = *puVar14;
    uVar3 = puVar14[1];
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(puVar14 + 2);
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x148) = uVar3;
    *(undefined4 *)(param_1 + 0x1d0) = 0x3e4ccccd;
  }
  return 1;
}


