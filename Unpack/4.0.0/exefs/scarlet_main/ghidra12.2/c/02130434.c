/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02130434; name: FUN_02130434
 */


void FUN_02130434(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar3 = &DAT_cbf29ce484222645;
  FUN_00d9ec44(auStack_48,0,0xa71f0cdf966f3175);
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_1;
  }
  FUN_00d9ec44(auStack_60,2,puVar3);
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  *(undefined8 *)PTR_DAT_047d8ea8 = *(undefined8 *)PTR_DAT_047d8a28;
  FUN_0213053c(auStack_48,auStack_60,param_2);
  return;
}


