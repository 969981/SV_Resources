/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005065ec; name: FUN_005065ec
 */


void FUN_005065ec(long *param_1,undefined8 param_2,long *param_3)

{
  void *__src;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__dest;
  long extraout_x1;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined **local_a8;
  long *local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  lVar5 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  if (extraout_x1 == 0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1);
    if (puVar6 == (undefined8 *)0x0) {
      local_90 = 0x6e776f6e6b6e750e;
      uStack_88 = uStack_88 & 0xffffffffffffff00;
    }
    else {
      puVar9 = (ulong *)*puVar6;
      if ((*puVar9 & 1) == 0) {
        uStack_88 = puVar9[1];
        local_90 = *puVar9;
        local_80 = (void *)puVar9[2];
      }
      else {
        uVar17 = puVar9[1];
        __src = (void *)puVar9[2];
        if (uVar17 < 0x17) {
          __dest = (void *)((ulong)&local_90 | 1);
          local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar17 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar7 = uVar17 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
          local_90 = uVar7 | 1;
          uStack_88 = uVar17;
          local_80 = __dest;
        }
        memcpy(__dest,__src,uVar17 + 1);
      }
      if ((local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
    }
  }
  puVar2 = PTR_LAB_047cba48;
  uVar1 = *(uint *)(lVar5 + 0x68);
  if (0 < (int)uVar1) {
    uVar17 = 0;
    do {
      if ((*(int *)(*(long *)(lVar5 + 0x28) + uVar17 * 0x98 + 0x3c) == 2) &&
         (uVar7 = FUN_004f4514(extraout_x1,param_1,*(long *)(lVar5 + 0x28) + uVar17 * 0x98),
         (uVar7 & 1) == 0)) {
        FUN_004e94c0(&local_90,param_2,*(undefined8 *)(*(long *)(lVar5 + 0x28) + uVar17 * 0x98));
        puVar9 = (ulong *)param_3[1];
        if (puVar9 < (ulong *)param_3[2]) {
          puVar9[2] = (ulong)local_80;
          puVar9[1] = uStack_88;
          *puVar9 = local_90;
          uStack_88 = 0;
          local_80 = (void *)0x0;
          local_90 = 0;
          param_3[1] = (long)(puVar9 + 3);
        }
        else {
          lVar10 = (long)puVar9 - *param_3 >> 3;
          uVar7 = lVar10 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* try { // try from 00506ad0 to 00506ad7 has its CatchHandler @ 00506ae0 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = param_3[2] - *param_3 >> 3;
          uVar12 = lVar11 * 0x5555555555555556;
          if (uVar7 <= uVar12) {
            uVar7 = uVar12;
          }
          if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
            uVar7 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar7 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = FUN_0049e770(PTR_FUN_047cba38,uVar7 * 0x18);
          }
          puVar13 = (ulong *)(lVar11 + lVar10 * 8);
          puVar13[2] = (ulong)local_80;
          lVar11 = lVar11 + uVar7 * 0x18;
          puVar13[1] = uStack_88;
          *puVar13 = local_90;
          uStack_88 = 0;
          local_80 = (void *)0x0;
          local_90 = 0;
          pbVar15 = (byte *)*param_3;
          pbVar14 = (byte *)param_3[1];
          puVar9 = puVar13 + 3;
          if (pbVar14 == pbVar15) {
            *param_3 = (long)puVar13;
            param_3[1] = (long)puVar9;
            param_3[2] = lVar11;
          }
          else {
            do {
              uVar12 = *(ulong *)(pbVar14 + -0x10);
              uVar7 = *(ulong *)(pbVar14 + -0x18);
              puVar13[-1] = *(ulong *)(pbVar14 + -8);
              puVar13[-2] = uVar12;
              puVar13[-3] = uVar7;
              pbVar14[-0x18] = 0;
              pbVar14[-0x17] = 0;
              pbVar14[-0x16] = 0;
              pbVar14[-0x15] = 0;
              pbVar14[-0x14] = 0;
              pbVar14[-0x13] = 0;
              pbVar14[-0x12] = 0;
              pbVar14[-0x11] = 0;
              pbVar14[-0x10] = 0;
              pbVar14[-0xf] = 0;
              pbVar14[-0xe] = 0;
              pbVar14[-0xd] = 0;
              pbVar14[-0xc] = 0;
              pbVar14[-0xb] = 0;
              pbVar14[-10] = 0;
              pbVar14[-9] = 0;
              pbVar14[-8] = 0;
              pbVar14[-7] = 0;
              pbVar14[-6] = 0;
              pbVar14[-5] = 0;
              pbVar14[-4] = 0;
              pbVar14[-3] = 0;
              pbVar14[-2] = 0;
              pbVar14[-1] = 0;
              pbVar14 = pbVar14 + -0x18;
              puVar13 = puVar13 + -3;
            } while (pbVar15 != pbVar14);
            pbVar15 = (byte *)*param_3;
            pbVar14 = (byte *)param_3[1];
            *param_3 = (long)puVar13;
            param_3[1] = (long)puVar9;
            param_3[2] = lVar11;
            if (pbVar14 != pbVar15) {
              do {
                pbVar18 = pbVar14 + -0x18;
                if ((*pbVar18 & 1) != 0) {
                  FUN_0049e790(puVar2,*(undefined8 *)(pbVar14 + -8));
                }
                pbVar14 = pbVar18;
              } while (pbVar15 != pbVar18);
            }
          }
          if (pbVar15 != (byte *)0x0) {
            FUN_0049e790(puVar2,pbVar15);
          }
        }
        if ((local_90 & 1) != 0) {
          FUN_0049e790(puVar2,local_80);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar1);
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 005068ac to 005068bb has its CatchHandler @ 00506af4 */
  FUN_004f4acc(extraout_x1,param_1,&local_90);
  puVar3 = PTR_DAT_047cd750;
  puVar2 = PTR_LAB_047cba48;
  uVar17 = uStack_88;
  if (uStack_88 != local_90) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(local_90 + uVar7 * 8);
      puVar9 = *(ulong **)(lVar5 + 0x30);
      if ((puVar9 != (ulong *)0x0) &&
         (puStack_70 = PTR_LAB_047cd728, local_78 = lVar5, *puVar9 != 0xffffffffffffffff)) {
        local_a8 = &puStack_70;
        local_a0 = &local_78;
        local_68 = &local_a8;
                    /* try { // try from 00506968 to 00506977 has its CatchHandler @ 00506b08 */
        std::__call_once(puVar9,&local_68,(_func_void_void_ptr *)&LAB_00506f10);
      }
      if (*(int *)(puVar3 + (ulong)*(uint *)(lVar5 + 0x38) * 4) == 10) {
        if (*(int *)(lVar5 + 0x3c) == 3) {
                    /* try { // try from 00506994 to 005069a3 has its CatchHandler @ 00506b00 */
          iVar4 = FUN_004f48a0(extraout_x1,param_1,lVar5);
          if (0 < iVar4) {
            iVar16 = 0;
            do {
                    /* try { // try from 005069c4 to 005069d7 has its CatchHandler @ 00506b0c */
              uVar8 = FUN_004f7c80(extraout_x1,param_1,lVar5,iVar16);
                    /* try { // try from 005069dc to 005069ef has its CatchHandler @ 00506b10 */
              FUN_00506b60(&local_a8,param_2,lVar5,iVar16);
                    /* try { // try from 005069f0 to 005069ff has its CatchHandler @ 00506b34 */
              FUN_005065ec(uVar8,&local_a8,param_3);
              if (((ulong)local_a8 & 1) != 0) {
                FUN_0049e790(puVar2,local_98);
              }
              iVar16 = iVar16 + 1;
            } while (iVar4 != iVar16);
          }
        }
        else {
                    /* try { // try from 00506a18 to 00506a2b has its CatchHandler @ 00506afc */
          uVar8 = FUN_004f72a0(extraout_x1,param_1,lVar5,0);
                    /* try { // try from 00506a30 to 00506a43 has its CatchHandler @ 00506af8 */
          FUN_00506b60(&local_a8,param_2,lVar5,0xffffffff);
                    /* try { // try from 00506a44 to 00506a53 has its CatchHandler @ 00506b04 */
          FUN_005065ec(uVar8,&local_a8,param_3);
          if (((ulong)local_a8 & 1) != 0) {
            FUN_0049e790(puVar2,local_98);
          }
        }
      }
      uVar7 = uVar7 + 1;
      uVar17 = local_90;
    } while (uVar7 < (ulong)((long)(uStack_88 - local_90) >> 3));
  }
  if (uVar17 != 0) {
    uStack_88 = uVar17;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


