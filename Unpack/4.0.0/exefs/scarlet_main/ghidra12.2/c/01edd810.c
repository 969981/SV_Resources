/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edd810; name: FUN_01edd810
 */


void FUN_01edd810(undefined2 *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar5 = PTR_DAT_047d4ce8;
  puVar4 = PTR_DAT_047d4ce0;
  plVar2 = *(long **)(lVar12 + 0x1c0);
  plVar3 = *(long **)(lVar12 + 0x1c8);
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar12 = *plVar2;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      uVar11 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar11;
      __cxa_guard_release(puVar4);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar5) goto LAB_01edd8bc;
    }
  }
  lVar12 = 0;
LAB_01edd8bc:
  *param_1 = *(undefined2 *)(param_2 + 0x220);
  param_1[1] = (ushort)*(byte *)(param_2 + 0x222);
  param_1[2] = *(undefined2 *)(param_2 + 0x210);
  param_1[3] = *(undefined2 *)(param_2 + 0x212);
  param_1[4] = *(undefined2 *)(param_2 + 0x214);
  param_1[5] = *(undefined2 *)(param_2 + 0x216);
  param_1[6] = *(undefined2 *)(param_2 + 0x20e);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x225);
  *(undefined1 *)((long)param_1 + 0xf) = *(undefined1 *)(param_2 + 0x223);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x22a);
  bVar6 = *(byte *)(param_2 + 0x256);
  if (1 < bVar6) {
    bVar6 = FUN_00e677a0(lVar12);
  }
  *(byte *)(param_1 + 8) = bVar6;
  uVar10 = FUN_01c87540();
  param_2 = param_2 + (uVar10 & 0xff) * 0x1c;
  cVar7 = *(char *)(param_2 + 0x126);
  psVar1 = (short *)(param_2 + 0x10c);
  if (cVar7 == '\0') {
    cVar7 = FUN_01e9e4c0(lVar12);
  }
  *(char *)((long)param_1 + 0x11) = cVar7;
  if (*psVar1 == 0) {
    FUN_01e9e398(lVar12);
    return;
  }
  FUN_011b8d00(param_1 + 10,psVar1,0xd);
  return;
}


