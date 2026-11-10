/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a4d1c; name: FUN_029a4d1c
 */


void FUN_029a4d1c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  size_t sVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  
  piVar5 = (int *)*param_2;
  puVar3 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (6 - (long)*piVar5)));
  puVar3 = (uint *)((long)puVar3 + (param_3 >> 0x1e & 0x3fffffffc) + (ulong)*puVar3 + 4);
  piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
  piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar3 = (uint *)((long)piVar5 + uVar6);
    lVar8 = (long)puVar3 + (ulong)*puVar3;
  }
  puVar7 = &DAT_cbf29ce484222645;
  sVar2 = strlen((char *)(lVar8 + 4));
  bVar1 = *(byte *)(lVar8 + 4);
  if (bVar1 != 0) {
    pbVar4 = (byte *)(lVar8 + 5);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = puVar7;
  param_1[1] = (char *)(lVar8 + 4);
  param_1[2] = sVar2;
  param_1[3] = 0;
  return;
}


