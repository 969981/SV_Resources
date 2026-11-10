/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0e8d8; name: FUN_01d0e8d8
 */


void FUN_01d0e8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_200 [480];
  
  puVar1 = PTR_LAB_047d72a0;
  if (DAT_0482ccc8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d0f0b4(auStack_200,param_2,puVar1,0);
  FUN_01d0f100(param_1,auStack_200);
  FUN_01cfa274(auStack_200);
  return;
}


