/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bb474; name: FUN_005bb474
 */


void FUN_005bb474(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  long *plStack_100;
  undefined1 auStack_f8 [8];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  long *local_98 [2];
  ulong *local_88;
  ulong *local_80;
  ulong *puStack_78;
  ulong *local_70;
  long **pplStack_68;
  
  local_a0 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  local_98[0] = (long *)FUN_01cf7e20();
  lVar10 = *param_3;
  lVar3 = param_3[1];
  if (lVar10 != lVar3) {
    do {
                    /* try { // try from 005bb514 to 005bb51b has its CatchHandler @ 005bb874 */
      FUN_027c2388(&local_118,lVar10 + 0x20);
                    /* try { // try from 005bb51c to 005bb527 has its CatchHandler @ 005bb888 */
      FUN_01d0e1a8(&local_118,lVar10);
      puVar2 = puStack_a8;
      if (puStack_a8 < local_a0) {
        puStack_a8[1] = uStack_110;
        *puStack_a8 = local_118;
        puStack_a8[3] = (ulong)plStack_100;
        puStack_a8[2] = local_108;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        FUN_027d3bd4(puStack_a8 + 4,auStack_f8);
        puVar2[8] = (ulong)plStack_d8;
        puVar2[7] = local_e0;
        puVar2[6] = uStack_e8;
        puVar2[5] = local_f0;
        local_e0 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar2[9] = (ulong)local_d0;
        puVar1 = puVar2 + 10;
        puVar2[0xb] = uStack_c0;
        puVar2[10] = local_c8;
        puVar2[0xc] = local_b8;
        if (local_b8 == 0) {
          puVar2[9] = (ulong)puVar1;
        }
        else {
          *(ulong **)(*puVar1 + 0x10) = puVar1;
          local_b8 = 0;
          local_c8 = 0;
          local_d0 = &local_c8;
        }
        puStack_a8 = puVar2 + 0xd;
      }
      else {
        lVar7 = (long)puStack_a8 - (long)local_b0 >> 3;
        uVar8 = lVar7 * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar8) {
                    /* try { // try from 005bb868 to 005bb86f has its CatchHandler @ 005bb870 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar4 = (long)local_a0 - (long)local_b0 >> 3;
        uVar9 = lVar4 * -0x6276276276276276;
        if (uVar8 <= uVar9) {
          uVar8 = uVar9;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
          uVar8 = 0x276276276276276;
        }
        local_70 = (ulong *)0x0;
        pplStack_68 = local_98;
        if (uVar8 == 0) {
          local_88 = (ulong *)0x0;
        }
        else {
          local_88 = (ulong *)(**(code **)(*local_98[0] + 0x10))(local_98[0],uVar8 * 0x68,8);
        }
        puVar6 = local_88 + lVar7;
        local_70 = local_88 + uVar8 * 0xd;
        puVar6[1] = uStack_110;
        *puVar6 = local_118;
        puVar6[3] = (ulong)plStack_100;
        puVar6[2] = local_108;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        local_80 = puVar6;
        puStack_78 = puVar6;
        FUN_027d3bd4(puVar6 + 4,auStack_f8);
        puVar1 = puStack_a8;
        puVar6[8] = (ulong)plStack_d8;
        puVar6[7] = local_e0;
        puVar6[6] = uStack_e8;
        puVar6[5] = local_f0;
        local_e0 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar6[9] = (ulong)local_d0;
        puVar6[0xb] = uStack_c0;
        puVar6[10] = local_c8;
        puVar2 = puVar6 + 10;
        puVar6[0xc] = local_b8;
        if (local_b8 == 0) {
          puVar6[9] = (ulong)puVar2;
        }
        else {
          *(ulong **)(*puVar2 + 0x10) = puVar2;
          local_b8 = 0;
          local_c8 = 0;
          local_d0 = &local_c8;
        }
        puStack_78 = puStack_78 + 0xd;
        if (puStack_a8 == local_b0) {
          puStack_a8 = local_b0;
        }
        else {
          lVar4 = 0;
          lVar7 = (long)local_b0 - (long)puStack_a8;
          do {
            puVar2 = local_80;
            uVar9 = *(ulong *)((long)puVar1 + lVar4 + -0x60);
            uVar8 = *(ulong *)((long)puVar1 + lVar4 + -0x68);
            uVar11 = *(ulong *)((long)puVar1 + lVar4 + -0x58);
            local_80[-10] = *(ulong *)((long)puVar1 + lVar4 + -0x50);
            local_80[-0xb] = uVar11;
            local_80[-0xc] = uVar9;
            local_80[-0xd] = uVar8;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x68) = 0;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x60) = 0;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x58) = 0;
            FUN_027d3bd4(local_80 + -9,(long)puVar1 + lVar4 + -0x48);
            uVar8 = *(ulong *)((long)puVar1 + lVar4 + -0x40);
            uVar11 = *(ulong *)((long)puVar1 + lVar4 + -0x28);
            uVar9 = *(ulong *)((long)puVar1 + lVar4 + -0x30);
            puVar2[-7] = *(ulong *)((long)puVar1 + lVar4 + -0x38);
            puVar2[-8] = uVar8;
            puVar2[-5] = uVar11;
            puVar2[-6] = uVar9;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x40) = 0;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x38) = 0;
            *(undefined8 *)((long)puVar1 + lVar4 + -0x30) = 0;
            puVar2[-4] = *(ulong *)((long)puVar1 + lVar4 + -0x20);
            uVar8 = *(ulong *)((long)puVar1 + lVar4 + -0x18);
            puVar6 = puVar2 + -3;
            puVar2[-2] = *(ulong *)((long)puVar1 + lVar4 + -0x10);
            puVar2[-3] = uVar8;
            uVar8 = *(ulong *)((long)puVar1 + lVar4 + -8);
            puVar2[-1] = uVar8;
            if (uVar8 == 0) {
              puVar2[-4] = (ulong)puVar6;
            }
            else {
              *(ulong **)(*puVar6 + 0x10) = puVar6;
              puVar5 = (undefined8 *)((long)puVar1 + lVar4 + -0x18);
              *puVar5 = 0;
              *(undefined8 **)((long)puVar1 + lVar4 + -0x20) = puVar5;
              *(undefined8 *)((long)puVar1 + lVar4 + -8) = 0;
            }
            lVar4 = lVar4 + -0x68;
            local_80 = local_80 + -0xd;
          } while (lVar7 != lVar4);
        }
        puVar2 = local_a0;
        local_a0 = local_70;
        local_70 = puVar2;
        local_88 = local_b0;
        local_b0 = local_80;
        puVar2 = puStack_a8;
        puStack_a8 = puStack_78;
        local_80 = local_88;
        puStack_78 = puVar2;
        FUN_005bac94(&local_88);
      }
      FUN_027c2bd0(&local_d0,local_c8);
      if ((local_f0 & 1) == 0) {
        FUN_01cfa410(auStack_f8);
      }
      else {
        (**(code **)(*plStack_d8 + 0x18))(plStack_d8,local_e0,local_f0 & 0xfffffffffffffffe,1);
        FUN_01cfa410(auStack_f8);
      }
      if ((local_118 & 1) != 0) {
        (**(code **)(*plStack_100 + 0x18))(plStack_100,local_108,local_118 & 0xfffffffffffffffe,1);
      }
      lVar10 = lVar10 + 0x88;
    } while (lVar10 != lVar3);
  }
  FUN_005bad54(param_1,param_2,&local_b0,param_3 + 4);
  FUN_005bab90(&local_b0);
  return;
}


