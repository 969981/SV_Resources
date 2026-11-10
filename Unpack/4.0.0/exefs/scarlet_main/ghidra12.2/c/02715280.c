/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02715280; name: FUN_02715280
 */


void FUN_02715280(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if (*(undefined8 **)(param_1 + 0xd0) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0xd0);
    do {
      puVar3 = puVar2 + 1;
      FUN_027152cc(*puVar2,param_2,param_3 & 1);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


