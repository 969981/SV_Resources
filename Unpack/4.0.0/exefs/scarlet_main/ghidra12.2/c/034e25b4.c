/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e25b4; name: FUN_034e25b4
 */


void FUN_034e25b4(long param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + -0x43) >> 3 & 1) == 0) {
    return;
  }
  plVar2 = (long *)(param_1 + -0x120);
  lVar1 = *(long *)(param_1 + -0x90);
  if (((lVar1 == 0) || ((*(short *)(lVar1 + 0x90) < 1 && (*(short *)(lVar1 + 0x94) < 1)))) &&
     (*param_3 != 0)) {
    FUN_034c7a54(*(undefined8 *)PTR_DAT_047e6cc0,*param_3,*(undefined4 *)(param_1 + -0x108),param_2)
    ;
    return;
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_034e1f80(plVar2,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x034e2674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2);
  return;
}


