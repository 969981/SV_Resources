/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336db44; name: FUN_0336db44
 */


undefined8 FUN_0336db44(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0333d8d0(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0336db84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 8))
                    ((long *)**(undefined8 **)(param_1 + 0x10),param_2,iVar1);
  return uVar2;
}


