/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012468f0; name: FUN_012468f0
 */


void FUN_012468f0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  undefined1 local_18 [8];
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49b) >> 3 & 1) != 0) {
    plVar2 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1,0);
    plVar3 = (long *)(**(code **)plVar2[5])(plVar2 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar4 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d3f08) {
        if ((short)plVar2[0xe2] != 0x3f3) {
          return;
        }
        if (*(char *)((long)plVar2 + 0x714) == '\0') {
          local_18[0] = (**(code **)(*plVar2 + 0x98))(plVar2);
          FUN_012505c0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d60),auStack_38,local_18);
          return;
        }
        return;
      }
    }
  }
  return;
}


