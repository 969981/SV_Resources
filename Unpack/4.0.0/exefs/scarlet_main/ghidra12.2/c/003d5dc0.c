/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d5dc0; name: FUN_003d5dc0
 */


void FUN_003d5dc0(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x750) != 0) {
    *param_2 = *(long *)(param_1 + 0x750);
    *param_3 = *(undefined8 *)(param_1 + 0x748);
    return;
  }
  *param_2 = (long)&DAT_03cdd17a;
  uVar1 = 2;
  if ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) == 0) {
    uVar1 = 3;
  }
  *param_3 = uVar1;
  return;
}


