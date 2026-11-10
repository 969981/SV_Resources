/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e3f2c; name: FUN_019e3f2c
 */


void FUN_019e3f2c(byte *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  puVar5 = &DAT_cbf29ce484222645;
  puVar3 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    puVar3 = &DAT_cbf29ce484222645;
    do {
      param_1 = param_1 + 1;
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *param_1;
    } while (bVar1 != 0);
  }
  FUN_00d9ec44(auStack_48,0,puVar3);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  FUN_00d9ec44(auStack_60,2,puVar5);
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  lVar4 = *(long *)PTR_DAT_047d8a28;
  *(long *)PTR_DAT_047d8ea8 = lVar4;
  FUN_019e4050(*(undefined8 *)(lVar4 + 8),auStack_48,auStack_60,param_3);
  return;
}


