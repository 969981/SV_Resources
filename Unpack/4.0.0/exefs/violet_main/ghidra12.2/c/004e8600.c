/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e8600; name: _INIT_51
 */


void _INIT_51(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047cda18 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047cda18), puVar1 = PTR_DAT_047cda20, iVar2 != 0)) {
    *(undefined **)PTR_DAT_047cda20 = PTR_LAB_047cda28;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047cda18);
    FUN_0052d9a0(PTR_DAT_047cda20);
    return;
  }
  FUN_0052d9a0(PTR_DAT_047cda20);
  return;
}


