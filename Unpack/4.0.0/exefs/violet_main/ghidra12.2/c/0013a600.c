/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013a600; name: FUN_0013a600
 */


ulong FUN_0013a600(uint *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong unaff_x23;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined1 auVar18 [16];
  undefined8 local_c0;
  char local_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  ulong uStack_88;
  ulong local_80;
  long lStack_78;
  long *local_70;
  undefined8 uStack_68;
  
  plVar17 = *(long **)(param_1 + 0x12);
  uVar5 = *param_1;
  plVar16 = (long *)(ulong)uVar5;
  uVar1 = (ulong)param_1[1];
  lVar11 = plVar17[1];
  uVar2 = plVar17[2];
  uVar7 = lVar11 + 1;
  if (uVar2 < uVar7) {
    if (uVar2 < 0x3fffffffffffffff) {
      unaff_x23 = uVar2 << 1;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar2,unaff_x23);
      lVar11 = plVar17[1];
      uVar7 = lVar11 + 1;
      *plVar17 = lVar6;
      plVar17[2] = unaff_x23;
      goto LAB_0013a678;
    }
  }
  else {
    lVar6 = *plVar17;
LAB_0013a678:
    plVar17[1] = uVar7;
    *(char *)(lVar6 + lVar11) = (char)uVar5;
    lVar11 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar11 + -1;
    if (lVar11 == 0) {
      uVar5 = FUN_00145730();
      *param_1 = uVar5;
      if (uVar5 == 0xd || uVar5 == 10) goto LAB_0013a6b8;
    }
    else {
      pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
      bVar3 = *pbVar12;
      *param_1 = (uint)bVar3;
      if (bVar3 == 0xd || bVar3 == 10) {
LAB_0013a6b8:
        FUN_0013a380(param_1);
      }
    }
    if (param_2 == (long *)0x0) {
      plVar16 = (long *)0x3ffffffffffffffe;
      plVar17 = (long *)&DAT_0000000a;
LAB_0013a834:
      do {
        uVar5 = *param_1;
        if ((int)uVar5 < 0xd) {
          if (uVar5 == 10) goto LAB_0013a85c;
          if (uVar5 != 0xffffffff) goto LAB_0013a8bc;
          pcVar10 = "comment";
LAB_0013aa58:
          plVar17 = (long *)&DAT_0000000a;
          uVar8 = FUN_0012e860(*(undefined8 *)(param_1 + 0xe),
                               "unfinished long %s (starting at line %d)",pcVar10,uVar1);
          FUN_00138780(param_1,uVar8,0x120);
          goto LAB_0013aa7c;
        }
        if (uVar5 == 0x5d) goto LAB_0013a8a0;
        if (uVar5 != 0xd) {
LAB_0013a8bc:
          lVar11 = **(long **)(param_1 + 0x10);
          **(long **)(param_1 + 0x10) = lVar11 + -1;
          if (lVar11 == 0) {
            uVar5 = FUN_00145730();
            *param_1 = uVar5;
          }
          else {
            pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
            *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
            *param_1 = (uint)*pbVar12;
          }
          goto LAB_0013a834;
        }
LAB_0013a85c:
        unaff_x26 = *(long **)(param_1 + 0x12);
        lVar11 = unaff_x26[1];
        uVar2 = unaff_x26[2];
        uVar7 = lVar11 + 1;
        if (uVar2 < uVar7) {
          if (0x3ffffffffffffffe < uVar2) goto LAB_0013aa7c;
          unaff_x23 = uVar2 << 1;
          lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*unaff_x26,uVar2,unaff_x23);
          lVar11 = unaff_x26[1];
          uVar7 = lVar11 + 1;
          *unaff_x26 = lVar6;
          unaff_x26[2] = unaff_x23;
        }
        else {
          lVar6 = *unaff_x26;
        }
        unaff_x26[1] = uVar7;
        *(undefined1 *)(lVar6 + lVar11) = 10;
        FUN_0013a380(param_1);
        *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      } while( true );
    }
    plVar16 = (long *)0x3fffffffffffffff;
    plVar17 = (long *)&DAT_0000000a;
    do {
      while( true ) {
        uVar5 = *param_1;
        unaff_x26 = (long *)(ulong)uVar5;
        if (0xc < (int)uVar5) break;
        if (uVar5 == 10) {
LAB_0013a71c:
          unaff_x26 = *(long **)(param_1 + 0x12);
          lVar11 = unaff_x26[1];
          uVar2 = unaff_x26[2];
          uVar7 = lVar11 + 1;
          if (uVar2 < uVar7) {
            if (0x3ffffffffffffffe < uVar2) goto LAB_0013aa7c;
            unaff_x23 = uVar2 << 1;
            lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*unaff_x26,uVar2,unaff_x23);
            lVar11 = unaff_x26[1];
            uVar7 = lVar11 + 1;
            *unaff_x26 = lVar6;
            unaff_x26[2] = unaff_x23;
          }
          else {
            lVar6 = *unaff_x26;
          }
          unaff_x26[1] = uVar7;
          *(undefined1 *)(lVar6 + lVar11) = 10;
          FUN_0013a380(param_1);
        }
        else {
          if (uVar5 == 0xffffffff) {
            pcVar10 = "string";
            goto LAB_0013aa58;
          }
LAB_0013a768:
          plVar15 = *(long **)(param_1 + 0x12);
          lVar11 = plVar15[1];
          uVar2 = plVar15[2];
          uVar7 = lVar11 + 1;
          if (uVar2 < uVar7) {
            if (0x3ffffffffffffffe < uVar2) goto LAB_0013aa7c;
            unaff_x23 = uVar2 << 1;
            lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,unaff_x23);
            lVar11 = plVar15[1];
            uVar7 = lVar11 + 1;
            *plVar15 = lVar6;
            plVar15[2] = unaff_x23;
          }
          else {
            lVar6 = *plVar15;
          }
          plVar15[1] = uVar7;
          *(char *)(lVar6 + lVar11) = (char)uVar5;
          lVar11 = **(long **)(param_1 + 0x10);
          **(long **)(param_1 + 0x10) = lVar11 + -1;
          if (lVar11 == 0) {
            uVar5 = FUN_00145730();
            *param_1 = uVar5;
          }
          else {
            pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
            *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
            *param_1 = (uint)*pbVar12;
          }
        }
      }
      if (uVar5 == 0xd) goto LAB_0013a71c;
      if (uVar5 != 0x5d) goto LAB_0013a768;
      lVar11 = FUN_0013a450(param_1);
    } while (lVar11 != param_3);
