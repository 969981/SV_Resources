/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c70944; name: FUN_00c70944
 */


void FUN_00c70944(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((*(int *)(param_1 + 0x230) == 2) && (*(long *)(param_1 + 0x140) != 0)) {
    lVar1 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,0);
    FUN_00c709b0((double)*(long *)(lVar1 + 8) / 1000000000.0,param_1);
    return;
  }
  return;
}


