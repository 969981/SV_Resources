/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02102f84; name: FUN_02102f84
 */


undefined8 FUN_02102f84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  memset((void *)(param_1 + 0x1c0),0,0xa8);
  (**(code **)(**(long **)(param_1 + 0x1b8) + 0x80))();
  puVar4 = PTR_DAT_047dcd58;
  puVar3 = PTR_DAT_047dcd50;
  puVar2 = PTR_DAT_047d3f08;
  puVar1 = PTR_DAT_047d3f00;
  lVar8 = *(long *)(param_1 + 0x1a8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x30);
  if (*(byte *)(lVar8 + 0x30) == 0) {
    return 1;
  }
  uVar11 = 0;
LAB_02102ff4:
  if ((uVar11 < uVar9) && (lVar8 = *(long *)(lVar8 + uVar11 * 8), lVar8 != 0)) {
    puVar6 = (undefined8 *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      uVar7 = FUN_01b07aa4();
      *(undefined8 *)puVar2 = uVar7;
      __cxa_guard_release(puVar1);
    }
    for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
      if (puVar6 == (undefined8 *)puVar2) {
        lVar8 = *(long *)(lVar8 + 0x48);
        plVar10 = *(long **)(param_1 + 0x1b8);
        puVar6 = (undefined8 *)(lVar8 + 0x28);
        puVar6 = (undefined8 *)(**(code **)*puVar6)(puVar6);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar7 = FUN_01af5520();
          *(undefined8 *)puVar4 = uVar7;
          __cxa_guard_release(puVar3);
        }
        goto LAB_0210304c;
      }
    }
  }
  goto LAB_0210306c;
LAB_0210304c:
  if (puVar6 == (undefined8 *)0x0) goto LAB_021030a8;
  if (puVar6 == (undefined8 *)puVar4) {
    uVar7 = *(undefined8 *)(lVar8 + 0x48);
    goto LAB_0210305c;
  }
  puVar6 = (undefined8 *)*puVar6;
  goto LAB_0210304c;
LAB_021030a8:
  uVar7 = 0;
LAB_0210305c:
  (**(code **)(*plVar10 + 0x28))(plVar10,uVar7);
LAB_0210306c:
  lVar8 = *(long *)(param_1 + 0x1a8);
  uVar11 = uVar11 + 1;
  uVar9 = (ulong)*(byte *)(lVar8 + 0x30);
  if (uVar9 <= uVar11) {
    return 1;
  }
  goto LAB_02102ff4;
}


