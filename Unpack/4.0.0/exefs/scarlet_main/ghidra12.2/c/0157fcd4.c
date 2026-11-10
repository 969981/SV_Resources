/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157fcd4; name: FUN_0157fcd4
 */


void FUN_0157fcd4(long param_1)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  FUN_0157fe00();
  plVar8 = *(long **)(param_1 + 0x48);
  plVar6 = (long *)(**(code **)plVar8[5])(plVar8 + 5);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar5 != 0))
  {
    uVar7 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar7;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (plVar6 == (long *)PTR_DAT_047dcd58) break;
    plVar6 = (long *)*plVar6;
  }
  uVar4 = (**(code **)(*plVar8 + 0x1a0))(plVar8);
  uVar3 = FUN_00cf44f4(*(undefined8 *)(plVar8[9] + 0x70));
  *(undefined2 *)(param_1 + 0x710) = uVar3;
  uVar3 = FUN_00cf41a8(*(undefined8 *)(plVar8[9] + 0x70));
  *(undefined2 *)(param_1 + 0x712) = uVar3;
  *(undefined1 *)(param_1 + 0x714) = 0;
  lVar9 = plVar8[9];
  cVar2 = FUN_010ca6e8(*(undefined8 *)(lVar9 + 0x70));
  if (cVar2 == '\x13') {
    cVar2 = FUN_00e9782c();
  }
  else {
    cVar2 = FUN_010ca6e8(*(undefined8 *)(lVar9 + 0x70));
  }
  cVar1 = '\0';
  if (cVar2 != '\x13') {
    cVar1 = cVar2;
  }
  *(char *)(param_1 + 0x715) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x0157fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar4 & 1);
  return;
}


