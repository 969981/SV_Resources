/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a59c0; name: FUN_028a59c0
 */


void FUN_028a59c0(void)

{
  code *pcVar1;
  char *pcVar2;
  
  std::locale::locale((locale *)&DAT_0485f370);
  DAT_0485f378 = std::locale::use_facet((id *)&DAT_0485f370);
  DAT_0485f380 = std::locale::use_facet((id *)&DAT_0485f370);
  DAT_0485f388 = 0;
  DAT_0485f390 = 0;
  DAT_0485f398 = 0;
  DAT_0485f3a0 = 0;
  DAT_0485f3a8 = 0;
  pcVar2 = (char *)FUN_014684b8(&DAT_0485f370,"UnixTimeSecond *: *([0-9]+)","");
  if (pcVar2 != "") {
    FUN_028a5a40();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x28a5a3c);
    (*pcVar1)();
  }
  return;
}