LAB_0013a8f8:
    plVar17 = (long *)&DAT_0000000a;
    plVar16 = *(long **)(param_1 + 0x12);
    lVar11 = plVar16[1];
    uVar2 = plVar16[2];
    uVar5 = *param_1;
    unaff_x23 = (ulong)uVar5;
    uVar7 = lVar11 + 1;
    if (uVar7 <= uVar2) {
      lVar6 = *plVar16;
LAB_0013a948:
      plVar16[1] = uVar7;
      *(char *)(lVar6 + lVar11) = (char)uVar5;
      lVar11 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar11 + -1;
      if (lVar11 == 0) {
        uVar7 = FUN_00145730();
        *param_1 = (uint)uVar7;
      }
      else {
        pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
        *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
        bVar3 = *pbVar12;
        uVar7 = (ulong)bVar3;
        *param_1 = (uint)bVar3;
      }
      if (param_2 != (long *)0x0) {
        lVar6 = *(long *)(param_1 + 0xe);
        lVar11 = FUN_0013be00(lVar6,**(long **)(param_1 + 0x12) + param_3,
                              (*(long **)(param_1 + 0x12))[1] + param_3 * -2);
        uVar7 = FUN_0013d320(*(undefined8 *)(param_1 + 0x14),lVar11);
        if ((*(byte *)(uVar7 + 8) & 0xf) == 0) {
          plVar16 = *(long **)(lVar6 + 0x10);
          *(long **)(lVar6 + 0x10) = plVar16 + 2;
          *plVar16 = lVar11;
          *(byte *)(plVar16 + 1) = *(byte *)(lVar11 + 8) | 0x40;
          uVar7 = FUN_0013d7c0(lVar6,*(undefined8 *)(param_1 + 0x14),plVar16,uVar7,plVar16);
          if (0 < *(long *)(*(long *)(lVar6 + 0x18) + 0x18)) {
            uVar7 = FUN_0012ac30(lVar6);
          }
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
        }
        else {
          lVar11 = *(long *)(uVar7 + 0x10);
        }
        *param_2 = lVar11;
      }
      return uVar7;
    }
    if (uVar2 < 0x3fffffffffffffff) {
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar16,uVar2,uVar2 << 1);
      lVar11 = plVar16[1];
      uVar7 = lVar11 + 1;
      *plVar16 = lVar6;
      plVar16[2] = uVar2 << 1;
      goto LAB_0013a948;
    }
  }
