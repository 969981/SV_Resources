/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035320d4; name: FUN_035320d4
 */


void FUN_035320d4(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  
  if (*(undefined8 **)(param_2 + 0x108) == (undefined8 *)0x0) {
    plVar9 = (long *)param_1[0x10];
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar8 = param_1;
    if (*(char *)(param_2 + 299) != '\0') goto LAB_0353211c;
    lVar4 = param_1[0xd];
    lVar7 = param_1[2];
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar6 = lVar6 + lVar4;
        lVar4 = *(long *)(lVar7 + 0x68);
        lVar7 = *(long *)(lVar7 + 0x10);
      } while (lVar7 != 0);
    }
    plVar10 = (long *)*plVar9;
    if (plVar10 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (*(long *)(param_1[0xc] + 8) - lVar6) - lVar4;
      if (lVar4 <= (long)(plVar10[1] - (ulong)*(uint *)(param_1 + 0x11))) goto LAB_0353211c;
      plVar1 = (long *)*plVar10;
      plVar9 = plVar10;
      if ((long *)*plVar10 != (long *)0x0) {
        do {
          plVar10 = plVar1;
          if (lVar4 <= (long)(plVar10[1] - (ulong)*(uint *)(param_1 + 0x11))) goto LAB_03532120;
          plVar1 = (long *)*plVar10;
          plVar9 = plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      lVar4 = 0;
      plVar9 = plVar10;
    }
  }
  else {
    plVar9 = (long *)**(undefined8 **)(param_2 + 0x108);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_2 + 0x108) = 0;
      return;
    }
    plVar8 = *(long **)(param_2 + 0x110);
LAB_0353211c:
LAB_03532120:
    lVar4 = *plVar9;
  }
  if ((lVar4 == 0) && ((param_3 & 1) == 0)) {
    uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((uVar3 & 1) == 0) goto LAB_03532174;
    lVar4 = *plVar9;
  }
  else if (lVar4 == 0) {
LAB_03532174:
    lVar4 = 0;
    uVar11 = 1;
    goto LAB_0353217c;
  }
  uVar11 = 0;
  uVar5 = plVar9[1] - (ulong)*(uint *)(param_1 + 0x11);
  uVar3 = *(long *)(lVar4 + 8) - (ulong)*(uint *)(param_1 + 0x11);
  lVar4 = (uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)) -
          (uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU));
LAB_0353217c:
  bVar2 = (**(code **)(*plVar8 + 0x108))(plVar8);
  *(undefined1 *)(param_2 + 0x12a) = 0;
  *(long **)(param_2 + 0x108) = plVar9;
  *(long **)(param_2 + 0x110) = plVar8;
  *(long *)(param_2 + 0x120) = lVar4;
  *(byte *)(param_2 + 0x129) = ~bVar2 & 1;
  *(undefined1 *)(param_2 + 0x128) = uVar11;
  return;
}


