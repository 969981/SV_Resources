/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc9ec8; name: FUN_01bc9ec8
 */


void FUN_01bc9ec8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x11a) == '\0') {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  param_1[1] = *(undefined8 *)(param_2 + 0x128);
  param_1[2] = uVar2;
  *param_1 = uVar1;
  return;
}