LAB_0013aa7c:
  auVar18 = FUN_00138780(param_1,"lexical element too long",0);
  puVar9 = auVar18._0_8_;
  uStack_a8 = 0x13aa90;
  plVar15 = *(long **)(puVar9 + 0x12);
  lVar11 = plVar15[1];
  uVar2 = plVar15[2];
  uVar5 = *puVar9;
  uVar7 = lVar11 + 1;
  local_a0 = unaff_x26;
  plStack_98 = plVar17;
  local_90 = plVar16;
  uStack_88 = unaff_x23;
  local_80 = uVar1;
  lStack_78 = param_3;
  local_70 = param_2;
  uStack_68 = param_1;
  if (uVar2 < uVar7) {
    local_b0 = (undefined1 *)((long)register0x00000008 + -0x60);
    if (0x3ffffffffffffffe < uVar2) goto LAB_0013ae9c;
    local_b0 = (undefined1 *)((long)register0x00000008 + -0x60);
    lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar15,uVar2,uVar2 << 1);
    lVar11 = plVar15[1];
    uVar7 = lVar11 + 1;
    *plVar15 = lVar6;
    plVar15[2] = uVar2 << 1;
  }
  else {
    lVar6 = *plVar15;
    local_b0 = (undefined1 *)((long)register0x00000008 + -0x60);
  }
  plVar15[1] = uVar7;
  *(char *)(lVar6 + lVar11) = (char)uVar5;
  lVar11 = **(long **)(puVar9 + 0x10);
  **(long **)(puVar9 + 0x10) = lVar11 + -1;
  if (lVar11 == 0) {
    uVar14 = FUN_00145730();
    *puVar9 = uVar14;
    if (uVar5 == 0x30) goto LAB_0013ab58;
LAB_0013abac:
    pbVar12 = &UNK_03c1cf55;
  }
  else {
    pbVar12 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
    *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar12 + 1;
    bVar3 = *pbVar12;
    uVar14 = (uint)bVar3;
    *puVar9 = (uint)bVar3;
    if (uVar5 != 0x30) goto LAB_0013abac;
LAB_0013ab58:
    if ((uVar14 | 0x20) != 0x78) goto LAB_0013abac;
    plVar16 = *(long **)(puVar9 + 0x12);
    lVar11 = plVar16[1];
    uVar1 = plVar16[2];
    uVar7 = lVar11 + 1;
    if (uVar1 < uVar7) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar16,uVar1,uVar1 << 1);
      lVar11 = plVar16[1];
      uVar7 = lVar11 + 1;
      *plVar16 = lVar6;
      plVar16[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar16;
    }
    plVar16[1] = uVar7;
    *(char *)(lVar6 + lVar11) = (char)uVar14;
    lVar11 = **(long **)(puVar9 + 0x10);
    **(long **)(puVar9 + 0x10) = lVar11 + -1;
    if (lVar11 == 0) {
      uVar14 = FUN_00145730();
    }
    else {
      pbVar12 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
      *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar12 + 1;
      uVar14 = (uint)*pbVar12;
    }
    pbVar12 = &DAT_03c74bc2;
    *puVar9 = uVar14;
  }
  while ((uVar14 == *pbVar12 || (uVar14 == pbVar12[1]))) {
    plVar16 = *(long **)(puVar9 + 0x12);
    lVar11 = plVar16[1];
    uVar1 = plVar16[2];
    uVar7 = lVar11 + 1;
    if (uVar1 < uVar7) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar16,uVar1,uVar1 << 1);
      lVar11 = plVar16[1];
      uVar7 = lVar11 + 1;
      *plVar16 = lVar6;
      plVar16[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar16;
    }
    plVar16[1] = uVar7;
    *(char *)(lVar6 + lVar11) = (char)uVar14;
    lVar11 = **(long **)(puVar9 + 0x10);
    **(long **)(puVar9 + 0x10) = lVar11 + -1;
    if (lVar11 == 0) {
      uVar14 = FUN_00145730();
      *puVar9 = uVar14;
      uVar5 = uVar14;
      if (uVar14 != 0x2d) goto LAB_0013acd4;
      goto LAB_0013acf4;
    }
    pbVar13 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
    *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar13 + 1;
    bVar3 = *pbVar13;
    uVar14 = (uint)bVar3;
    *puVar9 = (uint)bVar3;
    uVar5 = (uint)bVar3;
    if (bVar3 == 0x2d) goto LAB_0013acf4;
