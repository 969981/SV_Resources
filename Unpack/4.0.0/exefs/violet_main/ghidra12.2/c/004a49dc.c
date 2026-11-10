/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a49dc; name: FUN_004a49dc
 */


long FUN_004a49dc(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  if (*(int *)(param_2 + 0x7c) == 0) {
    return 0;
  }
  if (*param_1 == 0) {
LAB_004a4ab4:
    bVar2 = true;
    lVar5 = param_1[1];
    puVar3 = PTR_LAB_047cba48;
  }
  else {
    std::mutex::lock();
    plVar8 = *(long **)(param_1[4] + 0x188);
    if (plVar8 == (long *)0x0) {
LAB_004a4a84:
      std::mutex::unlock();
    }
    else {
      plVar1 = (long *)(param_1[4] + 0x188);
      plVar7 = plVar1;
      do {
        while ((param_2 <= (ulong)plVar8[4] &&
               ((param_2 < (ulong)plVar8[4] || (param_3 <= (int)plVar8[5]))))) {
          plVar9 = (long *)*plVar8;
          plVar7 = plVar8;
          plVar8 = plVar9;
          if (plVar9 == (long *)0x0) goto LAB_004a4a60;
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
LAB_004a4a60:
      if (((plVar7 == plVar1) || (param_2 < (ulong)plVar7[4])) ||
         ((param_2 <= (ulong)plVar7[4] && (param_3 < (int)plVar7[5])))) goto LAB_004a4a84;
      lVar5 = plVar7[6];
      std::mutex::unlock();
      if (lVar5 != 0) {
        return lVar5;
      }
    }
    if (*param_1 == 0) goto LAB_004a4ab4;
    std::mutex::lock();
    bVar2 = false;
    lVar5 = param_1[1];
    puVar3 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar3;
  if (lVar5 != 0) {
    lVar5 = param_1[4];
    if (*(long *)(lVar5 + 0x58) != 0) {
      plVar8 = (long *)*(long *)(lVar5 + 0x50);
      while (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        if ((*(byte *)(plVar8 + 2) & 1) != 0) {
          FUN_0049e790(puVar3,plVar8[4]);
        }
        FUN_0049e790(puVar3,plVar8);
        plVar8 = (long *)lVar11;
      }
      uVar4 = *(ulong *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0x50) = 0;
      if (uVar4 != 0) {
        uVar6 = uVar4 & 3;
        if (uVar4 - 1 < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            lVar11 = uVar10 * 8;
            uVar10 = uVar10 + 4;
            *(undefined8 *)(*(long *)(lVar5 + 0x40) + lVar11) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x40) + lVar11 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x40) + lVar11 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x40) + lVar11 + 0x18) = 0;
          } while ((uVar4 & 0xfffffffffffffffc) != uVar10);
        }
        if (uVar6 != 0) {
          lVar11 = uVar10 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar5 + 0x40) + lVar11) = 0;
            uVar6 = uVar6 - 1;
            lVar11 = lVar11 + 8;
          } while (uVar6 != 0);
        }
      }
      *(undefined8 *)(lVar5 + 0x58) = 0;
      lVar5 = param_1[4];
    }
    puVar3 = PTR_LAB_047cba48;
    if (*(long *)(lVar5 + 0x30) != 0) {
      plVar8 = (long *)*(long *)(lVar5 + 0x28);
      while (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        if ((*(byte *)(plVar8 + 2) & 1) != 0) {
          FUN_0049e790(puVar3,plVar8[4]);
        }
        FUN_0049e790(puVar3,plVar8);
        plVar8 = (long *)lVar11;
      }
      uVar4 = *(ulong *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      if (uVar4 != 0) {
        uVar6 = uVar4 & 3;
        if (uVar4 - 1 < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            lVar11 = uVar10 * 8;
            uVar10 = uVar10 + 4;
            *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar11) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar11 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar11 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar11 + 0x18) = 0;
          } while ((uVar4 & 0xfffffffffffffffc) != uVar10);
        }
        if (uVar6 != 0) {
          lVar11 = uVar10 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar11) = 0;
            uVar6 = uVar6 - 1;
            lVar11 = lVar11 + 8;
          } while (uVar6 != 0);
        }
      }
      *(undefined8 *)(lVar5 + 0x30) = 0;
    }
  }
  plVar8 = *(long **)(param_1[4] + 0x188);
  if (plVar8 != (long *)0x0) {
    plVar1 = (long *)(param_1[4] + 0x188);
    plVar7 = plVar1;
    do {
      while ((param_2 <= (ulong)plVar8[4] &&
             ((param_2 < (ulong)plVar8[4] || (param_3 <= (int)plVar8[5]))))) {
        plVar9 = (long *)*plVar8;
        plVar7 = plVar8;
        plVar8 = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004a4cbc;
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar8 != (long *)0x0);
LAB_004a4cbc:
    if (((plVar7 != plVar1) && ((ulong)plVar7[4] <= param_2)) &&
       ((((ulong)plVar7[4] < param_2 || ((int)plVar7[5] <= param_3)) &&
        (lVar5 = plVar7[6], lVar5 != 0)))) goto joined_r0x004a4da4;
  }
                    /* try { // try from 004a4cf0 to 004a4d1f has its CatchHandler @ 004a4de4 */
  if ((param_1[3] == 0) || (lVar5 = FUN_004a49dc(param_1[3],param_2,param_3), lVar5 == 0)) {
    uVar4 = FUN_004a4dfc(param_1,param_2,param_3);
    if ((uVar4 & 1) != 0) {
      plVar8 = *(long **)(param_1[4] + 0x188);
      if (plVar8 != (long *)0x0) {
        plVar1 = (long *)(param_1[4] + 0x188);
        plVar7 = plVar1;
        do {
          while ((param_2 <= (ulong)plVar8[4] &&
                 ((param_2 < (ulong)plVar8[4] || (param_3 <= (int)plVar8[5]))))) {
            plVar9 = (long *)*plVar8;
            plVar7 = plVar8;
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_004a4d70;
          }
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != (long *)0x0);
LAB_004a4d70:
        if ((((plVar7 != plVar1) && ((ulong)plVar7[4] <= param_2)) &&
            (((ulong)plVar7[4] < param_2 || ((int)plVar7[5] <= param_3)))) &&
           (lVar5 = plVar7[6], lVar5 != 0)) goto joined_r0x004a4da4;
      }
    }
    lVar5 = 0;
  }
joined_r0x004a4da4:
  if (!bVar2) {
    std::mutex::unlock();
  }
  return lVar5;
}


