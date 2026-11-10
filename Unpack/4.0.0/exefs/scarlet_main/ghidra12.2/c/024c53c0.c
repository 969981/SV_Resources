/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c53c0; name: FUN_024c53c0
 */


void FUN_024c53c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047dee50;
  if (DAT_0484efd8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01af3d38(param_2);
  FUN_024c85c0(param_1,puVar1,0,uVar2);
  return;
}


