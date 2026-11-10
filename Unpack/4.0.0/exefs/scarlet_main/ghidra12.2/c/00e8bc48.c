/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8bc48; name: FUN_00e8bc48
 */


void FUN_00e8bc48(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_00e8be88(&local_38);
  lVar1 = local_38;
  uVar2 = FUN_00e8be24(param_1,local_38);
  local_38 = 0;
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    FUN_00e8f80c(auStack_30,lVar1);
  }
  return;
}


