/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01094cd0; name: FUN_01094cd0
 */


void FUN_01094cd0(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined2 uVar3;
  size_t sVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  FUN_00d1a240(param_1,0x800c8080);
  *param_1 = &PTR_FUN_0457f9b8;
  param_1[4] = &PTR_LAB_0457faf8;
  param_1[5] = &DAT_0457fc20;
  param_1[6] = &PTR_LAB_0457fc78;
  puVar8 = param_1 + 7;
  *puVar8 = &PTR_LAB_0457fca0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar5 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar5);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar9 = &DAT_cbf29ce484222645;
  sVar4 = strlen((char *)(lVar10 + 4));
  bVar2 = *(byte *)(lVar10 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar10 + 5);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x24] = puVar9;
  param_1[0x25] = (char *)(lVar10 + 4);
  param_1[0x26] = sVar4;
  param_1[0x27] = 0;
  if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar3 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8282;
  if (param_1[9] == 0) {
    ppuVar7 = &PTR_LAB_0457fca0;
  }
  else {
    FUN_00c6a584(param_1[9],puVar8);
    ppuVar7 = (undefined **)*puVar8;
  }
  (*(code *)ppuVar7[4])(puVar8,uVar3);
  return;
}


