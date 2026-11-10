/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00820d70; name: FUN_00820d70
 */


void FUN_00820d70(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[1] == 0) {
    iVar1 = param_1[4];
    uVar2 = 0x165667b1;
  }
  else {
    iVar1 = ((uint)param_1[3] >> 0x19 | param_1[3] << 7) +
            ((uint)param_1[2] >> 0x1f | param_1[2] << 1) +
            ((uint)param_1[4] >> 0x14 | param_1[4] << 0xc);
    uVar2 = (uint)param_1[5] >> 0xe | param_1[5] << 0x12;
  }
  FUN_00820dd0(*param_1 + iVar1 + uVar2,param_1 + 6,param_1[10],0);
  return;
}


