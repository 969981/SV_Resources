/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013d2c0; name: FUN_0013d2c0
 */


undefined8 * FUN_0013d2c0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x18) +
           (long)(int)(*(uint *)(param_2 + 0xc) &
                      (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
  while ((*(char *)((long)puVar2 + 9) != 'D' || (puVar2[2] != param_2))) {
    piVar1 = (int *)((long)puVar2 + 0xc);
    puVar2 = puVar2 + (long)*piVar1 * 3;
    if (*piVar1 == 0) {
      return &DAT_03cb6488;
    }
  }
  return puVar2;
}


