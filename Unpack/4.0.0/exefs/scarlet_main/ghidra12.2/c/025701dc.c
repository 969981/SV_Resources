/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025701dc; name: FUN_025701dc
 */


void FUN_025701dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_FUN_047df650;
  if (DAT_04851ed8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_017869fc(param_2);
  FUN_02571a30(param_1,puVar1,0,uVar2);
  return;
}


