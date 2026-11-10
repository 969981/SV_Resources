/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ab754; name: FUN_004ab754
 */


undefined1  [16] FUN_004ab754(long param_1,byte *param_2,ulong *param_3,int param_4,uint param_5)

{
  bool bVar1;
  void *pvVar2;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  void *pvVar12;
  undefined1 auVar13 [16];
  undefined8 local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  
  pbVar9 = (byte *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*pbVar9 & 1) == 0) {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    uVar11 = (ulong)*param_2;
    if ((*param_2 & 1) != 0) goto LAB_004ab7a0;
LAB_004ab7d8:
    if (((uint)uVar11 < 2) || (pbVar10 = param_2 + 1, *pbVar10 != 0x2e)) {
      pbVar10 = param_2 + 1;
      __n = uVar11 >> 1;
joined_r0x004ab82c:
      if ((__n == 0) || (pvVar2 = memchr(pbVar10,0x2e,__n), pvVar2 == (void *)0x0)) {
LAB_004ab8a0:
                    /* try { // try from 004ab8a0 to 004ab8ab has its CatchHandler @ 004abe3c */
        local_70 = (void *)0x0;
        uStack_78 = 0;
        local_80 = 0;
        FUN_001fcec0(&local_80,param_2);
        if ((*param_3 & 1) != 0) goto LAB_004ab98c;
LAB_004ab8b4:
        uStack_98 = param_3[1];
        local_a0 = *param_3;
        local_90 = (void *)param_3[2];
      }
      else {
        uVar4 = (long)pvVar2 - (long)pbVar10;
        local_70 = (void *)0x0;
        local_80 = 0;
        uStack_78 = 0;
        if (uVar4 == 0xffffffffffffffff) goto LAB_004ab8a0;
        pbVar10 = *(byte **)(param_2 + 0x10);
        uVar5 = uVar11 >> 1;
        if ((uVar11 & 1) == 0) {
          pbVar10 = param_2 + 1;
        }
        else {
          uVar5 = *(ulong *)(param_2 + 8);
        }
        if (uVar4 <= uVar5) {
          uVar5 = uVar4;
        }
        if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 004abe00 to 004abe07 has its CatchHandler @ 004abe18 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar5 < 0x17) {
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar5 << 1));
          pvVar2 = (void *)((ulong)&local_a0 | 1);
          if (uVar5 != 0) goto LAB_004ab948;
        }
        else {
          uVar11 = uVar5 + 0x10 & 0xfffffffffffffff0;
          pvVar2 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
          local_a0 = uVar11 | 1;
          uStack_98 = uVar5;
          local_90 = pvVar2;
LAB_004ab948:
          memcpy(pvVar2,pbVar10,uVar5);
        }
        *(undefined1 *)((long)pvVar2 + uVar5) = 0;
        if ((local_80 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_70);
        }
        local_70 = local_90;
        uStack_78 = uStack_98;
        local_80 = local_a0;
        if ((*param_3 & 1) == 0) goto LAB_004ab8b4;
