/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259734; name: FUN_01259734
 */


ulong FUN_01259734(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  if ((char)param_2 != '\0') {
    piVar2 = (int *)*param_1;
    if ((0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb], uVar5 != 0)) {
      puVar3 = (uint *)((long)piVar2 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      if (uVar1 < *puVar3) {
        puVar3 = puVar3 + (ulong)uVar1 + 1;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(uint *)((long)piVar2 + uVar5) << 0x20;
        }
        uVar4 = 1;
        goto LAB_012597c0;
      }
    }
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_012597c0:
  return uVar5 | uVar4;
}


