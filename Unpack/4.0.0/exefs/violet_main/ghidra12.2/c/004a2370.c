/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a2370; name: FUN_004a2370
 */


undefined1  [16] FUN_004a2370(long param_1,long *param_2,byte *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte *local_48;
  
  if (*param_2 == 0) {
LAB_004a23d8:
    bVar1 = true;
    lVar6 = param_2[1];
    puVar3 = PTR_LAB_047cba48;
joined_r0x004a23e0:
    PTR_LAB_047cba48 = puVar3;
    if (lVar6 != 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        plVar4 = (long *)*(long *)(param_1 + 0x50);
        while (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          if ((*(byte *)(plVar4 + 2) & 1) != 0) {
            FUN_0049e790(puVar3,plVar4[4]);
          }
          FUN_0049e790(puVar3,plVar4);
          plVar4 = (long *)lVar6;
        }
        uVar9 = *(ulong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (uVar9 != 0) {
          uVar5 = uVar9 & 3;
          if (uVar9 - 1 < 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar6 = uVar7 * 8;
              uVar7 = uVar7 + 4;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6 + 0x18) = 0;
            } while ((uVar9 & 0xfffffffffffffffc) != uVar7);
          }
          if (uVar5 != 0) {
            lVar6 = uVar7 << 3;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6) = 0;
              uVar5 = uVar5 - 1;
              lVar6 = lVar6 + 8;
            } while (uVar5 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      puVar3 = PTR_LAB_047cba48;
      if (*(long *)(param_1 + 0x30) != 0) {
        plVar4 = (long *)*(long *)(param_1 + 0x28);
        while (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          if ((*(byte *)(plVar4 + 2) & 1) != 0) {
            FUN_0049e790(puVar3,plVar4[4]);
          }
          FUN_0049e790(puVar3,plVar4);
          plVar4 = (long *)lVar6;
        }
        uVar9 = *(ulong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = 0;
        if (uVar9 != 0) {
          uVar5 = uVar9 & 3;
          if (uVar9 - 1 < 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar6 = uVar7 * 8;
              uVar7 = uVar7 + 4;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6 + 0x18) = 0;
            } while ((uVar9 & 0xfffffffffffffffc) != uVar7);
          }
          if (uVar5 != 0) {
            lVar6 = uVar7 << 3;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar6) = 0;
              uVar5 = uVar5 - 1;
              lVar6 = lVar6 + 8;
            } while (uVar5 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    local_48 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      local_48 = param_3 + 1;
    }
                    /* try { // try from 004a25a4 to 004a25af has its CatchHandler @ 004a26ec */
    lVar6 = FUN_004c04c0(param_1 + 0x130,&local_48);
    if (lVar6 == 0) {
      uVar9 = 0;
      uVar7 = 0;
      lVar6 = param_2[3];
joined_r0x004a25d0:
      if (lVar6 != 0) {
                    /* try { // try from 004a25ec to 004a25f3 has its CatchHandler @ 004a26e8 */
        auVar10 = FUN_004a2370(*(undefined8 *)(lVar6 + 0x20),lVar6,param_3);
        uVar7 = auVar10._8_8_;
        uVar9 = auVar10._0_8_ >> 0x20;
        if (auVar10._0_4_ != 0) goto joined_r0x004a2654;
      }
                    /* try { // try from 004a2604 to 004a260f has its CatchHandler @ 004a26ec */
      uVar5 = FUN_004a2704(param_2,param_3);
      if ((uVar5 & 1) == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        auVar10 = auVar2 << 0x40;
      }
      else {
        local_48 = param_3 + 1;
        if ((*param_3 & 1) != 0) {
          local_48 = *(byte **)(param_3 + 0x10);
        }
                    /* try { // try from 004a262c to 004a2637 has its CatchHandler @ 004a26e4 */
        lVar6 = FUN_004c04c0(param_1 + 0x130,&local_48);
        if (lVar6 == 0) {
          uVar9 = 0;
          uVar8 = 0;
        }
        else {
          uVar9 = *(ulong *)(lVar6 + 0x18);
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
        }
        auVar10._8_8_ = uVar8;
        auVar10._0_8_ = uVar9;
        uVar9 = uVar9 >> 0x20;
      }
    }
    else {
      uVar5 = *(ulong *)*(undefined1 (*) [16])(lVar6 + 0x18);
      uVar7 = *(ulong *)(lVar6 + 0x20);
      auVar10 = *(undefined1 (*) [16])(lVar6 + 0x18);
      uVar9 = uVar5 >> 0x20;
      if ((int)uVar5 == 0) {
        lVar6 = param_2[3];
        goto joined_r0x004a25d0;
      }
    }
joined_r0x004a2654:
    if (bVar1) goto LAB_004a26b8;
  }
  else {
    std::mutex::lock();
    if ((*(long *)(param_1 + 0x58) != 0) || (*(long *)(param_1 + 0x30) != 0)) {
LAB_004a23b0:
      std::mutex::unlock();
      if (*param_2 == 0) goto LAB_004a23d8;
      std::mutex::lock();
      bVar1 = false;
      lVar6 = param_2[1];
      puVar3 = PTR_LAB_047cba48;
      goto joined_r0x004a23e0;
    }
    local_48 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      local_48 = param_3 + 1;
    }
                    /* try { // try from 004a2674 to 004a267b has its CatchHandler @ 004a26dc */
    lVar6 = FUN_004c04c0(param_1 + 0x130,&local_48);
    if ((lVar6 == 0) || (uVar9 = *(ulong *)(lVar6 + 0x18), (int)uVar9 == 0)) goto LAB_004a23b0;
    auVar10._8_8_ = *(undefined8 *)(lVar6 + 0x20);
    auVar10._0_8_ = uVar9;
    uVar9 = uVar9 >> 0x20;
  }
  std::mutex::unlock();
LAB_004a26b8:
  auVar11._8_8_ = auVar10._8_8_;
  auVar11._0_8_ = auVar10._0_8_ & 0xffffffff | uVar9 << 0x20;
  return auVar11;
}


