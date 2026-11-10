/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213393c; name: FUN_0213393c
 */


ulong FUN_0213393c(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  puVar6 = &DAT_cbf29ce484222645;
  puVar4 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    do {
      param_1 = param_1 + 1;
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *param_1;
    } while (bVar1 != 0);
  }
  FUN_00d9ec44(auStack_48,0,puVar4);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  FUN_00d9ec44(auStack_60,2,puVar6);
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  lVar5 = *(long *)PTR_DAT_047d8a28;
  *(long *)PTR_DAT_047d8ea8 = lVar5;
  uVar3 = FUN_01990ce8(*(undefined8 *)(lVar5 + 8),auStack_48,auStack_60);
  return uVar3 & 0xff00 | 1;
}


