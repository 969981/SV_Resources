/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


