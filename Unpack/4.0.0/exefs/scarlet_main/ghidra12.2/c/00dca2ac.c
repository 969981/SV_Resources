/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dca2ac; name: FUN_00dca2ac
 */


void FUN_00dca2ac(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  short sVar11;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 400) == '\0') {
    if (**(char **)(param_1 + 0x118) != '\0') {
      plVar7 = (long *)FUN_00dca6d8(param_1 + 0x40,param_1 + 0x110);
      lVar9 = *plVar7;
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar11 = *(short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00dca5c4;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00dca5c4:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar9 + 0x10) != 0) {
              plVar7 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
              local_24 = 1;
              FUN_01583b8c(plVar7,&local_24,param_1 + 0x170);
              (**(code **)(*plVar7 + 0x60))(plVar7);
            }
            break;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar5 = PTR_DAT_047d3e30;
      uVar10 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)PTR_DAT_047d3e30;
      *(undefined8 *)(param_1 + 0x118) = uVar10;
      plVar7 = *(long **)(puVar5 + 0x18);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(puVar5 + 0x10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      plVar8 = *(long **)(param_1 + 0x128);
      *(long **)(param_1 + 0x128) = plVar7;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    if (**(char **)(param_1 + 0x138) != '\0') {
      plVar7 = (long *)FUN_00dca6d8(param_1 + 0x40,param_1 + 0x130);
      lVar9 = *plVar7;
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar11 = *(short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00dca50c;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00dca50c:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar9 + 0x10) != 0) {
              plVar7 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
              local_28 = 0;
              FUN_01583b8c(plVar7,&local_28,param_1 + 0x170);
              (**(code **)(*plVar7 + 0x60))(plVar7);
            }
            break;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar5 = PTR_DAT_047d3e30;
      uVar10 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)PTR_DAT_047d3e30;
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      plVar7 = *(long **)(puVar5 + 0x18);
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(puVar5 + 0x10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      plVar8 = *(long **)(param_1 + 0x148);
      *(long **)(param_1 + 0x148) = plVar7;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    if (**(char **)(param_1 + 0x158) != '\0') {
      plVar7 = (long *)FUN_00dca6d8(param_1 + 0x40,param_1 + 0x150);
      lVar9 = *plVar7;
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar11 = *(short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00dca644;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00dca644:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar9 + 0x10) != 0) {
              plVar7 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
              local_2c = 2;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              FUN_02163f68(plVar7,&local_2c);
              (**(code **)(*plVar7 + 0x60))(plVar7);
            }
            break;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar5 = PTR_DAT_047d3e30;
      uVar10 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)PTR_DAT_047d3e30;
      *(undefined8 *)(param_1 + 0x158) = uVar10;
      plVar7 = *(long **)(puVar5 + 0x18);
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(puVar5 + 0x10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      plVar8 = *(long **)(param_1 + 0x168);
      *(long **)(param_1 + 0x168) = plVar7;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dca448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x20))();
        return;
      }
    }
  }
  return;
}


