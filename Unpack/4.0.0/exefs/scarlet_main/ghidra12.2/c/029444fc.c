/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029444fc; name: FUN_029444fc
 */


char FUN_029444fc(undefined8 param_1,byte param_2,byte param_3)

{
  char cVar1;
  
  cVar1 = '\a';
  if ((param_2 != 0x12) && (param_3 != 0x12)) {
    cVar1 = (&DAT_03d6286c)[(ulong)param_3 + (ulong)param_2 * 0x12];
    if (cVar1 == '\x04') {
      return '\a';
    }
    if (cVar1 == '\x02') {
      return '\x06';
    }
    if (cVar1 != '\b' && cVar1 != '\0') {
      cVar1 = '\0';
    }
  }
  return cVar1;
}


