/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd8a5c; name: FUN_01dd8a5c
 */


void FUN_01dd8a5c(long param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  
  if (param_3 != 0) {
    uVar2 = (ulong)param_3;
    do {
      if ((ulong)*param_2 < 0x6c) {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        FUN_0135d26c(auStack_50,
                     param_1 + (ulong)*(byte *)(param_1 + (ulong)*param_2 + 0xb38) * 0x10 + 0x38);
        FUN_01dcc3c4(uVar1,auStack_50,0);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


