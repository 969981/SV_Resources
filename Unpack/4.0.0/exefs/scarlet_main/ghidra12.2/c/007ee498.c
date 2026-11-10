/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ee498; name: FUN_007ee498
 */


void FUN_007ee498(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = FUN_007ec4a8();
  if (lVar2 == 0) {
    return;
  }
  if ((int)param_1[0xc] == 0) {
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  else {
    lVar2 = FUN_007ec544(param_1);
    uVar1 = (*(int *)(lVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) -
            0x2a;
    uVar3 = *(uint *)((long)param_1 + 100);
    if (uVar1 < *(uint *)((long)param_1 + 100)) {
      *(uint *)((long)param_1 + 100) = uVar1;
      uVar3 = uVar1;
    }
    *(uint *)((long)param_1 + 100) = uVar3 + (int)param_1[0xc];
  }
  (**(code **)(*param_1 + 0x90))(param_1);
                    /* WARNING: Could not recover jumptable at 0x007ee524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}


