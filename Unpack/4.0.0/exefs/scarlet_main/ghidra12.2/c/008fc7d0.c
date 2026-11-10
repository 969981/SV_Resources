/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008fc7d0; name: _INIT_143
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_143(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_047d41c8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d41c8), puVar2 = PTR_DAT_047d41d0,
     uVar1 = _DAT_03cabe50, iVar3 != 0)) {
    *(undefined8 *)(PTR_DAT_047d41d0 + 8) = _UNK_03cabe58;
    *(undefined8 *)puVar2 = uVar1;
    __cxa_guard_release(PTR_DAT_047d41c8);
    return;
  }
  return;
}


