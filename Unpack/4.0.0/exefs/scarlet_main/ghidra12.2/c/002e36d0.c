/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e36d0; name: FUN_002e36d0
 */


void FUN_002e36d0(void)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 002e36e4 to 002e36e7 has its CatchHandler @ 002e3700 */
  FUN_002e3714();
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_047cc8c0,PTR__length_error_047cc8c8);
}


