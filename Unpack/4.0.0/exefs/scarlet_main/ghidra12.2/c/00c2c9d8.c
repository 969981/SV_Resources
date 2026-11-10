/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2c9d8; name: FUN_00c2c9d8
 */


void FUN_00c2c9d8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00c2c9d8(param_1,*param_2);
  FUN_00c2c9d8(param_1,param_2[1]);
  lVar3 = tpidr_el0;
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar4,param_2,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c2ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0,8);
  return;
}


