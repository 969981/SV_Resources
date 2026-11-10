/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e9e8; name: FUN_0297e9e8
 */


void FUN_0297e9e8(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_01243584();
  uVar2 = FUN_0297ea80(uVar1,*(undefined1 *)(param_3 + 4),param_3 + 8);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_01243584(param_1);
    FUN_0124beb0(uVar1,8);
    if (*(char *)(param_3 + 0x18) != '\x01') {
      FUN_01243584(param_1);
      FUN_0297ead4();
      uVar1 = FUN_01243584(param_1);
      FUN_0297eae4(uVar1,*(undefined1 *)(param_3 + 4));
    }
    uVar1 = FUN_01243584(param_1);
    FUN_0124bf8c(uVar1,8,*(undefined1 *)(param_3 + 4));
    *param_2 = 1;
  }
  return;
}


