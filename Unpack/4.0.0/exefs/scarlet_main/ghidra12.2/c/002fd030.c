/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fd030; name: FUN_002fd030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002fd030(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 local_50 [4];
  undefined8 local_48;
  int local_40 [2];
  long *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0038db40(&DAT_047ef378);
  if (DAT_047ef2f8 == 0) {
    DAT_047ef398 = FUN_00305820(param_1,0,0);
    DAT_047ef2f8 = FUN_003736a0(0);
    local_50[0] = 0x101;
    local_48 = 0;
    FUN_0038f3ac(local_40,"alts_tsi_handshaker",FUN_002fd140,0,0,local_50);
    DAT_047ef2d8 = local_40[0];
    DAT_047ef2e0 = local_38;
    DAT_047ef2f0 = uStack_28;
    _DAT_047ef2e8 = local_30;
    uVar1 = FUN_003581e0();
    DAT_047ef300 = uVar1;
    uVar2 = FUN_00371a20(DAT_047ef2f8);
    FUN_00358220(uVar1,uVar2);
    if (DAT_047ef2e0 == (long *)0x0) {
      if (DAT_047ef2d8 != 4) goto LAB_002fd13c;
    }
    else {
      if (DAT_047ef2d8 != 1) {
LAB_002fd13c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      DAT_047ef2d8 = 2;
      (**(code **)(*DAT_047ef2e0 + 0x10))();
    }
  }
  FUN_0038db60(&DAT_047ef378);
  return;
}


