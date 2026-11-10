/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8ec88; name: FUN_01c8ec88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01c8ec88(byte *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((1 < *param_1) || (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 == (undefined8 *)0x0)) {
    if ((DAT_048166b0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048166b0);
      if (iVar2 != 0) {
        DAT_04816398 = uRam0000000000000001;
        FUN_01c8e564(&DAT_048163a0,9);
        DAT_048163d8 = 0;
        bVar1 = DAT_00000041 != '\0';
        if (bVar1) {
          memcpy(&DAT_048163e0,&DAT_00000049,0x2c8);
        }
        DAT_048166a8 = _DAT_00000311;
        DAT_048163d8 = bVar1;
        FUN_00100190(PTR_FUN_047d64a8,&DAT_04816398,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048166b0);
      }
      puVar3 = &DAT_04816398;
    }
    else {
      puVar3 = &DAT_04816398;
    }
  }
  return puVar3;
}


