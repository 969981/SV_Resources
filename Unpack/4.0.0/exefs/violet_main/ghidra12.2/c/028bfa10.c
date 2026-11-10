/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bfa10; name: FUN_028bfa10
 */


void FUN_028bfa10(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_18 [8];
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 8))((undefined8 *)(lVar5 + 8));
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar1 != 0)) {
      uVar4 = FUN_01adab84();
      *(undefined8 *)PTR_DAT_047d3988 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047d3988) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar3 & 1) != 0) {
          return;
        }
        local_18[0] = *param_2;
        *(undefined1 *)(lVar5 + 0xfd) = local_18[0];
        if (*(long *)(lVar5 + 0xa8) == 0) {
          return;
        }
        FUN_00f5544c(*(long *)(lVar5 + 0xa8),local_18);
        return;
      }
    }
  }
  return;
}


