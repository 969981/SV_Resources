/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bca40; name: FUN_019bca40
 */


void FUN_019bca40(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  puVar3 = PTR_DAT_047d3f08;
  puVar2 = PTR_DAT_047d3f00;
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)plVar5[5])(plVar5 + 5);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)puVar3 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
      if (puVar6 == (undefined8 *)puVar3) goto LAB_019bcab0;
    }
    plVar5 = (long *)0x0;
  }
LAB_019bcab0:
  *(undefined1 *)((long)plVar5 + 0x714) = 1;
  (**(code **)(*plVar5 + 0x330))(plVar5,0x12,0);
  puVar7 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50),param_2);
  if (puVar7 == (uint *)0x0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = *puVar7;
    uVar1 = uVar10;
    if (4 < (int)uVar10) {
      uVar1 = 0;
    }
    uVar9 = (ulong)(uVar1 & 0xff);
    if (4 < (uVar1 & 0xff)) goto LAB_019bcb10;
    uVar10 = uVar1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x2d0) + uVar9 * 4 + 8) = 1;
LAB_019bcb10:
  FUN_01780000(param_1,plVar5);
  FUN_0298d4a8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar5);
  if ((uint)*(byte *)(*(long *)(param_1 + 8) + 0x95) == (uVar10 & 0xff)) {
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x40);
    puVar6 = (undefined8 *)(**(code **)plVar5[5])(plVar5 + 5);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)puVar3 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
      if (puVar6 == (undefined8 *)puVar3) {
        *(undefined1 *)(lVar11 + 0x280) = 1;
        *(undefined1 *)(lVar11 + 0x281) = *(undefined1 *)((long)plVar5 + 0x715);
        *(short *)(lVar11 + 0x282) = (short)plVar5[0xe2];
        *(short *)(lVar11 + 0x284) = (short)plVar5[0xe3];
        return;
      }
    }
  }
  return;
}


