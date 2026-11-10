/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013447c0; name: FUN_013447c0
 */


bool FUN_013447c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1e8);
  if (lVar3 == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x110);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x208) = param_2;
    if (puVar1 == puVar2) {
      lVar3 = 0;
    }
    else {
      FUN_013447c0(*puVar1,param_2);
      while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
        FUN_013447c0(*puVar1,param_2);
      }
      lVar3 = *(long *)(param_1 + 0x1e8);
    }
  }
  return lVar3 != 0;
}


