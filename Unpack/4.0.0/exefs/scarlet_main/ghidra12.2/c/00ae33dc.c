/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae33dc; name: FUN_00ae33dc
 */


void FUN_00ae33dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[1];
  if (param_1[1] == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      FUN_01cfa410(lVar1 + -0x20);
      if ((*(byte *)(lVar1 + -0x40) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x28) + 0x18))
                  (*(long **)(lVar1 + -0x28),*(undefined8 *)(lVar1 + -0x30),
                   *(ulong *)(lVar1 + -0x40) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar1 + -0x60;
      if ((*(byte *)(lVar1 + -0x60) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x48) + 0x18))
                  (*(long **)(lVar1 + -0x48),*(undefined8 *)(lVar1 + -0x50),
                   *(ulong *)(lVar1 + -0x60) & 0xfffffffffffffffe,1);
      }
      lVar1 = lVar3;
    } while (lVar2 != lVar3);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00ae34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[2] - lVar1,8);
  return;
}


