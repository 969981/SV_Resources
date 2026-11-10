/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fe008; name: FUN_029fe008
 */


int FUN_029fe008(undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((int)*(uint *)(param_2 + 0x98) < 1) {
    return -1;
  }
  uVar1 = 0;
  while( true ) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x90) + uVar1 * 8);
    if (((!(bool)(~((float)*(undefined8 *)(lVar2 + 0x90) <= param_1._0_4_) & 1)) &&
        (!(bool)(~(param_1._0_4_ <= (float)*(undefined8 *)(lVar2 + 0xa0)) & 1))) &&
       (!(bool)((~((float)*(undefined8 *)(lVar2 + 0x98) <= param_1._8_4_) |
                ~(param_1._8_4_ <= (float)*(undefined8 *)(lVar2 + 0xa8))) & 1))) break;
    uVar1 = uVar1 + 1;
    if (*(uint *)(param_2 + 0x98) == uVar1) {
      return -1;
    }
  }
  return (int)uVar1 + *(int *)(param_2 + 0x1e0) * 1000000;
}


