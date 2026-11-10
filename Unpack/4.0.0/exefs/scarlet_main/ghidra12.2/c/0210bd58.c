/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210bd58; name: FUN_0210bd58
 */


long * FUN_0210bd58(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x940))();
  if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3), (uVar4 & 1) != 0))
  {
    uVar1 = (**(code **)(*plVar3 + 0x2d8))(plVar3);
    uVar5 = (**(code **)(*param_1 + 0x928))(param_1);
    plVar3 = (long *)FUN_01021c94(uVar5,uVar1);
    if (plVar3 != (long *)0x0) {
      puVar6 = (undefined8 *)(**(code **)plVar3[5])(plVar3 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0)) {
        uVar5 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar6 != (undefined8 *)0x0) {
        do {
          if (puVar6 == (undefined8 *)PTR_DAT_047d3f08) {
            return plVar3;
          }
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != (undefined8 *)0x0);
        return (long *)0x0;
      }
    }
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


