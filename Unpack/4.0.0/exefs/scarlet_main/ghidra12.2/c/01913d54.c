/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01913d54; name: FUN_01913d54
 */


void FUN_01913d54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_02789a70(param_1);
  return;
}


