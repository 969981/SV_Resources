/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cc97c; name: FUN_002cc97c
 */


void FUN_002cc97c(char *param_1)

{
  undefined *puVar1;
  void *__ptr;
  size_t __n;
  byte local_48 [8];
  size_t local_40;
  void *local_38;
  
  if (*param_1 == '\0') {
                    /* try { // try from 002cca20 to 002cca43 has its CatchHandler @ 002cca98 */
    std::__put_character_sequence<char,std::char_traits<char>>((ostream *)(param_1 + 8),"\n",1);
    FUN_002ce614(local_48,param_1 + 0x10);
    __ptr = (void *)((ulong)local_48 | 1);
    __n = (ulong)(local_48[0] >> 1);
    if ((local_48[0] & 1) != 0) {
      __ptr = local_38;
      __n = local_40;
    }
    fwrite(__ptr,1,__n,*(FILE **)PTR_stderr_047cb8b8);
    *param_1 = '\x01';
    if ((local_48[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_38);
    }
  }
  puVar1 = PTR_DAT_047cc898 + 0x40;
  *(undefined **)(param_1 + 8) = PTR_DAT_047cc898 + 0x18;
  *(undefined **)(param_1 + 0x78) = puVar1;
  *(undefined **)(param_1 + 0x10) = PTR_DAT_047cc8a0 + 0x10;
  if ((param_1[0x50] & 1U) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x60));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 0x10));
  std::ostream::~ostream((ostream *)(param_1 + 8));
  std::ios::~ios((ios *)(param_1 + 0x78));
  return;
}


