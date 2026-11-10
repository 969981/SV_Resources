/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035b570; name: ntohs
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_047ca3a0)(__netshort);
  return uVar1;
}


