/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f32c0; name: FUN_026f32c0
 */


void FUN_026f32c0(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = DAT_04859338;
  uVar2 = (**(code **)(*DAT_04859338 + 0xf8))(DAT_04859338);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,param_1,0,0x20);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x026f330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0,0x20);
  return;
}


