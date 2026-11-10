/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298a890; name: FUN_0298a890
 */


void FUN_0298a890(undefined1 *param_1,byte *param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar2 = 4;
  if ((param_4 & 1) != 0) {
    uVar2 = 1;
  }
  *param_2 = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  do {
    iVar1 = FUN_012440f0(param_5,0x10000);
    if (param_3 <= iVar1) {
      return;
    }
    if (*param_2 < 3) {
      *param_2 = *param_2 + 1;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  *param_1 = 1;
  return;
}


