/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188a620; name: FUN_0188a620
 */


uint FUN_0188a620(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  uint uVar2;
  byte local_1c [4];
  undefined8 local_18;
  
  puVar1 = PTR_FUN_047d55d0;
  if (DAT_0480ef70 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c[0] = param_3 & 1;
  local_18 = param_2;
  uVar2 = FUN_0188a674(param_1,puVar1,0,&local_18,local_1c);
  return uVar2 & 1;
}


