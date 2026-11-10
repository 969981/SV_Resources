/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0b43c; name: FUN_01c0b43c
 */


void FUN_01c0b43c(undefined8 *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    if (*(long *)(param_2 + 8) != 0) {
      FUN_01c0b8d4();
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_01c0b814(param_1,param_2 + 8);
      return;
    }
    if (cVar1 == '\0') {
      FUN_01c0b758(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
  }
  *param_1 = 0;
  return;
}


