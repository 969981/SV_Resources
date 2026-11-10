/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00339eb4; name: FUN_00339eb4
 */


void FUN_00339eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0037b7c0(0);
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  *(undefined8 *)(lVar1 + 0x60) = param_3;
  plVar2 = (long *)FUN_00344390(*(undefined8 *)(param_1 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x00339f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,lVar1);
  return;
}


