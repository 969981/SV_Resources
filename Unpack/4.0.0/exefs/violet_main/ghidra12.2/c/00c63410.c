/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c63410; name: FUN_00c63410
 */


bool FUN_00c63410(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  if (DAT_04859d40 == 0) {
    FUN_01671900();
  }
  if ((param_2 < 0xffffffffffffff80) && (uVar4 = *(ulong *)(param_1 + 0x28), uVar4 != 0)) {
    if (param_2 + 0x50 < *(ulong *)(param_1 + 0x10)) {
      uVar8 = 0;
      if (DAT_04859d50 != 0) {
        uVar8 = (((*(ulong *)(param_1 + 0x10) - param_2) + DAT_04859d50) - 0x51) / DAT_04859d50;
      }
      uVar8 = (uVar8 - 1) * DAT_04859d50;
      puVar3 = (ulong *)(param_1 + 0x398);
      puVar9 = puVar3;
      do {
        if ((*puVar9 <= uVar4) && (uVar4 < *puVar9 + puVar9[1])) break;
        puVar9 = (ulong *)puVar9[2];
      } while (puVar9 != (ulong *)0x0);
      if ((puVar9[3] & 9) != 1) goto LAB_00c634ac;
      uVar4 = puVar9[1];
      if (uVar4 < uVar8) goto LAB_00c634ac;
      puVar6 = (ulong *)*puVar9;
      do {
        if ((puVar6 <= puVar3) && (puVar3 < (ulong *)((long)puVar6 + uVar4))) goto LAB_00c634ac;
        puVar3 = (ulong *)puVar3[2];
      } while (puVar3 != (ulong *)0x0);
      iVar1 = munmap((void *)((long)puVar6 + (uVar4 - uVar8)),uVar8);
      uVar4 = 0;
      if ((uVar8 != 0) && (iVar1 == 0)) {
        puVar9[1] = puVar9[1] - uVar8;
        *(ulong *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar8;
        lVar2 = *(long *)(param_1 + 0x28);
        lVar5 = *(long *)(param_1 + 0x10) - uVar8;
        uVar4 = 0;
        if ((lVar2 + 0x10U & 0xf) != 0) {
          uVar4 = (ulong)(uint)-(int)(lVar2 + 0x10U) & 0xf;
        }
        uVar7 = lVar5 - uVar4;
        *(ulong *)(param_1 + 0x10) = uVar7;
        *(ulong *)(param_1 + 0x28) = lVar2 + uVar4;
        *(ulong *)(lVar2 + uVar4 + 8) = uVar7 | 1;
        *(undefined8 *)(lVar2 + lVar5 + 8) = 0x50;
        *(undefined8 *)(param_1 + 0x30) = DAT_04859d60;
        uVar4 = uVar8;
      }
    }
    else {
LAB_00c634ac:
      uVar4 = 0;
    }
    lVar2 = FUN_00c629a0(param_1);
    lVar2 = lVar2 + uVar4;
    if (lVar2 != 0) goto LAB_00c634dc;
    if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x10)) {
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
      goto LAB_00c634dc;
    }
  }
  lVar2 = 0;
LAB_00c634dc:
  return lVar2 != 0;
}


