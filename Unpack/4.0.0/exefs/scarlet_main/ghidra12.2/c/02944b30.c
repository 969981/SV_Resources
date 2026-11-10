/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944b30; name: FUN_02944b30
 */


void FUN_02944b30(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_02944360(param_1,0x16);
  if (iVar1 == 0xc) {
    uVar2 = FUN_02944360(param_1,3);
    uVar3 = FUN_02944800(param_1,uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_01453730(param_1,0x34,0x14cd);
      return;
    }
  }
  return;
}


