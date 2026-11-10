/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f2ffc; name: FUN_019f2ffc
 */


void FUN_019f2ffc(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined *puVar1;
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  undefined4 local_14;
  
  puVar1 = PTR_LAB_047d4720;
  if (DAT_04805f28 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c[0] = param_4;
  local_18[0] = param_3;
  local_14 = param_2;
  FUN_019f304c(param_1,puVar1,0,&local_14,local_18,local_1c);
  return;
}


