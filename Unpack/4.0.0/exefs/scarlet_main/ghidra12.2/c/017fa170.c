/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fa170; name: FUN_017fa170
 */


void FUN_017fa170(long *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x5555555555555555) < 0x10) {
    lVar2 = param_1[1];
    local_40 = 0;
    plStack_38 = param_1 + 3;
    local_58 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x300,0x10);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 4) * 0x10;
    local_40 = local_58 + 0x300;
    local_48 = lStack_50;
    FUN_017fa234(param_1,&local_58);
    FUN_017fa2dc(&local_58);
  }
  return;
}


