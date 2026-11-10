/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029866d0; name: FUN_029866d0
 */


void FUN_029866d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_58 [32];
  long *local_38;
  
  uVar5 = FUN_0124e480();
  uVar6 = FUN_01582534(param_1);
  FUN_01247754(auStack_58,uVar5,uVar6);
  uVar7 = FUN_01460dbc(auStack_58,&local_38);
  puVar2 = PTR_DAT_047d3f08;
  puVar1 = PTR_DAT_047d3f00;
  plVar10 = local_38;
  do {
    if ((uVar7 & 1) == 0) {
      return;
    }
    local_38 = plVar10;
    puVar8 = (undefined8 *)(**(code **)plVar10[5])();
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar5 = FUN_01b07aa4();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if (puVar8 == (undefined8 *)puVar2) goto LAB_02986750;
    }
    plVar10 = (long *)0x0;
LAB_02986750:
    uVar7 = FUN_0297d978(param_1,local_38);
    if (((plVar10 != (long *)0x0) && ((uVar7 & 1) != 0)) &&
       (uVar7 = FUN_01780124(plVar10), (uVar7 & 1) == 0)) {
      uVar3 = (**(code **)(*local_38 + 0x98))();
      uVar3 = FUN_01689a40(param_1,uVar3);
      lVar9 = FUN_012531d4(param_1,2,uVar3);
      if (lVar9 != 0) {
        uVar5 = FUN_01243584(param_1);
        FUN_0182384c(uVar5,2,uVar3);
      }
    }
    uVar7 = FUN_01460dbc(auStack_58,&local_38);
    plVar10 = local_38;
  } while( true );
}


