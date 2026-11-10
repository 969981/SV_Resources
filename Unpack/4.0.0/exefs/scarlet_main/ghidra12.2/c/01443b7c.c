/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01443b7c; name: FUN_01443b7c
 */


void FUN_01443b7c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_01443bc8();
  iVar1 = FUN_01443bd0();
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_01443bc8(param_2);
  FUN_01443be0(param_1,uVar2,0);
  return;
}


