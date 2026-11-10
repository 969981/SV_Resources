/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00808bc4; name: FUN_00808bc4
 */


void FUN_00808bc4(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined1 auStack_40 [16];
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_0080a990(auStack_40,*(undefined8 *)(param_1 + 0x13e8),*param_2,param_4,param_5,0);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


