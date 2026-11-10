/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012502bc; name: FUN_012502bc
 */


void FUN_012502bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_100 [8];
  undefined1 *local_f8;
  undefined1 auStack_f0 [176];
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 1 & 1) != 0) {
    FUN_01243d84(auStack_f0);
    local_f8 = auStack_f0;
    uVar5 = FUN_01243de8(*(undefined8 *)(param_1 + 0x78));
    FUN_01243df0(uVar5,auStack_100,&local_f8);
    FUN_01243d7c(auStack_f0);
    plVar6 = (long *)FUN_0168003c(auStack_f0);
    puVar2 = PTR_DAT_047d3f08;
    puVar1 = PTR_DAT_047d3f00;
    if (plVar6 != (long *)0x0) {
      do {
        uVar7 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar6);
        if ((uVar7 & 1) == 0) {
          puVar8 = (undefined8 *)(**(code **)plVar6[5])(plVar6 + 5);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar5 = FUN_01b07aa4();
            *(undefined8 *)puVar2 = uVar5;
            __cxa_guard_release(puVar1);
          }
          for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
            if (puVar8 == (undefined8 *)puVar2) {
              uVar7 = FUN_01780124(plVar6);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = (**(code **)(*plVar6 + 0x510))(plVar6,0x19), (uVar7 & 1) != 0)) {
                uVar5 = *(undefined8 *)(param_1 + 0x20);
                uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
                FUN_0125044c(uVar5,uVar3);
                uVar5 = *(undefined8 *)(param_1 + 0x20);
                uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
                FUN_0125043c(uVar5,uVar3);
              }
              break;
            }
          }
        }
        plVar6 = (long *)FUN_0168003c(auStack_f0);
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}


