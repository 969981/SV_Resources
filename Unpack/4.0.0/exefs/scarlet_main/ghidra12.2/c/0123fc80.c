/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fc80; name: FUN_0123fc80
 */


undefined8 FUN_0123fc80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_0123ee04();
  if (((iVar1 == 0) && (uVar3 = FUN_0124a808(param_1), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_01248a4c(param_1), (uVar3 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


