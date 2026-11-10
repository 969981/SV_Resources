/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddc58c; name: FUN_01ddc58c
 */


char FUN_01ddc58c(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  
  param_1 = param_1 + (ulong)param_2 * 0xc;
  cVar1 = *(short *)(param_1 + 0x526) != -1;
  cVar2 = '\x02';
  if (!(bool)cVar1) {
    cVar2 = '\x01';
  }
  if (*(short *)(param_1 + 0x528) != -1) {
    cVar1 = cVar2;
  }
  if (*(short *)(param_1 + 0x52a) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52c) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52e) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x530) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


