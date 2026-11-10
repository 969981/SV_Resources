/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c808b4; name: FUN_01c808b4
 */


void FUN_01c808b4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = (uint)DAT_04815bb0;
  FUN_01c450f0(auStack_38,param_2);
  FUN_01c80d98(param_1,-((ulong)~uVar1 & 1),auStack_38);
  FUN_00d8e444(auStack_38);
  return;
}


