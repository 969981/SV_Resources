/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b030; name: FUN_0052b030
 */


void FUN_0052b030(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_047f5238 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_047f5238), puVar1 = PTR_DAT_047cba80, iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_047cba80 + 0x10) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
                    /* try { // try from 0052b06c to 0052b077 has its CatchHandler @ 0052b088 */
    FUN_0052d820(PTR_LAB_047cdc40);
    __cxa_guard_release(&DAT_047f5238);
    return;
  }
  return;
}


