/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ceea0; name: FUN_004ceea0
 */


void FUN_004ceea0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  long lVar2;
  
  if (*(int *)PTR_DAT_047cd7c8 != 0) {
    FUN_0052b230(PTR_DAT_047cd7c8);
  }
  puVar1 = PTR_DAT_047cd738;
  FUN_004f9370(PTR_DAT_047cd738,0);
  lVar2 = *(long *)(*(long *)(puVar1 + 0x58) + 0x28);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar2 == extraout_x1) {
    FUN_004cef2c(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


