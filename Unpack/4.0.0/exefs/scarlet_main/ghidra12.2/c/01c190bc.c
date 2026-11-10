/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c190bc; name: FUN_01c190bc
 */


void FUN_01c190bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_18 [8];
  
  uVar1 = DAT_048124a8;
  FUN_01c1a878(auStack_40);
  puVar2 = (undefined8 *)FUN_01c1a8e8(param_3);
  local_48 = *puVar2;
  FUN_01c1a970(auStack_18,uVar1,auStack_40,&local_48);
  FUN_01c1a9d0(param_1,auStack_18);
  FUN_01c19328(auStack_18);
  FUN_01c1aab8(auStack_40);
  return;
}


