/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a464c; name: FUN_004a464c
 */


long FUN_004a464c(long *param_1,byte *param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *local_48;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    std::mutex::lock();
  }
  puVar2 = PTR_LAB_047cba48;
  if (param_1[1] != 0) {
    lVar7 = param_1[4];
    if (*(long *)(lVar7 + 0x58) != 0) {
      plVar1 = (long *)*(long *)(lVar7 + 0x50);
      while (plVar1 != (long *)0x0) {
        lVar8 = *plVar1;
        if ((*(byte *)(plVar1 + 2) & 1) != 0) {
          FUN_0049e790(puVar2,plVar1[4]);
        }
        FUN_0049e790(puVar2,plVar1);
        plVar1 = (long *)lVar8;
      }
      uVar5 = *(ulong *)(lVar7 + 0x48);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (uVar5 != 0) {
        uVar3 = uVar5 & 3;
        if (uVar5 - 1 < 3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            lVar8 = uVar4 * 8;
            uVar4 = uVar4 + 4;
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8 + 0x18) = 0;
          } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
        }
        if (uVar3 != 0) {
          lVar8 = uVar4 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8) = 0;
            uVar3 = uVar3 - 1;
            lVar8 = lVar8 + 8;
          } while (uVar3 != 0);
        }
      }
      *(undefined8 *)(lVar7 + 0x58) = 0;
      lVar7 = param_1[4];
    }
    puVar2 = PTR_LAB_047cba48;
    if (*(long *)(lVar7 + 0x30) != 0) {
      plVar1 = (long *)*(long *)(lVar7 + 0x28);
      while (plVar1 != (long *)0x0) {
        lVar8 = *plVar1;
        if ((*(byte *)(plVar1 + 2) & 1) != 0) {
          FUN_0049e790(puVar2,plVar1[4]);
        }
        FUN_0049e790(puVar2,plVar1);
        plVar1 = (long *)lVar8;
      }
      uVar5 = *(ulong *)(lVar7 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (uVar5 != 0) {
        uVar3 = uVar5 & 3;
        if (uVar5 - 1 < 3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            lVar8 = uVar4 * 8;
            uVar4 = uVar4 + 4;
            *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8 + 0x18) = 0;
          } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
        }
        if (uVar3 != 0) {
          lVar8 = uVar4 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8) = 0;
            uVar3 = uVar3 - 1;
            lVar8 = lVar8 + 8;
          } while (uVar3 != 0);
        }
      }
      *(undefined8 *)(lVar7 + 0x30) = 0;
    }
  }
  local_48 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
  }
                    /* try { // try from 004a484c to 004a48af has its CatchHandler @ 004a48e8 */
  lVar7 = FUN_004c05ec(param_1[4] + 0x158,&local_48);
  if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) &&
     ((param_1[3] == 0 || (lVar7 = FUN_004a464c(param_1[3],param_2), lVar7 == 0)))) {
    uVar5 = FUN_004a4900(param_1,param_2);
    if ((uVar5 & 1) != 0) {
      local_48 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        local_48 = *(byte **)(param_2 + 0x10);
      }
      lVar7 = FUN_004c05ec(param_1[4] + 0x158,&local_48);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) goto LAB_004a48c0;
    }
    lVar7 = 0;
  }
LAB_004a48c0:
  if (lVar6 != 0) {
    std::mutex::unlock();
  }
  return lVar7;
}


