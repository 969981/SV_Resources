/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00536a24; name: FUN_00536a24
 */


void FUN_00536a24(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x1;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)PTR_DAT_047cdda0 != 0) {
    FUN_0052b230(PTR_DAT_047cdda0);
  }
  puVar1 = PTR_DAT_047cdd80;
  FUN_004f9370(PTR_DAT_047cdd80,0);
  lVar4 = *(long *)(*(long *)(puVar1 + 0x58) + 0x48);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar4 != extraout_x1) {
    FUN_00505148(param_2,param_1);
    return;
  }
  if ((param_2[1] & 1U) != 0) {
    lVar4 = (param_2[1] & 0xfffffffffffffffeU) + 8;
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_00264e54((ulong *)(param_1 + 8),lVar4);
    }
    else {
      lVar2 = (uVar3 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar2,lVar4);
  }
  if ((int)param_2[2] != 0) {
    *(int *)(param_1 + 0x10) = (int)param_2[2];
  }
  return;
}


