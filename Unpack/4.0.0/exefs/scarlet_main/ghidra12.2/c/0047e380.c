/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e380; name: FUN_0047e380
 */


undefined8 FUN_0047e380(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  iVar1 = *param_1 + -1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
  *param_1 = iVar1;
  return uVar2;
}


