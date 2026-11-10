/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e35a50; name: FUN_02e35a50
 */


void FUN_02e35a50(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  if (lVar2 != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar2 + 0x28))((undefined8 *)(lVar2 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar4 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d3f08) {
        if (*(char *)(lVar2 + 0x714) == '\0') {
          return;
        }
        if (*(char *)(lVar2 + 0x715) != 'c') {
          return;
        }
        if (*(short *)(lVar2 + 0x710) == 0x3fd) {
          return;
        }
        *(uint *)(lVar2 + 0x71c) = *(uint *)(lVar2 + 0x71c) | 1 << (ulong)(param_3 & 0x1f);
        return;
      }
    }
  }
  return;
}


