/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01252a54; name: FUN_01252a54
 */


void FUN_01252a54(long param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xc);
  if (*pcVar1 != param_2) {
    if (*pcVar1 != '\x05') {
      pcVar1 = (char *)(param_1 + 0xd);
      if (*pcVar1 == param_2) {
        return;
      }
      if (*pcVar1 != '\x05') {
        pcVar1 = (char *)(param_1 + 0xe);
        if (*pcVar1 == param_2) {
          return;
        }
        if (*pcVar1 != '\x05') {
          pcVar1 = (char *)(param_1 + 0xf);
          if (*pcVar1 == param_2) {
            return;
          }
          if (*pcVar1 != '\x05') {
            pcVar1 = (char *)(param_1 + 0x10);
            if (param_2 == '\x05') {
              return;
            }
            if (*pcVar1 != '\x05') {
              return;
            }
          }
        }
      }
    }
    *pcVar1 = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}


