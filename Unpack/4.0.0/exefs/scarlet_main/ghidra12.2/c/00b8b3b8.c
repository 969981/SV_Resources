/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8b3b8; name: FUN_00b8b3b8
 */


void FUN_00b8b3b8(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 != 0) {
    plVar5 = (long *)(param_1 + 0x68);
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x68);
      do {
        uVar3 = plVar7[4];
        if (param_2 <= uVar3 && uVar3 != param_2) {
          plVar4 = (long *)*plVar7;
          plVar5 = plVar7;
          if (plVar4 == (long *)0x0) {
            goto LAB_00b8b428;
          }
        }
        else {
          if (param_2 <= uVar3) goto LAB_00b8b428;
          plVar5 = plVar7 + 1;
          plVar4 = (long *)*plVar5;
          if (plVar4 == (long *)0x0) goto LAB_00b8b428;
        }
        plVar7 = plVar4;
      } while( true );
    }
    plVar7 = plVar5;
LAB_00b8b428:
    if (*plVar5 == 0) {
      lVar6 = tpidr_el0;
      plVar4 = *(long **)(lVar6 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
      puVar2[4] = param_2;
      puVar2[2] = plVar7;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar5 = (long)puVar2;
      if (**(long **)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x60) = **(long **)(param_1 + 0x60);
        puVar2 = (undefined8 *)*plVar5;
      }
      FUN_010108e0(*(undefined8 *)(param_1 + 0x68),puVar2);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      if (0 < *(int *)(param_2 + 0x28)) {
        lVar6 = 0;
        do {
          FUN_00b8b3b8(param_1,*(undefined8 *)
                                (*(long *)(param_2 + 0x20) +
                                (long)*(int *)(*(long *)(param_2 + 0x30) + lVar6 * 4) * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 0x28));
      }
    }
  }
  return;
}


