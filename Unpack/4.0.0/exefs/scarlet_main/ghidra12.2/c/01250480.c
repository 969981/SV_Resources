/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250480; name: FUN_01250480
 */


void FUN_01250480(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)(**(code **)plVar2[5])(plVar2 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar5 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d3f08) goto LAB_012504f4;
    }
    plVar2 = (long *)0x0;
  }
LAB_012504f4:
  *(undefined1 *)((long)plVar2 + 0x714) = 0;
  (**(code **)(*plVar2 + 0x4d8))(plVar2,0x1c);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50),param_2);
    if (puVar4 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar4;
      if (4 < (int)uVar6) {
        uVar6 = 0;
      }
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)uVar6 * 8 + 0x80) = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x2d0) + (long)(int)uVar6 * 4 + 8) = 0;
  }
  FUN_01780000(param_1,plVar2);
  return;
}