LAB_0013acd4:
    uVar14 = uVar5;
    if (uVar14 == 0x2b) {
      uVar14 = 0x2b;
LAB_0013acf4:
      plVar16 = *(long **)(puVar9 + 0x12);
      lVar11 = plVar16[1];
      uVar1 = plVar16[2];
      uVar7 = lVar11 + 1;
      if (uVar1 < uVar7) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
        lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar16,uVar1,uVar1 << 1);
        lVar11 = plVar16[1];
        uVar7 = lVar11 + 1;
        *plVar16 = lVar6;
        plVar16[2] = uVar1 << 1;
      }
      else {
        lVar6 = *plVar16;
      }
      plVar16[1] = uVar7;
      *(char *)(lVar6 + lVar11) = (char)uVar14;
      lVar11 = **(long **)(puVar9 + 0x10);
      **(long **)(puVar9 + 0x10) = lVar11 + -1;
      if (lVar11 == 0) {
        uVar14 = FUN_00145730();
        *puVar9 = uVar14;
      }
      else {
        pbVar13 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
        *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar13 + 1;
        bVar3 = *pbVar13;
        uVar14 = (uint)bVar3;
        *puVar9 = (uint)bVar3;
      }
    }
  }
  if ((uVar14 == 0x2e) || (((byte)(&DAT_03cb5f2b)[(int)uVar14] >> 4 & 1) != 0)) goto LAB_0013acf4;
  if (((&DAT_03cb5f2b)[(int)uVar14] & 1) != 0) {
    plVar16 = *(long **)(puVar9 + 0x12);
    lVar11 = plVar16[1];
    uVar1 = plVar16[2];
    uVar7 = lVar11 + 1;
    if (uVar1 < uVar7) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar16,uVar1,uVar1 << 1);
      lVar11 = plVar16[1];
      uVar7 = lVar11 + 1;
      *plVar16 = lVar6;
      plVar16[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar16;
    }
    plVar16[1] = uVar7;
    *(char *)(lVar6 + lVar11) = (char)uVar14;
    lVar11 = **(long **)(puVar9 + 0x10);
    **(long **)(puVar9 + 0x10) = lVar11 + -1;
    if (lVar11 == 0) {
      uVar5 = FUN_00145730();
    }
    else {
      pbVar12 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
      *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar12 + 1;
      uVar5 = (uint)*pbVar12;
    }
    *puVar9 = uVar5;
  }
  plVar16 = *(long **)(puVar9 + 0x12);
  lVar11 = plVar16[1];
  uVar1 = plVar16[2];
  uVar7 = lVar11 + 1;
  if (uVar1 < uVar7) {
    if (0x3ffffffffffffffe < uVar1) {
LAB_0013ae9c:
      FUN_00138780(puVar9,"lexical element too long",0);
LAB_0013aeb0:
      FUN_00138780(puVar9,"malformed number",0x121);
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x13aec4);
      (*pcVar4)();
    }
    lVar6 = FUN_0012d4f0(*(undefined8 *)(puVar9 + 0xe),*plVar16,uVar1,uVar1 << 1);
    lVar11 = plVar16[1];
    uVar7 = lVar11 + 1;
    *plVar16 = lVar6;
    plVar16[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar16;
  }
  plVar16[1] = uVar7;
  *(undefined1 *)(lVar6 + lVar11) = 0;
  lVar11 = FUN_0012dc70(**(undefined8 **)(puVar9 + 0x12),&local_c0);
  if (lVar11 != 0) {
    *auVar18._8_8_ = local_c0;
    uVar5 = 0x121;
    if (local_b8 == '\x03') {
      uVar5 = 0x122;
    }
    return (ulong)uVar5;
  }
  goto LAB_0013aeb0;
LAB_0013a8a0:
  lVar11 = FUN_0013a450(param_1);
  if (lVar11 == param_3) goto LAB_0013a8f8;
  goto LAB_0013a834;
}


