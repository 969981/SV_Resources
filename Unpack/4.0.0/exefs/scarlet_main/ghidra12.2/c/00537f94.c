/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00537f94; name: FUN_00537f94
 */


void FUN_00537f94(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  long lVar2;
  
  if (*(int *)PTR_DAT_047cdcf8 != 0) {
    FUN_0052b230(PTR_DAT_047cdcf8);
  }
  puVar1 = PTR_DAT_047cdd80;
  FUN_004f9370(PTR_DAT_047cdd80,0);
  lVar2 = *(long *)(*(long *)(puVar1 + 0x58) + 0x88);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar2 == extraout_x1) {
    FUN_00538020(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


