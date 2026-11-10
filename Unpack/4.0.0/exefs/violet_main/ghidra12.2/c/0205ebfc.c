/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0205ebfc; name: FUN_0205ebfc
 */


long FUN_0205ebfc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = *(long *)((ulong)*(uint *)(param_1 + 0x5c) + param_2);
  if (lVar2 == 0) {
    lVar5 = *(long *)((ulong)*(uint *)(param_1 + 0x4c) + param_2);
    if (lVar5 == 0) {
      lVar2 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (*(code *)**(undefined8 **)(lVar5 + 0x28))((undefined8 *)(lVar5 + 0x28));
      if (((*PTR_DAT_047db160 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047db160), iVar1 != 0)) {
        uVar4 = FUN_01fb90e4();
        *(undefined8 *)PTR_DAT_047db168 = uVar4;
        __cxa_guard_release(PTR_DAT_047db160);
      }
      lVar2 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (puVar3 == (undefined8 *)PTR_DAT_047db168) {
            lVar2 = lVar5;
            goto LAB_0205ec74;
          }
          puVar3 = (undefined8 *)*puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        lVar2 = 0;
      }
LAB_0205ec74:
      *(long *)((ulong)*(uint *)(param_1 + 0x5c) + param_2) = lVar2;
    }
  }
  return lVar2;
}


