/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211a310; name: FUN_0211a310
 */


void FUN_0211a310(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x398);
  uVar3 = *(undefined8 *)(lVar2 + 0x1f0);
  *param_1 = *(undefined8 *)(lVar2 + 0x1e8);
  param_1[1] = uVar3;
  plVar1 = *(long **)(lVar2 + 0x200);
  param_1[2] = *(undefined8 *)(lVar2 + 0x1f8);
  param_1[3] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0211a338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


