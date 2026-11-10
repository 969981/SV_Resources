/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bd9b0; name: FUN_016bd9b0
 */


void FUN_016bd9b0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_016bda58(&local_38);
  lVar1 = local_38;
  uVar2 = FUN_016bda0c(param_1,local_38);
  local_38 = 0;
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    FUN_016bf20c(auStack_30,lVar1);
  }
  return;
}


