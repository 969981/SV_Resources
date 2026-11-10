/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cc387c; name: FUN_01cc387c
 */


void FUN_01cc387c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0x50;
  if (DAT_0481b810 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (undefined8 *)FUN_01cc4530(param_2);
  local_30 = *puVar2;
  uStack_28 = puVar2[1];
  FUN_01cc45b0(param_1,uVar1,&local_30);
  return;
}


