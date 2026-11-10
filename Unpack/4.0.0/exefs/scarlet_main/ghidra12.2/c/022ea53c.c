/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ea53c; name: FUN_022ea53c
 */


uint FUN_022ea53c(double param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  puVar1 = &LAB_022ec708;
  if (DAT_04846438 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_14 = param_3;
  uVar2 = FUN_022ec854(param_2,puVar1,0,&local_14,&local_18);
  return uVar2 & 1;
}


