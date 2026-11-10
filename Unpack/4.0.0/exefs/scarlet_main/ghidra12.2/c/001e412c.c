/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e412c; name: FUN_001e412c
 */


undefined8 FUN_001e412c(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    sVar2 = strcspn(param_1,
                    "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x7f"
                   );
    if (sVar2 != sVar1) {
      return 3;
    }
  }
  return 0;
}


