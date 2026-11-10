/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124686c; name: FUN_0124686c
 */


void FUN_0124686c(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (*(char *)((long)param_2 + 0xa6) != '\0') {
    lVar3 = *param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    while (lVar3 != 0) {
      uVar2 = FUN_01246e90(param_1);
      FUN_01246e98(uVar2,lVar3,0x71);
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      lVar3 = param_2[bVar1];
    }
  }
  return;
}


