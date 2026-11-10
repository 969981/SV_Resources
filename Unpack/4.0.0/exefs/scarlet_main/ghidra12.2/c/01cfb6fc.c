/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfb6fc; name: FUN_01cfb6fc
 */


void FUN_01cfb6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_FUN_047d7080;
  if (DAT_0482cc70 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01cfe240(param_3);
  FUN_01cfe304(auStack_40,param_2,puVar1,0,uVar2);
  FUN_01cfe370(param_1,auStack_40);
  FUN_01cfe3c8(auStack_40);
  return;
}


