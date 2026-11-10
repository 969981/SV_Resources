/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051d564; name: FUN_0051d564
 */


/* WARNING: Type propagation algorithm not settling */

ushort * FUN_0051d564(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  uint uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long local_e8;
  long lStack_e0;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  size_t local_70;
  undefined8 *local_68;
  
  puVar8 = (ulong *)FUN_004efc54(param_1[2],*param_1);
  uVar16 = 0;
  local_68 = (undefined8 *)0x0;
  local_78 = 0;
  local_70 = 0;
  do {
    while( true ) {
      if ((ushort *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c))
        goto joined_r0x0051da48;
                    /* try { // try from 0051d930 to 0051d93b has its CatchHandler @ 0051da50 */
        auVar18 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar18._0_8_;
        if ((auVar18._8_8_ & 1) != 0) goto joined_r0x0051da48;
      }
      puVar17 = (ushort *)((long)param_2 + 1);
      bVar4 = (byte)*param_2;
      auVar18[8] = bVar4;
      auVar18._0_8_ = puVar17;
      auVar18._9_7_ = 0;
      uVar13 = (uint)bVar4;
      if (bVar4 == 0x1a) break;
      if (bVar4 != 0x10) {
        if ((char)bVar4 < '\0') {
          iVar6 = (uint)bVar4 + (uint)*(byte *)puVar17 * 0x80 + -0x80;
          if ((char)*(byte *)puVar17 < '\0') {
                    /* try { // try from 0051d820 to 0051d827 has its CatchHandler @ 0051da60 */
            auVar18 = FUN_0052e560(param_2);
            puVar17 = auVar18._0_8_;
            if (auVar18._8_4_ != 0) goto LAB_0051d688;
            uVar13 = 0;
          }
          else {
            puVar17 = param_2 + 1;
            auVar18._8_4_ = iVar6;
            auVar18._0_8_ = puVar17;
            auVar18._12_4_ = 0;
            if (iVar6 == 0) {
              uVar13 = 0;
            }
            else {
LAB_0051d688:
              puVar17 = auVar18._0_8_;
              uVar13 = auVar18._8_4_;
              if ((uVar13 & 7) != 4) {
                    /* try { // try from 0051d694 to 0051d6a7 has its CatchHandler @ 0051da60 */
                param_2 = (ushort *)FUN_0052f000(auVar18._8_8_ & 0xffffffff,0,puVar17,param_3);
                goto joined_r0x0051d7f8;
              }
            }
          }
        }
        else if (bVar4 != 0) goto LAB_0051d688;
        *(uint *)(param_3 + 10) = uVar13 - 1;
        param_2 = puVar17;
        goto joined_r0x0051da48;
      }
      uVar5 = *puVar17;
      uVar15 = (uint)(char)uVar5;
      uVar13 = uVar15 + uVar5;
      uVar1 = uVar13 & (int)((uint)uVar5 << 0x18) >> 0x17;
      uVar16 = uVar1 >> 1;
      if ((uVar1 >> 0xf & 1) != 0) {
        puVar17 = (ushort *)((long)param_2 + 3);
        uVar5 = *puVar17;
        uVar15 = (uint)(char)uVar5;
        uVar13 = uVar15 + uVar5;
        uVar1 = uVar13 & (int)((uint)uVar5 << 0x18) >> 0x17;
        uVar16 = (uVar16 + uVar1 * 0x2000) - 0x4000;
        if ((uVar1 >> 0xf & 1) != 0) {
          puVar17 = (ushort *)((long)param_2 + 5);
          uVar5 = *puVar17;
          uVar15 = (uint)(char)uVar5;
          uVar13 = uVar15 + uVar5;
          uVar1 = uVar13 & (int)((uint)uVar5 << 0x18) >> 0x17;
          iVar6 = uVar16 + uVar1 * 0x8000000;
          uVar16 = iVar6 + 0xf0000000;
          if ((uVar1 >> 0xf & 1) != 0) {
            puVar17 = (ushort *)((long)param_2 + 7);
            uVar5 = *puVar17;
            uVar15 = (uint)(char)uVar5;
            uVar13 = uVar15 + uVar5;
            if (((uVar13 & (uint)uVar5 << 8) >> 0xf & 1) == 0) {
              uVar16 = iVar6 + 0xf0000000;
            }
            else {
              puVar17 = (ushort *)((long)param_2 + 9);
              uVar5 = *puVar17;
              uVar15 = (uint)(char)uVar5;
              uVar13 = uVar15 + uVar5;
              if (((uVar13 & (uint)uVar5 << 8) >> 0xf & 1) != 0) goto LAB_0051d9ec;
              uVar16 = iVar6 + 0xf0000000;
            }
          }
        }
      }
      lVar9 = 1;
      if (uVar13 < uVar15) {
        lVar9 = 2;
      }
      param_2 = (ushort *)((long)puVar17 + lVar9);
      sVar2 = local_78 >> 1 & 0x7f;
      if ((local_78 & 1) != 0) {
        sVar2 = local_70;
      }
      if (sVar2 != 0) {
        if (param_3[0xc] == 0) {
                    /* try { // try from 0051d6f0 to 0051d707 has its CatchHandler @ 0051da64 */
          lVar9 = FUN_004f8e64(param_1[2],uVar16);
        }
        else {
                    /* try { // try from 0051d644 to 0051d64b has its CatchHandler @ 0051da64 */
          lVar9 = FUN_004a49dc(param_3[0xc],param_1[1],uVar16);
        }
        if ((lVar9 == 0) || (lVar10 = FUN_004a5124(lVar9), lVar10 == 0)) {
          bVar7 = (local_78 & 1) != 0;
          sVar2 = local_78 >> 1 & 0x7f;
          if (bVar7) {
            sVar2 = local_70;
          }
          puVar3 = (undefined8 *)((ulong)&local_78 | 1);
          if (bVar7) {
            puVar3 = local_68;
          }
          if ((*puVar8 & 1) == 0) {
                    /* try { // try from 0051d9b8 to 0051d9bf has its CatchHandler @ 0051da64 */
            lVar9 = FUN_00264e54(puVar8);
          }
          else {
            lVar9 = (*puVar8 & 0xfffffffffffffffe) + 8;
          }
                    /* try { // try from 0051d75c to 0051d76f has its CatchHandler @ 0051da64 */
          uVar12 = FUN_005150f8(lVar9,uVar16);
          FUN_0026c6b8(uVar12,puVar3,sVar2);
          uVar16 = 0;
        }
        else {
          if (*(int *)(lVar9 + 0x3c) == 3) {
                    /* try { // try from 0051d724 to 0051d72b has its CatchHandler @ 0051da58 */
            plVar11 = (long *)FUN_004f7ed4(param_1[2],*param_1,lVar9);
          }
          else {
                    /* try { // try from 0051d834 to 0051d83b has its CatchHandler @ 0051da58 */
            plVar11 = (long *)FUN_004f7424(param_1[2],*param_1,lVar9,param_3[0xd]);
          }
          local_90 = *(undefined4 *)(param_3 + 0xb);
          local_98 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          local_a0 = 0;
          uStack_a8 = 0;
          uStack_c0 = 0;
          local_c8 = 0;
          uStack_8c = 0x80000000;
          local_88 = 0;
          uStack_80 = 0;
          puVar3 = (undefined8 *)((ulong)&local_78 | 1);
          sVar2 = local_78 >> 1 & 0x7f;
          if ((local_78 & 1) != 0) {
            puVar3 = local_68;
            sVar2 = local_70;
          }
          local_94 = 0;
          if ((long)sVar2 < 0x11) {
            memcpy(&uStack_c0,puVar3,sVar2);
            lStack_e0 = (long)&uStack_c0 + sVar2;
            local_cc = 0;
            local_d8 = (undefined8 *)0x0;
            puVar14 = &uStack_c0;
            if (local_a0 == 1) {
              local_a0 = (long)puVar3 - (long)&uStack_c0;
            }
          }
          else {
            local_cc = 0x10;
            lStack_e0 = (long)puVar3 + (sVar2 - 0x10);
            puVar14 = puVar3;
            local_d8 = &uStack_c0;
          }
          uStack_80 = param_3[0xd];
          local_88 = param_3[0xc];
                    /* try { // try from 0051d8f8 to 0051d903 has its CatchHandler @ 0051da54 */
          local_e8 = lStack_e0;
          lVar9 = (**(code **)(*plVar11 + 0x58))(plVar11,puVar14,&local_e8);
          if ((lVar9 == 0) || (uVar16 = 0, local_98 != 0)) goto LAB_0051d9ec;
        }
      }
    }
    if (uVar16 == 0) {
      if ((char)*(byte *)puVar17 < '\0') {
                    /* try { // try from 0051d7b4 to 0051d80f has its CatchHandler @ 0051da5c */
        auVar19 = FUN_0052e5f0(puVar17);
        if (auVar19._0_8_ == 0) break;
      }
      else {
        auVar19[8] = *(byte *)puVar17;
        auVar19._0_8_ = param_2 + 1;
        auVar19._9_3_ = 0;
      }
      lVar9 = auVar19._0_8_;
      lVar10 = (long)auVar19._8_4_;
      if ((param_3[1] - lVar9) + 0x10 < lVar10) {
        param_2 = (ushort *)FUN_0052ddec(param_3,lVar9,auVar19._8_4_,&local_78);
        uVar16 = 0;
      }
      else {
        FUN_0026c6b8(&local_78,lVar9,lVar10);
        param_2 = (ushort *)(lVar9 + lVar10);
        uVar16 = 0;
      }
    }
    else {
                    /* try { // try from 0051d658 to 0051d677 has its CatchHandler @ 0051da68 */
      lVar9 = FUN_004a5c48(param_1[1],uVar16);
      if (lVar9 == 0) {
        uVar12 = 0;
      }
      else if (param_3[0xc] == 0) {
                    /* try { // try from 0051d77c to 0051d7a7 has its CatchHandler @ 0051da68 */
        uVar12 = FUN_004f8e64(param_1[2],uVar16);
      }
      else {
        uVar12 = FUN_004a49dc(param_3[0xc],param_1[1],uVar16);
      }
      param_2 = (ushort *)
                FUN_00516cf8(*param_1,puVar17,param_3,(ulong)uVar16 << 3 | 2,param_1[2],uVar12);
      uVar16 = 0;
    }
joined_r0x0051d7f8:
  } while (param_2 != (ushort *)0x0);
LAB_0051d9ec:
  param_2 = (ushort *)0x0;
joined_r0x0051da48:
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return param_2;
}


