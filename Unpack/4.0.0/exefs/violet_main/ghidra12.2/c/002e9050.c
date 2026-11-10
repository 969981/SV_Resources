/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e9050; name: FUN_002e9050
 */


void FUN_002e9050(void)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 002e9064 to 002e9067 has its CatchHandler @ 002e9080 */
  FUN_002e9094();
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_047cc8c0,PTR__length_error_047cc8c8);
}


