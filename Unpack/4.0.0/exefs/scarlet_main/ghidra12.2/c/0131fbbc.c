/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131fbbc; name: FUN_0131fbbc
 */


undefined4 FUN_0131fbbc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  memset(&local_b0,0,0x80);
  uVar2 = FUN_0131fc3c(param_1,param_2,&local_b0,param_3);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return uVar2;
}


