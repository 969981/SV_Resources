/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c81418; name: FUN_01c81418
 */


void FUN_01c81418(long *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_017f7db0(param_3);
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_2 + 8) + lVar2) = uVar1;
  }
  return;
}


