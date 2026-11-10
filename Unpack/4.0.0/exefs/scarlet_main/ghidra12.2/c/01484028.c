/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01484028; name: FUN_01484028
 */


undefined1 FUN_01484028(undefined2 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined *local_20;
  undefined2 local_18;
  
  if (param_2 < 3) {
    local_20 = PTR_DAT_047ddad8 + 0x10;
    local_18 = param_1;
    uVar1 = FUN_01484070(&local_20);
    return uVar1;
  }
  return 0;
}


