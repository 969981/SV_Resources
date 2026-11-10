/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a0028; name: FUN_010a0028
 */


long FUN_010a0028(long param_1,byte param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_2 < 5) && (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x38 + 0x58))) &&
     (lVar4 = *(long *)(param_1 + (ulong)param_2 * 0x38 + (ulong)param_3 * 8 + 0x28), lVar4 != 0)) {
    puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar3 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar3;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_047d3f08) {
          return lVar4;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


