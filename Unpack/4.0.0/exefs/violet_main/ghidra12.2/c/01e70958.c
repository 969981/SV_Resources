/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70958; name: FUN_01e70958
 */


void FUN_01e70958(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((((*param_1 != param_2) && (param_1[1] != param_2)) && (param_1[2] != param_2)) &&
     ((param_1[3] != param_2 && (param_1[4] != param_2)))) {
    pcVar1 = param_1 + 5;
    if (*pcVar1 != param_2) {
      if (*param_1 == -1) {
        pcVar1 = param_1;
      }
      else if (param_1[1] == -1) {
        pcVar1 = param_1 + 1;
      }
      else if (param_1[2] == -1) {
        pcVar1 = param_1 + 2;
      }
      else if (param_1[3] == -1) {
        pcVar1 = param_1 + 3;
      }
      else if (param_1[4] == -1) {
        pcVar1 = param_1 + 4;
      }
      else if (*pcVar1 != -1) {
        return;
      }
      *pcVar1 = (char)param_2;
      return;
    }
  }
  return;
}


