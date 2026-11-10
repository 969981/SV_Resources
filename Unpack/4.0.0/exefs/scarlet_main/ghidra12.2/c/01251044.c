/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01251044; name: FUN_01251044
 */


void FUN_01251044(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  
  FUN_01251100();
  uVar2 = FUN_01251114();
  if ((uVar2 & 1) != 0) {
    FUN_0123de68(param_1);
    FUN_0123de70();
    FUN_01245aa8();
    FUN_01245ab0(param_1);
    FUN_010af048();
    FUN_01251100(param_1);
    uVar2 = FUN_01251108();
    if ((uVar2 & 1) != 0) {
      FUN_018f6a20(param_1);
    }
    FUN_01243584(param_1);
    FUN_01251128();
    FUN_01253630(param_1);
    FUN_01251100(param_1);
    FUN_010aeffc();
    FUN_0123de68(param_1);
    FUN_0123de70();
    uVar2 = FUN_0123de78();
    if ((uVar2 & 1) == 0) {
      FUN_01246e90(param_1);
      FUN_01246b30();
    }
    FUN_01251154(param_1);
    FUN_0123de68(param_1);
    FUN_0123de70();
    uVar1 = FUN_01245aa0();
    *param_2 = uVar1;
  }
  return;
}