LAB_004ab98c:
        uVar11 = param_3[1];
        pvVar2 = (void *)param_3[2];
        if (uVar11 < 0x17) {
          pvVar12 = (void *)((ulong)&local_a0 | 1);
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar11 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 004abdf8 to 004abdff has its CatchHandler @ 004abe1c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar4 = uVar11 + 0x10 & 0xfffffffffffffff0;
          pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
          local_a0 = uVar4 | 1;
          uStack_98 = uVar11;
          local_90 = pvVar12;
        }
        memcpy(pvVar12,pvVar2,uVar11 + 1);
      }
      uVar4 = local_a0 & 0xff;
      pvVar12 = (void *)((ulong)&local_a0 | 1);
      bVar1 = (local_a0 & 1) == 0;
      uVar11 = local_a0 >> 1 & 0x7f;
      pvVar2 = pvVar12;
      if (!bVar1) {
        uVar11 = uStack_98;
        pvVar2 = local_90;
      }
      if (uVar11 != 0) {
        pvVar7 = local_90;
        uVar5 = uStack_98;
        if (param_4 == 1) {
          do {
            do {
              uVar6 = uVar11;
              if (uVar6 == 0) goto LAB_004abd04;
              uVar11 = uVar6 - 1;
            } while (*(char *)((long)pvVar2 + (uVar6 - 1)) != '.');
            if (uVar6 == 0) break;
            if (bVar1) {
              if (((uint)uVar4 >> 1 & 0x7f) < uVar11) goto LAB_004abde0;
              *(undefined1 *)((long)&local_a0 + uVar6) = 0;
              uVar3 = (int)uVar11 << 1;
              local_a0 = CONCAT71(local_a0._1_7_,(char)uVar3);
            }
            else {
              if (uVar5 < uVar11) goto LAB_004abde0;
              *(undefined1 *)((long)pvVar7 + uVar11) = 0;
              uVar3 = (uint)(byte)local_a0;
              uStack_98 = uVar11;
            }
            uVar11 = (ulong)(uVar3 >> 1 & 0x7f);
            if ((uVar3 & 1) != 0) {
              uVar11 = uStack_98;
            }
                    /* try { // try from 004aba8c to 004ababb has its CatchHandler @ 004abe38 */
            FUN_002ce498(&local_a0,1,0x2e);
            uVar4 = local_80 >> 1 & 0x7f;
            pvVar2 = (void *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              uVar4 = uStack_78;
              pvVar2 = local_70;
            }
            FUN_0021d540(&local_a0,pvVar2,uVar4);
                    /* try { // try from 004ababc to 004abacb has its CatchHandler @ 004abe2c */
            auVar13 = FUN_004ab5d4(param_1,&local_a0,param_5 & 1);
            uVar3 = auVar13._0_4_;
            if (uVar3 != 0) {
              uVar4 = local_80 >> 1 & 0x7f;
              if ((local_80 & 1) != 0) {
                uVar4 = uStack_78;
              }
              uVar6 = *(ulong *)(param_2 + 8);
              bVar1 = (*param_2 & 1) == 0;
              uVar8 = (ulong)(*param_2 >> 1);
              uVar5 = uVar8;
              if (!bVar1) {
                uVar5 = uVar6;
              }
              if (uVar4 < uVar5) {
                if ((uVar3 < 9) && ((1 << (ulong)(uVar3 & 0x1f) & 0x152U) != 0)) goto LAB_004abd74;
              }
              else if ((uVar3 == 1) || (uVar3 == 4)) goto LAB_004abd1c;
            }
            if ((local_a0 & 1) == 0) {
              if ((local_a0 >> 1 & 0x7f) < uVar11) goto LAB_004abde8;
              *(undefined1 *)((long)&local_a0 + uVar11 + 1) = 0;
              uVar3 = (int)uVar11 << 1;
              uVar4 = (ulong)uVar3;
              local_a0 = CONCAT71(local_a0._1_7_,(char)uVar3);
            }
            else {
              if (uStack_98 < uVar11) goto LAB_004abde8;
              *(undefined1 *)((long)local_90 + uVar11) = 0;
              uVar4 = local_a0 & 0xff;
              uStack_98 = uVar11;
            }
            bVar1 = (uVar4 & 1) == 0;
            uVar11 = (ulong)((uint)uVar4 >> 1 & 0x7f);
            pvVar2 = pvVar12;
            if (!bVar1) {
              uVar11 = uStack_98;
              pvVar2 = local_90;
            }
            pvVar7 = local_90;
            uVar5 = uStack_98;
          } while (uVar11 != 0);
        }
        else {
          do {
            do {
              uVar6 = uVar11;
              if (uVar6 == 0) goto LAB_004abd04;
              uVar11 = uVar6 - 1;
            } while (*(char *)((long)pvVar2 + (uVar6 - 1)) != '.');
            if (uVar6 == 0) break;
            if (bVar1) {
              if (((uint)uVar4 >> 1 & 0x7f) < uVar11) goto LAB_004abde0;
              *(undefined1 *)((long)&local_a0 + uVar6) = 0;
              uVar3 = (int)uVar11 << 1;
              local_a0 = CONCAT71(local_a0._1_7_,(char)uVar3);
            }
            else {
              if (uVar5 < uVar11) {
LAB_004abde0:
                    /* try { // try from 004abde0 to 004abde7 has its CatchHandler @ 004abe44 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_out_of_range();
              }
              *(undefined1 *)((long)pvVar7 + uVar11) = 0;
              uVar3 = (uint)(byte)local_a0;
              uStack_98 = uVar11;
            }
            uVar11 = (ulong)(uVar3 >> 1 & 0x7f);
            if ((uVar3 & 1) != 0) {
              uVar11 = uStack_98;
            }
                    /* try { // try from 004abc0c to 004abc3b has its CatchHandler @ 004abe34 */
            FUN_002ce498(&local_a0,1,0x2e);
            uVar4 = local_80 >> 1 & 0x7f;
            pvVar2 = (void *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              uVar4 = uStack_78;
              pvVar2 = local_70;
            }
            FUN_0021d540(&local_a0,pvVar2,uVar4);
                    /* try { // try from 004abc3c to 004abc4b has its CatchHandler @ 004abe28 */
            auVar13 = FUN_004ab5d4(param_1,&local_a0,param_5 & 1);
            uVar3 = auVar13._0_4_;
            if (uVar3 != 0) {
              uVar4 = local_80 >> 1 & 0x7f;
              if ((local_80 & 1) != 0) {
                uVar4 = uStack_78;
              }
              uVar6 = *(ulong *)(param_2 + 8);
              bVar1 = (*param_2 & 1) == 0;
              uVar8 = (ulong)(*param_2 >> 1);
              uVar5 = uVar8;
              if (!bVar1) {
                uVar5 = uVar6;
              }
              if (uVar5 <= uVar4) goto LAB_004abd1c;
              if ((uVar3 < 9) && ((1 << (ulong)(uVar3 & 0x1f) & 0x152U) != 0)) goto LAB_004abd74;
            }
            if ((local_a0 & 1) == 0) {
              if ((local_a0 >> 1 & 0x7f) < uVar11) goto LAB_004abde8;
              *(undefined1 *)((long)&local_a0 + uVar11 + 1) = 0;
              uVar3 = (int)uVar11 << 1;
              uVar4 = (ulong)uVar3;
              local_a0 = CONCAT71(local_a0._1_7_,(char)uVar3);
            }
            else {
              if (uStack_98 < uVar11) {
LAB_004abde8:
                    /* try { // try from 004abde8 to 004abdef has its CatchHandler @ 004abe24 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_out_of_range();
              }
              *(undefined1 *)((long)local_90 + uVar11) = 0;
              uVar4 = local_a0 & 0xff;
              uStack_98 = uVar11;
            }
            bVar1 = (uVar4 & 1) == 0;
            uVar11 = (ulong)((uint)uVar4 >> 1 & 0x7f);
            pvVar2 = pvVar12;
            if (!bVar1) {
              uVar11 = uStack_98;
              pvVar2 = local_90;
            }
            pvVar7 = local_90;
            uVar5 = uStack_98;
          } while (uVar11 != 0);
        }
      }
LAB_004abd04:
                    /* try { // try from 004abd04 to 004abd13 has its CatchHandler @ 004abe44 */
      auVar13 = FUN_004ab5d4(param_1,param_2,param_5 & 1);
      goto LAB_004abd1c;
    }
    __n = uVar11 >> 1;
    if ((int)__n == 0) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
  }
  else {
    **(undefined1 **)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    uVar11 = (ulong)*param_2;
    if ((*param_2 & 1) == 0) goto LAB_004ab7d8;
LAB_004ab7a0:
    __n = *(size_t *)(param_2 + 8);
    if ((__n == 0) || (pbVar10 = *(byte **)(param_2 + 0x10), *pbVar10 != 0x2e)) {
      pbVar10 = *(byte **)(param_2 + 0x10);
      goto joined_r0x004ab82c;
    }
  }
  uVar11 = __n - 1;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar11 << 1));
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if (uVar11 != 0) goto LAB_004ab8f0;
  }
  else {
    uVar4 = __n + 0xf & 0xfffffffffffffff0;
    pvVar2 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_80 = uVar4 | 1;
    uStack_78 = uVar11;
    local_70 = pvVar2;
LAB_004ab8f0:
    memcpy(pvVar2,pbVar10 + 1,uVar11);
  }
  *(undefined1 *)((long)pvVar2 + uVar11) = 0;
                    /* try { // try from 004ab904 to 004ab913 has its CatchHandler @ 004abe30 */
  auVar13 = FUN_004ab5d4(param_1,&local_80,param_5 & 1);
LAB_004abd34:
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return auVar13;
LAB_004abd74:
  if (bVar1) {
    if (uVar8 < uVar4) goto LAB_004abe10;
    param_2 = param_2 + 1;
    uVar6 = uVar8;
  }
  else {
    if (uVar6 < uVar4) {
LAB_004abe10:
                    /* try { // try from 004abe10 to 004abe17 has its CatchHandler @ 004abe24 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar11 = uVar6 - uVar4;
  if (uVar5 - uVar4 <= uVar6 - uVar4) {
    uVar11 = uVar5 - uVar4;
  }
                    /* try { // try from 004abdac to 004abdb3 has its CatchHandler @ 004abe24 */
  FUN_0021d540(&local_a0,param_2 + uVar4,uVar11);
                    /* try { // try from 004abdb4 to 004abdc3 has its CatchHandler @ 004abe20 */
  auVar13 = FUN_004ab5d4(param_1,&local_a0,param_5 & 1);
  if (auVar13._0_4_ == 0) {
                    /* try { // try from 004abdd0 to 004abddb has its CatchHandler @ 004abe24 */
    FUN_001fcec0(pbVar9,&local_a0);
  }
LAB_004abd1c:
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  goto LAB_004abd34;
}


