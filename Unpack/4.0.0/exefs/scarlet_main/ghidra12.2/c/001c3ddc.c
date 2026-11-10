/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c3ddc; name: FUN_001c3ddc
 */


void FUN_001c3ddc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf58);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001dc298(param_1,2,2);
  do {
    lVar1 = FUN_001c3e7c(param_1,*puVar2,*(undefined8 *)(param_1 + 0xf70),
                         *(ulong *)(param_1 + 0xf40) >> 5 & 1);
    if (lVar1 == 0) {
      FUN_001db818(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
    }
    else {
      *(long *)(param_1 + 0xf70) = lVar1;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
  FUN_001e04f0(*(undefined8 *)(param_1 + 0xf58));
  *(undefined8 *)(param_1 + 0xf58) = 0;
  FUN_001dc2d8(param_1,2);
  return;
}


