/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f6a60; name: FUN_017f6a60
 */


void FUN_017f6a60(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[0xb] != 0) {
    FUN_017f6558(param_1,param_1[6]);
    lVar1 = param_1[1];
    param_1[6] = 0;
    if ((((lVar1 != 0) && (*(undefined8 *)*param_1 = 0, lVar1 != 1)) &&
        (*(undefined8 *)(*param_1 + 8) = 0, lVar1 != 2)) &&
       (((*(undefined8 *)(*param_1 + 0x10) = 0, lVar1 != 3 &&
         (*(undefined8 *)(*param_1 + 0x18) = 0, lVar1 != 4)) &&
        ((*(undefined8 *)(*param_1 + 0x20) = 0, lVar1 != 5 &&
         (*(undefined8 *)(*param_1 + 0x28) = 0, lVar1 != 6)))))) {
      lVar2 = 6;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[0xb] = 0;
  }
  return;
}


