/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00451bc0; name: FUN_00451bc0
 */


void FUN_00451bc0(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_1 != (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 3);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      puVar3 = *(undefined8 **)(*param_1 + (ulong)uVar2 * 8);
      while (puVar3 != (undefined8 *)0x0) {
        uVar1 = *puVar3;
        puVar3 = (undefined8 *)puVar3[1];
        (*param_2)(uVar1,param_3);
      }
    }
  }
  return;
}


