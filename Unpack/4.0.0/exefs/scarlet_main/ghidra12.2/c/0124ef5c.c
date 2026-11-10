/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ef5c; name: FUN_0124ef5c
 */


void FUN_0124ef5c(long param_1,long param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  char cVar12;
  byte bVar13;
  long *plVar14;
  
  cVar12 = *(char *)(param_2 + 0x30);
  if (cVar12 == '\0') {
LAB_0124efbc:
    bVar13 = 0;
  }
  else {
    do {
      bVar13 = cVar12 - 1;
      if (bVar13 == 0) goto LAB_0124efbc;
      uVar7 = (**(code **)(**(long **)(param_2 + (ulong)bVar13 * 8) + 0x208))();
      cVar12 = cVar12 + -1;
    } while ((uVar7 & 1) == 0);
  }
  uVar4 = FUN_010f9128(*(undefined4 *)(*(long *)(param_1 + 8) + 0x36c),
                       *(undefined1 *)(*(long *)(param_1 + 8) + 0x370),param_3);
  puVar2 = PTR_DAT_047d3f08;
  puVar1 = PTR_DAT_047d3f00;
  uVar11 = (uint)*(byte *)(param_2 + 0x30);
  if ((int)(uint)*(byte *)(param_2 + 0x30) <= (int)uVar4) {
    return;
  }
LAB_0124effc:
  if (((uVar4 & 0xff) < uVar11) &&
     (plVar14 = *(long **)(param_2 + (ulong)(uVar4 & 0xff) * 8), plVar14 != (long *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)plVar14[5])(plVar14 + 5);
    if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
      uVar10 = FUN_01b07aa4();
      *(undefined8 *)puVar2 = uVar10;
      __cxa_guard_release(puVar1);
    }
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if (puVar8 == (undefined8 *)puVar2) {
        sVar3 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (sVar3 == 0x95) {
          if ((int)(uint)bVar13 <= (int)uVar4) goto LAB_0124f140;
          uVar5 = (**(code **)(**(long **)(param_2 + (ulong)(uint)bVar13 * 8) + 0x98))();
          plVar9 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar5);
          if (plVar9 == (long *)0x0) goto LAB_0124f164;
          puVar8 = (undefined8 *)(**(code **)plVar9[5])(plVar9 + 5);
          if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
            uVar10 = FUN_01b07aa4();
            *(undefined8 *)puVar2 = uVar10;
            __cxa_guard_release(puVar1);
          }
          goto LAB_0124f0ac;
        }
        break;
      }
    }
  }
  goto LAB_0124f150;
LAB_0124f0ac:
  if (puVar8 == (undefined8 *)0x0) goto LAB_0124f164;
  if (puVar8 == (undefined8 *)puVar2) {
    uVar7 = (**(code **)(*plVar9 + 0x88))(plVar9,0x3f3);
    if ((((((uVar7 & 1) != 0) && (*(char *)((long)plVar9 + 0x714) != '\0')) ||
         ((uVar7 = (**(code **)(*plVar9 + 0x88))(plVar9,0x3f3), (uVar7 & 1) != 0 &&
          (*(char *)((long)plVar14 + 0x714) != '\0')))) ||
        ((uVar7 = (**(code **)(*plVar9 + 0x88))(plVar9,0x3fd), (uVar7 & 1) != 0 &&
         (*(char *)((long)plVar9 + 0x714) != '\0')))) ||
       ((uVar7 = (**(code **)(*plVar9 + 0x88))(plVar9,0x3fd), (uVar7 & 1) != 0 &&
        (*(char *)((long)plVar14 + 0x714) != '\0')))) goto LAB_0124f140;
    goto LAB_0124f164;
  }
  puVar8 = (undefined8 *)*puVar8;
  goto LAB_0124f0ac;
LAB_0124f140:
  (**(code **)(*plVar14 + 0x2d0))(plVar14);
  goto LAB_0124f150;
LAB_0124f164:
  (**(code **)(*plVar14 + 0x1e8))(plVar14,uVar5);
LAB_0124f150:
  uVar11 = (uint)*(byte *)(param_2 + 0x30);
  uVar4 = uVar4 + 1;
  if ((int)uVar11 <= (int)uVar4) {
    return;
  }
  goto LAB_0124effc;
}


