/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d0aa4; name: FUN_031d0aa4
 */


void FUN_031d0aa4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  param_1 = param_1 + 200;
  do {
    FUN_031d2e9c(param_1 + 0x20,0xffffffffffffffff,0);
    **(undefined1 **)(param_1 + 0x20) = 1;
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        (**(code **)(PTR_PTR_046a5408 + 0x20))
                  (&PTR_PTR_046a5408,*(undefined8 *)(param_1 + 0x28),
                   (long)*(int *)(param_1 + 0x30) << 3);
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      (**(code **)(PTR_PTR_046a5408 + 0x20))
                (&PTR_PTR_046a5408,*(undefined8 *)(param_1 + 0x28),
                 (long)*(int *)(param_1 + 0x30) << 3);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_031d2d7c(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0xe8;
  } while (lVar1 != 0);
  return;
}


