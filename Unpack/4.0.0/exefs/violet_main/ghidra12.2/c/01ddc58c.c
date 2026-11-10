/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


