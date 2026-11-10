/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01460318; name: FUN_01460318
 */


void FUN_01460318(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (**(code **)(*(long *)*param_3 + 0x540))((long *)*param_3,4);
  if ((cVar1 == '\0') || (lVar2 = FUN_014813f4(param_1,cVar1), lVar2 == 0)) {
    return;
  }
  FUN_01461d0c(param_1,lVar2,*(undefined1 *)((long)param_3 + 9));
  FUN_01461b20(param_1,*param_3,*(undefined1 *)(param_3 + 1));
  return;
}


