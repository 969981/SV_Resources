/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298907c; name: FUN_0298907c
 */


void FUN_0298907c(long param_1,undefined2 *param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 2) != '\0') {
    FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_2[3],199,*param_2,0);
  }
  uVar1 = FUN_019d69c4(*(undefined8 *)(param_1 + 8),param_2[1]);
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_2[4],0x9b,*param_2,uVar1 & 1);
  if (*(char *)(param_2 + 2) == '\0') {
    return;
  }
  FUN_01679624(*(undefined8 *)(param_1 + 0x18),param_2[5],200,*param_2);
  return;
}


