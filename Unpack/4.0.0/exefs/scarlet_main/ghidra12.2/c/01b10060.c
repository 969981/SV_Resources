/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b10060; name: FUN_01b10060
 */


undefined8 * FUN_01b10060(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04803070 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04803070);
      if (iVar1 == 0) {
        puVar2 = &DAT_04803068;
      }
      else {
        DAT_04803068 = 0xa0a0a0a0a000a;
        __cxa_guard_release(&DAT_04803070);
        puVar2 = &DAT_04803068;
      }
    }
    else {
      puVar2 = &DAT_04803068;
    }
  }
  return puVar2;
}


