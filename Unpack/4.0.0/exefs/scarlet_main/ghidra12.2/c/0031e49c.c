/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0031e49c; name: FUN_0031e49c
 */


undefined8 FUN_0031e49c(long param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (pbVar2 = *(byte **)(*(long *)(param_1 + 0x30) + 8), pbVar2 == (byte *)0x0)) {
      return 0;
    }
    if ((*pbVar2 & 1) == 0) {
      pbVar2 = pbVar2 + 8;
    }
    else {
      pbVar2 = *(byte **)(pbVar2 + 8);
    }
    uVar1 = *(undefined8 *)(pbVar2 + DAT_047ef440 * 8);
  }
  return uVar1;
}


