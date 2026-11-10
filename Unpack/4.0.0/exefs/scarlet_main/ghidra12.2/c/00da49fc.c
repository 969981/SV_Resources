/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da49fc; name: FUN_00da49fc
 */


undefined8 FUN_00da49fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int *piVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_50 = 0;
  local_48 = (long *)0x0;
  puVar9 = &DAT_cbf29ce484222645;
  local_60 = &DAT_cbf29ce484222645;
  puStack_58 = &DAT_03c886bc;
  lVar2 = FUN_00da4b88(**(undefined8 **)(param_1 + 0x70),&local_60,param_2);
  puVar3 = (uint *)(**(code **)(**(long **)(lVar2 + 8) + 0x70))();
  piVar6 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3 + 4);
  piVar6 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  if ((((*puVar7 < 5) || ((ulong)puVar7[2] == 0)) ||
      (*puVar7 < 7 || *(char *)((long)piVar6 + (ulong)puVar7[2]) != '\x01')) ||
     ((ulong)puVar7[3] == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar3 = (uint *)((long)piVar6 + (ulong)puVar7[3]);
    piVar6 = (int *)((long)puVar3 + (ulong)*puVar3);
  }
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar3 = (uint *)((long)piVar6 + uVar8);
    lVar2 = (long)puVar3 + (ulong)*puVar3;
  }
  local_70 = strlen((char *)(lVar2 + 4));
  bVar1 = *(byte *)(lVar2 + 4);
  if (bVar1 != 0) {
    pbVar5 = (byte *)(lVar2 + 5);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  uStack_68 = 0;
  local_80 = puVar9;
  pcStack_78 = (char *)(lVar2 + 4);
  uVar4 = FUN_00da473c(param_1,&local_60,&local_80,param_3);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4;
}


