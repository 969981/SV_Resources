/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013d200; name: FUN_0013d200
 */


undefined8 * FUN_0013d200(long param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar4 = param_2 - 1;
  if (uVar2 <= uVar4) {
    if ((((uVar2 & uVar2 - 1) == 0) || (-1 < *(char *)(param_1 + 10))) ||
       ((uVar2 + 1 != param_2 &&
        (uVar2 = uVar2 | uVar2 >> 1, uVar2 = uVar2 | uVar2 >> 2, uVar2 = uVar2 | uVar2 >> 4,
        uVar2 = uVar2 | uVar2 >> 8, (uVar2 | uVar2 >> 0x10) + 1 <= uVar4)))) {
      puVar3 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (long)(int)((uint)param_2 &
                          (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
      while ((*(char *)((long)puVar3 + 9) != '\x03' || (puVar3[2] != param_2))) {
        piVar1 = (int *)((long)puVar3 + 0xc);
        puVar3 = puVar3 + (long)*piVar1 * 3;
        if (*piVar1 == 0) {
          return &DAT_03cb6488;
        }
      }
      return puVar3;
    }
    *(uint *)(param_1 + 0xc) = (uint)param_2;
  }
  return (undefined8 *)(*(long *)(param_1 + 0x10) + uVar4 * 0x10);
}


