/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014852ec; name: FUN_014852ec
 */


void FUN_014852ec(void)

{
  int iVar1;
  
  if (((DAT_0485db08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485db08), iVar1 != 0)) {
    DAT_0485db00 = FUN_027602cc();
    __cxa_guard_release(&DAT_0485db08);
    return;
  }
  return;
}


