/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c415f0; name: FUN_00c415f0
 */


void FUN_00c415f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if ((*param_2 != 0) && (lVar1 = FUN_00c41638(), lVar1 != 0)) {
    lVar1 = FUN_00c41638(*param_2);
    *(undefined1 *)(lVar1 + 0xb) = *(undefined1 *)*param_1;
  }
  return;
}


