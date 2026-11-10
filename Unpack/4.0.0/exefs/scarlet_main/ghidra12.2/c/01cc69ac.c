/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cc69ac; name: FUN_01cc69ac
 */


void FUN_01cc69ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  uVar1 = 0x50;
  if (DAT_0481b818 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (undefined8 *)FUN_01cc7660(param_2);
  local_28 = *puVar2;
  FUN_01cc76e0(param_1,uVar1,&local_28);
  return;
}


