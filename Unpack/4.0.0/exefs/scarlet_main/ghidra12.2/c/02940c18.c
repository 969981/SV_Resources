/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940c18; name: FUN_02940c18
 */


void FUN_02940c18(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_014813f4(param_1,*param_3);
  uVar2 = FUN_01243584(param_1);
  FUN_01243a30(uVar2,uVar1,*(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 5));
  return;
}


