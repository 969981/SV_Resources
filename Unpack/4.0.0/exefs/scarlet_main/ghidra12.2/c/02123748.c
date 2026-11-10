/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02123748; name: FUN_02123748
 */


void FUN_02123748(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = (uint)((ulong)param_3 >> 0x20);
  if ((char)param_3 != '\0') {
    piVar3 = (int *)*param_2;
    if ((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar5 != 0)) {
      puVar4 = (uint *)((long)piVar3 + uVar5);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      if (uVar6 < *puVar4) {
        puVar4 = puVar4 + (ulong)uVar6 + 1;
        piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar1 = (undefined8 *)
                 ((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
        uVar2 = *puVar1;
        uVar6 = *(uint *)(puVar1 + 1);
        *param_1 = 1;
        *(ulong *)(param_1 + 0x18) = (ulong)uVar6;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}


