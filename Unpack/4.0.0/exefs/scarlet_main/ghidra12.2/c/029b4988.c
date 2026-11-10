/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b4988; name: FUN_029b4988
 */


undefined8 FUN_029b4988(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40);
  if (*(long *)(param_1 + 0x80) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x80) + 0x1e8) & 1) != 0) {
      uVar1 = FUN_00d2b918(*(undefined8 *)(param_1 + 0x80),
                           *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x1f0));
      goto LAB_029b49d0;
    }
  }
  uVar1 = 0;
LAB_029b49d0:
  plVar2 = (long *)FUN_00d2b5d0(uVar1,param_2);
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x28))(), (uVar3 & 1) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x029b4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x68,uVar4);
  return uVar4;
}


