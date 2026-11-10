/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293eb6c; name: FUN_0293eb6c
 */


void FUN_0293eb6c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  *param_2 = 0;
  FUN_01582534();
  uVar2 = FUN_014813e4();
  uVar3 = FUN_01481400(uVar2,*param_3);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_014813f4(param_1,*param_3);
    uVar3 = (**(code **)(*plVar4 + 0x200))();
    if (((uVar3 & 1) == 0) &&
       (uVar3 = (**(code **)(*plVar4 + 0x300))(plVar4,*(undefined1 *)(param_3 + 1)),
       (uVar3 & 1) == 0)) {
      plVar5 = (long *)(**(code **)plVar4[5])(plVar4 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
        uVar2 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar2;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_047d3f08) {
          uVar3 = FUN_01780124(plVar4);
          if ((uVar3 & 1) != 0) {
            return;
          }
          break;
        }
      }
      uVar2 = FUN_01243584(param_1);
      FUN_02983738(uVar2,*param_3,*(undefined1 *)(param_3 + 1),param_3[2]);
      uVar2 = FUN_01243584(param_1);
      FUN_02982f60(uVar2,*param_3,0x121,*param_3,*(undefined1 *)(param_3 + 1));
      *param_2 = 1;
    }
  }
  return;
}


