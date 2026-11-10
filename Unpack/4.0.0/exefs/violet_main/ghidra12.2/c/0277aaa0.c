/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277aaa0; name: FUN_0277aaa0
 */


bool FUN_0277aaa0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 8))((undefined8 *)(lVar5 + 8));
    if (((*PTR_DAT_047d8d40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8d40), iVar1 != 0)) {
      uVar4 = FUN_0168ea04();
      *(undefined8 *)PTR_DAT_047d8d48 = uVar4;
      __cxa_guard_release(PTR_DAT_047d8d40);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047d8d48) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar3 & 1) == 0) {
          return *param_2 == lVar5 + -0x20;
        }
        return false;
      }
    }
  }
  return false;
}


