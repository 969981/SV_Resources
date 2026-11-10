/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01afb700; name: FUN_01afb700
 */


void FUN_01afb700(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    lVar3 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + -0x28;
      }
    }
  }
  else if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    lVar3 = *(long *)(param_2 + 8);
  }
  else {
    lVar3 = 0;
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(long *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_048024e0 & 1)) = lVar3;
  }
  return;
}


