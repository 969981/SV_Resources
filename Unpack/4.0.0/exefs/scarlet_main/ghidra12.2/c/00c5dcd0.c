/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5dcd0; name: FUN_00c5dcd0
 */


void FUN_00c5dcd0(long param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) - 0x10);
  if ((int)param_2 < 1) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
  }
  else {
    puVar3 = (undefined8 *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
  }
  uVar4 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
  puVar5 = (undefined8 *)((long)puVar2 - uVar4);
  if ((int)param_3 < 0) {
    puVar5 = (undefined8 *)((long)puVar3 + (-0x10 - uVar4));
  }
  if (puVar3 < puVar5) {
    puVar6 = puVar3;
    puVar7 = puVar5;
    do {
      uVar8 = *puVar6;
      *puVar6 = *puVar7;
      uVar1 = *(undefined1 *)(puVar6 + 1);
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar7 + 1);
      *puVar7 = uVar8;
      *(undefined1 *)(puVar7 + 1) = uVar1;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + -2;
    } while (puVar6 < puVar7);
  }
  puVar5 = puVar5 + 2;
  if (puVar5 < puVar2) {
    puVar6 = puVar2;
    do {
      uVar8 = *puVar5;
      *puVar5 = *puVar6;
      uVar1 = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar6 + 1);
      *puVar6 = uVar8;
      *(undefined1 *)(puVar6 + 1) = uVar1;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + -2;
    } while (puVar5 < puVar6);
  }
  for (; puVar3 < puVar2; puVar3 = puVar3 + 2) {
    uVar8 = *puVar3;
    *puVar3 = *puVar2;
    uVar1 = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar2 = uVar8;
    *(undefined1 *)(puVar2 + 1) = uVar1;
    puVar2 = puVar2 + -2;
  }
  return;
}


