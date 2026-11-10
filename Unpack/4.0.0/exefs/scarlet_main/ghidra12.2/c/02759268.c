/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02759268; name: FUN_02759268
 */


void FUN_02759268(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  for (puVar1 = *(undefined8 **)(param_1 + 0x120); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar3 = FUN_0275a52c(*puVar1,param_2);
    if ((uVar3 & 1) != 0) {
      FUN_0275a648(*puVar1,param_3);
    }
  }
  return;
}


