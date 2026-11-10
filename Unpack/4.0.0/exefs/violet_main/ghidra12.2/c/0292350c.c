/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292350c; name: FUN_0292350c
 */


ulong FUN_0292350c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,0x19), (uVar3 & 1) != 0)) {
    puVar4 = (undefined4 *)(**(code **)(*plVar2 + 0x4f0))(plVar2,0x19);
    lVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),*puVar4);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)
               (*(code *)**(undefined8 **)(lVar5 + 0x28))((undefined8 *)(lVar5 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
        uVar7 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar7;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar6 != (undefined8 *)0x0) {
        do {
          if (puVar6 == (undefined8 *)PTR_DAT_047d3f08) {
            return (ulong)*(ushort *)(lVar5 + 0x718);
          }
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != (undefined8 *)0x0);
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}


