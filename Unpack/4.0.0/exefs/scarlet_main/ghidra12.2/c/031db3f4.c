/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031db3f4; name: FUN_031db3f4
 */


ulong FUN_031db3f4(long *param_1,ulong *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  size_t __n;
  long lVar13;
  undefined8 uVar14;
  long local_278;
  undefined8 local_270;
  ulong *local_268;
  ulong local_260 [56];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  size_t local_48;
  
  uVar4 = 0;
  puVar10 = param_2;
  do {
    uVar9 = (uint)*puVar10;
    if ((uVar9 >> 0x15 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = CONCAT44(uVar9,uVar9) & 0x1fffff001fffff;
      uVar12 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                                    POPCOUNT((char)(uVar12 >> 0x10))) + 2];
    }
    uVar4 = uVar12 | uVar4;
  } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
  if (((uint)uVar4 >> 1 & 1) != 0) {
    uVar12 = 0;
    uVar4 = 0xffffffff;
    goto LAB_031dbad0;
  }
  local_268 = param_2;
  lVar3 = FUN_031dda50(param_1,&local_268);
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (ulong)*(uint *)(lVar3 + 4);
    uVar4 = (lVar3 - param_1[2]) * 0x20000000;
  }
  uVar5 = uVar5 | uVar4;
  if ((int)uVar5 < 0) {
    local_278 = 0;
    local_270 = 0x8000000000000000;
    FUN_031dd638(param_2,&local_278,0);
    if ((int)local_270 != 0) {
      puVar10 = param_2;
      while( true ) {
        uVar9 = (uint)*puVar10;
        if ((uVar9 >> 0x14 & 1) != 0) break;
        if (((*puVar10 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
        goto LAB_031db51c;
      }
      if (puVar10 != (ulong *)0x0) {
        uVar4 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
        __n = (size_t)(ushort)puVar10[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                    POPCOUNT((char)(uVar4 >> 8)) +
                                                   POPCOUNT((char)(uVar4 >> 0x10))) + 2];
        goto LAB_031db520;
      }
LAB_031db51c:
      __n = 0;
LAB_031db520:
      lVar3 = tpidr_el0;
      lVar13 = *(long *)(lVar3 + 0x1000b8);
      if (lVar13 == 0) {
        lVar13 = FUN_00e5d3b4();
        *(long *)(lVar3 + 0x1000b8) = lVar13;
      }
      lVar3 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
      local_48 = __n;
      if ((*(long *)(lVar3 + 8) == 0) && (lVar3 != 0)) {
        local_260[0] = (ulong)((int)__n + 0x3f) & 0x1ffc0;
        if (local_260[0] <= *(ulong *)(lVar3 + 0x28)) {
          __s = *(void **)(lVar3 + 0x38);
          if (local_260[0] + (long)__s <= *(ulong *)(lVar3 + 0x40)) {
            *(ulong *)(lVar3 + 0x38) = local_260[0] + (long)__s;
            goto LAB_031db5e0;
          }
        }
        __s = (void *)FUN_031cf3b4(lVar3,local_260);
      }
      else {
        __s = (void *)(**(code **)PTR_DAT_047d1a08)(1,&local_48,0x40);
        lVar3 = 0;
      }
LAB_031db5e0:
      memset(__s,0,__n);
      puVar10 = param_2;
      while( true ) {
        uVar9 = (uint)*puVar10;
        if ((uVar9 >> 0x16 & 1) != 0) break;
        if (((*puVar10 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
        goto LAB_031db634;
      }
      if (puVar10 != (ulong *)0x0) {
        uVar4 = CONCAT44(uVar9,uVar9) & 0x3fffff003fffff;
        pcVar6 = (code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))
                                              + POPCOUNT((char)(uVar4 >> 0x10))) + 2];
        if (pcVar6 != (code *)0x0) goto LAB_031db678;
      }
LAB_031db634:
      puVar10 = param_2;
      while (uVar4 = *puVar10, ((uint)uVar4 >> 6 & 1) == 0) {
        if (((uVar4 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
        goto LAB_031db6a4;
      }
      if ((puVar10 != (ulong *)0x0) &&
         (pcVar6 = (code *)puVar10[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x3f) + 2],
         pcVar6 != (code *)0x0)) goto LAB_031db678;
LAB_031db6a4:
      bVar2 = true;
      local_90 = 1;
      uStack_88 = 0;
      local_80 = local_260;
      local_a0 = PTR_DAT_047e34b8 + 0x10;
      uStack_98 = 0xffffffff;
      local_78 = 0;
      local_68 = 0;
      local_70 = 0x1bf;
      memset(local_260,0,0x1c0);
      FUN_0322bd4c(&local_a0,
                   "Attempted to get the vtable from a non-constructible type, it must have either an accessible default constructor or a bypass constructor"
                   ,0x88);
      FUN_03226c50(0xabbac0ae,local_260,
                   "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/Detail/hkReflectTypeDetail.cpp"
                   ,0xf7);
      goto joined_r0x031db71c;
    }
    goto LAB_031db9b4;
  }
  lVar13 = (long)(int)uVar5;
  goto LAB_031dba68;
code_r0x031db804:
  if (((*puVar10 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
  goto LAB_031db87c;
  goto LAB_031db7fc;
LAB_031db678:
  if (param_2 == (ulong *)PTR_DAT_047ddc28) {
LAB_031db8dc:
    uVar14 = *(undefined8 *)((long)__s + 8);
    (*pcVar6)(__s,param_2,1);
    *(undefined8 *)((long)__s + 8) = uVar14;
  }
  else {
    puVar10 = param_2;
    do {
      uVar9 = (uint)*puVar10;
      if ((uVar9 >> 0xd & 1) != 0) {
        puVar11 = (ulong *)0x0;
        if (puVar10 != (ulong *)0x0) {
          uVar4 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
          puVar11 = puVar10 + (ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) +
                              2;
        }
        goto LAB_031db7f4;
      }
      if ((*puVar10 & 1) != 0) {
        puVar11 = (ulong *)0x0;
        goto LAB_031db7f4;
      }
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
    puVar11 = (ulong *)0x0;
LAB_031db7f4:
    puVar10 = (ulong *)PTR_DAT_047ddc28;
LAB_031db7fc:
    uVar9 = (uint)*puVar10;
    if ((uVar9 >> 0xd & 1) == 0) goto code_r0x031db804;
    if ((puVar10 != (ulong *)0x0) && (puVar11 != (ulong *)0x0)) {
      uVar4 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
      while( true ) {
        DataMemoryBarrier(2,1);
        uVar9 = (uint)puVar10[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) +
                              2];
        if (((DAT_04884450 & 1) == 0) || ((((uint)*puVar11 ^ uVar9) & 3) == 0)) break;
        DataMemoryBarrier(2,2);
        Yield();
      }
      iVar8 = (int)(*puVar11 >> 0x11);
      if (((int)(puVar10[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2] >>
                0x11) <= iVar8) && (iVar8 <= (int)(uVar9 >> 2 & 0x7fff))) goto LAB_031db8dc;
      goto LAB_031db8ac;
    }
LAB_031db87c:
    puVar10 = (ulong *)PTR_DAT_047ddc28;
    do {
      if ((*puVar10 & 1) != 0) break;
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
    if (param_2 != (ulong *)0x0) {
      puVar11 = param_2;
      do {
        if (puVar11 == puVar10) goto LAB_031db8dc;
        puVar11 = (ulong *)puVar11[1];
      } while (puVar11 != (ulong *)0x0);
    }
LAB_031db8ac:
    (*pcVar6)(__s,param_2,1);
  }
  puVar10 = param_2;
  if (0 < (int)local_270) {
    lVar13 = 0;
    lVar7 = 0;
    do {
      plVar1 = (long *)(local_278 + lVar13);
      lVar13 = lVar13 + 0x10;
      plVar1[1] = *(long *)(*plVar1 + (long)__s);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)local_270);
  }
  while (uVar4 = *puVar10, ((uint)uVar4 >> 8 & 1) == 0) {
    if (((uVar4 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
    goto LAB_031db988;
  }
  if ((puVar10 != (ulong *)0x0) &&
     ((code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar4) + 2] != (code *)0x0)) {
    (*(code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar4) + 2])(__s,param_2,1);
  }
LAB_031db988:
  bVar2 = false;
joined_r0x031db71c:
  if (lVar3 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,__s,__n);
  }
  else {
    uVar4 = (ulong)((int)__n + 0x3f) & 0x1ffc0;
    if ((*(ulong *)(lVar3 + 0x28) < uVar4) || (*(long *)(lVar3 + 0x38) != uVar4 + (long)__s)) {
      if (__s != (void *)0x0) {
        if (*(ulong *)(lVar3 + 0x28) < uVar4 + 0x40) {
          *(int *)(*(long *)(lVar3 + 0x30) + 0x20) = *(int *)(*(long *)(lVar3 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                    (*(long **)(lVar3 + 0x10),(long)__s - (long)*(int *)((long)__s + -4),
                     uVar4 + 0x44);
        }
        else {
          if (*(long *)(lVar3 + 0x38) == uVar4 + (long)__s) {
            *(void **)(lVar3 + 0x38) = __s;
            goto LAB_031db7bc;
          }
          FUN_031cf778(lVar3,__s);
        }
      }
    }
    else {
      *(void **)(lVar3 + 0x38) = __s;
      if (*(void **)(lVar3 + 0x48) == __s) {
LAB_031db7bc:
        FUN_031cf578(lVar3);
      }
    }
  }
  if (bVar2) {
    local_270 = local_270 & 0xffffffff00000000;
  }
LAB_031db9b4:
  local_260[0] = 0;
  local_260[1] = 0x8000000000000000;
  uVar5 = FUN_031dd914(param_1,&local_268,local_260);
  lVar3 = *param_1;
  lVar13 = (long)(int)uVar5;
  plVar1 = (long *)(lVar3 + (long)(int)uVar5 * 0x18 + 8);
  if (&local_278 == plVar1) {
    uVar9 = local_270._4_4_;
  }
  else {
    FUN_031ddf2c(plVar1);
    FUN_031ddf2c(&local_278);
    lVar7 = *plVar1;
    *plVar1 = local_278;
    lVar3 = lVar3 + lVar13 * 0x18;
    *(int *)(lVar3 + 0x10) = (int)local_270;
    uVar9 = *(uint *)(lVar3 + 0x14);
    *(uint *)(lVar3 + 0x14) = local_270._4_4_;
    local_270 = (ulong)uVar9 << 0x20;
    local_278 = lVar7;
  }
  local_270 = local_270 & 0xffffffff00000000;
  if ((-1 < (int)uVar9) && (local_278 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_278,(ulong)uVar9 << 4);
  }
  param_2 = local_268;
LAB_031dba68:
  while( true ) {
    uVar9 = (uint)*param_2;
    if ((uVar9 >> 0x14 & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_031dbabc;
  }
  if (param_2 != (ulong *)0x0) {
    uVar9 = uVar9 & 0xfffff;
    uVar12 = (param_2[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                   POPCOUNT((char)(uVar9 >> 0x10))) + 2] & 0xffff) << 0x20;
    goto LAB_031dbac0;
  }
LAB_031dbabc:
  uVar12 = 0;
LAB_031dbac0:
  uVar4 = 0xffffffff;
  if (*(int *)(*param_1 + lVar13 * 0x18 + 0x10) != 0) {
    uVar4 = uVar5 & 0xffffffff;
  }
LAB_031dbad0:
  return uVar12 | uVar4;
}


