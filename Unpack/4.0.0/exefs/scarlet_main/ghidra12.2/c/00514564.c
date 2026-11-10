/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00514564; name: FUN_00514564
 */


undefined8 * FUN_00514564(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_047f51d8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047f51d8), iVar1 == 0)) {
    return DAT_047f51d0;
  }
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
                    /* try { // try from 005145b8 to 005145c7 has its CatchHandler @ 005145e8 */
  FUN_0052d820(PTR_FUN_047cdbc0,puVar2);
  DAT_047f51d0 = puVar2;
  __cxa_guard_release(&DAT_047f51d8);
  return DAT_047f51d0;
}


