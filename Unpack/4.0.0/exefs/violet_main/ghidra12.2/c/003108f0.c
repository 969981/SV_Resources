/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003108f0; name: FUN_003108f0
 */


void FUN_003108f0(uint *param_1,undefined8 *param_2,long param_3,long param_4,undefined4 *param_5,
                 long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar7;
  undefined1 uVar6;
  int iVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 uVar20;
  int local_d0 [2];
  long local_c8;
  long local_c0;
  undefined4 local_b8;
  long local_b0;
  long *local_a8;
  ulong local_a0;
  undefined1 local_98;
  byte local_97;
  undefined1 auStack_8c [12];
  undefined8 local_80;
  undefined1 local_78;
  
  uVar2 = *param_5;
  local_d0[0] = 1;
  plVar18 = *(long **)(param_5 + 4);
  uVar17 = *(ulong *)(param_5 + 2);
  local_98 = *(undefined1 *)((long)param_5 + 5);
  bVar3 = *(byte *)(param_5 + 1);
  local_80 = 0;
  local_78 = 9;
  local_b8 = uVar2;
  local_b0 = param_6;
  local_a8 = plVar18;
  local_a0 = uVar17;
  local_97 = bVar3;
  lVar10 = FUN_00368650(param_6,&local_80);
  lVar14 = *(long *)(param_6 + 0x20);
  local_c8 = lVar14;
  local_c0 = lVar10;
  lVar15 = local_b0;
  plVar1 = local_a8;
  if ((char)param_1[10] == '\0') goto joined_r0x00310a24;
  uVar20 = (undefined1)((uint)uVar2 >> 8);
  uVar6 = (undefined1)((uint)uVar2 >> 0x10);
  uVar7 = (undefined1)((uint)uVar2 >> 0x18);
  if (*param_1 < 0x1f) {
    if (uVar17 == 0) {
      lVar15 = *(long *)(param_6 + 8);
      if (*(long *)(lVar15 + lVar10 * 0x20) == 0) {
        puVar13 = (undefined4 *)(lVar15 + lVar10 * 0x20 + 9);
      }
      else {
        puVar13 = *(undefined4 **)(lVar15 + lVar10 * 0x20 + 0x10);
      }
      *(char *)(puVar13 + 2) = (char)uVar2;
      *puVar13 = 0x1000000;
      *(byte *)(puVar13 + 1) = bVar3;
      *(undefined1 *)((long)puVar13 + 5) = uVar7;
      *(undefined1 *)((long)puVar13 + 6) = uVar6;
      *(undefined1 *)((long)puVar13 + 7) = uVar20;
      *plVar18 = *plVar18 + 9;
      local_d0[0] = 0;
      local_80 = 0;
      local_78 = 9;
      local_c0 = FUN_00368650(param_6,&local_80);
      local_c8 = *(long *)(param_6 + 0x20);
    }
    plVar18[2] = plVar18[2] + 1;
    pbVar11 = (byte *)FUN_00368590(param_6,1);
LAB_003109f0:
    *pbVar11 = (byte)*param_1 | 0x20;
  }
  else {
    uVar9 = FUN_00319a80(*param_1 - 0x1f);
    uVar19 = (ulong)uVar9;
    lVar14 = *(long *)(param_6 + 0x20) - lVar14;
    if (uVar17 < lVar14 + uVar19) {
      lVar15 = *(long *)(param_6 + 8);
      if (*(long *)(lVar15 + lVar10 * 0x20) == 0) {
        puVar12 = (undefined1 *)(lVar15 + lVar10 * 0x20 + 9);
      }
      else {
        puVar12 = *(undefined1 **)(lVar15 + lVar10 * 0x20 + 0x10);
      }
      puVar12[2] = (char)lVar14;
      *puVar12 = (char)((ulong)lVar14 >> 0x10);
      puVar12[1] = (char)((ulong)lVar14 >> 8);
      puVar12[3] = 1;
      puVar12[4] = bVar3;
      puVar12[5] = uVar7;
      puVar12[6] = uVar6;
      puVar12[7] = uVar20;
      puVar12[8] = (char)uVar2;
      *plVar18 = *plVar18 + 9;
      local_d0[0] = 0;
      local_80 = 0;
      local_78 = 9;
      local_c0 = FUN_00368650(param_6,&local_80);
      local_c8 = *(long *)(param_6 + 0x20);
    }
    plVar18[2] = plVar18[2] + uVar19;
    pbVar11 = (byte *)FUN_00368590(param_6,uVar19);
    if (uVar9 == 1) goto LAB_003109f0;
    *pbVar11 = 0x3f;
    FUN_00319ac0(*param_1 - 0x1f,pbVar11 + 1,uVar9 - 1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  lVar15 = local_b0;
  plVar1 = local_a8;
joined_r0x00310a24:
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar17 = *(ulong *)*param_2;
    local_b0 = lVar15;
    local_a8 = plVar1;
    if (((uVar17 & 3) == 1) &&
       (uVar19 = *(ulong *)((uVar17 & 0xfffffffffffffffc) + 0x48), uVar19 < 0x3d)) {
      if ((uint)uVar19 < 0x7e) {
        lVar10 = *(long *)(lVar15 + 0x20) - local_c8;
        if (local_a0 < lVar10 + 1U) {
          lVar14 = *(long *)(lVar15 + 8);
          bVar3 = 0;
          if (local_d0[0] != 0) {
            bVar3 = local_97;
          }
          if (*(long *)(lVar14 + local_c0 * 0x20) == 0) {
            puVar12 = (undefined1 *)(lVar14 + local_c0 * 0x20 + 9);
          }
          else {
            puVar12 = *(undefined1 **)(lVar14 + local_c0 * 0x20 + 0x10);
          }
          puVar12[2] = (char)lVar10;
          puVar12[4] = bVar3;
          uVar20 = 9;
          if (local_d0[0] != 0) {
            uVar20 = 1;
          }
          *puVar12 = (char)((ulong)lVar10 >> 0x10);
          puVar12[1] = (char)((ulong)lVar10 >> 8);
          puVar12[3] = uVar20;
          puVar12[8] = (char)local_b8;
          puVar12[5] = (char)((uint)local_b8 >> 0x18);
          puVar12[6] = (char)((uint)local_b8 >> 0x10);
          puVar12[7] = (char)((uint)local_b8 >> 8);
          *plVar1 = *plVar1 + 9;
          local_d0[0] = 0;
          local_80 = 0;
          local_78 = 9;
          local_c0 = FUN_00368650(lVar15,&local_80);
          local_c8 = *(long *)(lVar15 + 0x20);
        }
        plVar1[2] = plVar1[2] + 1;
        pbVar11 = (byte *)FUN_00368590(lVar15,1);
      }
      else {
        iVar8 = (uint)uVar19 - 0x7e;
        uVar9 = FUN_00319a80(iVar8);
        plVar1 = local_a8;
        lVar15 = local_b0;
        uVar17 = (ulong)uVar9;
        lVar10 = *(long *)(local_b0 + 0x20) - local_c8;
        if (local_a0 < lVar10 + uVar17) {
          lVar14 = *(long *)(local_b0 + 8);
          bVar3 = 0;
          if (local_d0[0] != 0) {
            bVar3 = local_97;
          }
          if (*(long *)(lVar14 + local_c0 * 0x20) == 0) {
            puVar12 = (undefined1 *)(lVar14 + local_c0 * 0x20 + 9);
          }
          else {
            puVar12 = *(undefined1 **)(lVar14 + local_c0 * 0x20 + 0x10);
          }
          puVar12[2] = (char)lVar10;
          puVar12[4] = bVar3;
          uVar20 = 9;
          if (local_d0[0] != 0) {
            uVar20 = 1;
          }
          *puVar12 = (char)((ulong)lVar10 >> 0x10);
          puVar12[1] = (char)((ulong)lVar10 >> 8);
          puVar12[3] = uVar20;
          puVar12[8] = (char)local_b8;
          puVar12[5] = (char)((uint)local_b8 >> 0x18);
          puVar12[6] = (char)((uint)local_b8 >> 0x10);
          puVar12[7] = (char)((uint)local_b8 >> 8);
          *local_a8 = *local_a8 + 9;
          local_d0[0] = 0;
          local_80 = 0;
          local_78 = 9;
          local_c0 = FUN_00368650(local_b0,&local_80);
          local_c8 = *(long *)(lVar15 + 0x20);
        }
        plVar1[2] = plVar1[2] + uVar17;
        pbVar11 = (byte *)FUN_00368590(lVar15,uVar17);
        if (uVar9 != 1) {
          *pbVar11 = 0xff;
          FUN_00319ac0(iVar8,pbVar11 + 1,uVar9 - 1);
          goto LAB_00310a3c;
        }
      }
      *pbVar11 = (char)uVar19 + 1U | 0x80;
    }
    else {
      FUN_003111b0(param_1,uVar17,local_d0);
    }
LAB_00310a3c:
    param_2 = param_2 + 1;
    lVar15 = local_b0;
    plVar1 = local_a8;
  }
  puVar16 = *(ulong **)(param_4 + 0x10);
  do {
    local_b0 = lVar15;
    local_a8 = plVar1;
    if (puVar16 == (ulong *)0x0) {
      lVar15 = *(long *)(param_4 + 0xe0);
      if (lVar15 != 0x7fffffffffffffff) {
        if (PTR___tls_init_047cc328 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar10 = tpidr_el0;
        lVar10 = FUN_0035347c(*(undefined8 *)(lVar10 + 0x48));
        FUN_0037a9b0(lVar15 - lVar10,auStack_8c);
        lVar15 = *(long *)PTR_DAT_047cc628;
        FUN_0036762c(&local_80,auStack_8c);
        uVar17 = FUN_0049e770(PTR_FUN_047cba38,0x80);
        if (uVar17 != 0) {
          FUN_00375ccc(uVar17,lVar15 + 0x300,&local_80);
        }
        FUN_003111b0(param_1,uVar17 | 2,local_d0);
        uVar19 = uVar17 & 0xfffffffffffffffc;
        plVar1 = (long *)(uVar19 + 0x40);
        do {
          lVar15 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 + -1 == 0) {
          FUN_00376de0((uint)(uVar17 | 2) & 3,uVar19,*(undefined4 *)(uVar19 + 0x48));
        }
      }
      lVar15 = *(long *)(local_b0 + 8);
      if (*(long *)(lVar15 + local_c0 * 0x20) == 0) {
        puVar12 = (undefined1 *)(lVar15 + local_c0 * 0x20 + 9);
      }
      else {
        puVar12 = *(undefined1 **)(lVar15 + local_c0 * 0x20 + 0x10);
      }
      local_c8 = *(long *)(local_b0 + 0x20) - local_c8;
      puVar12[2] = (char)local_c8;
      *puVar12 = (char)((ulong)local_c8 >> 0x10);
      bVar3 = 4;
      if (local_d0[0] != 0) {
        bVar3 = local_97 | 4;
      }
      uVar20 = 9;
      if (local_d0[0] != 0) {
        uVar20 = 1;
      }
      puVar12[3] = uVar20;
      puVar12[4] = bVar3;
      puVar12[1] = (char)((ulong)local_c8 >> 8);
      puVar12[5] = (char)((uint)local_b8 >> 0x18);
      puVar12[6] = (char)((uint)local_b8 >> 0x10);
      puVar12[7] = (char)((uint)local_b8 >> 8);
      puVar12[8] = (char)local_b8;
      *local_a8 = *local_a8 + 9;
      return;
    }
    uVar17 = *puVar16;
    if (((uVar17 & 3) == 1) &&
       (uVar19 = *(ulong *)((uVar17 & 0xfffffffffffffffc) + 0x48), uVar19 < 0x3d)) {
      if ((uint)uVar19 < 0x7e) {
        lVar10 = *(long *)(lVar15 + 0x20) - local_c8;
        if (local_a0 < lVar10 + 1U) {
          lVar14 = *(long *)(lVar15 + 8);
          bVar3 = 0;
          if (local_d0[0] != 0) {
            bVar3 = local_97;
          }
          if (*(long *)(lVar14 + local_c0 * 0x20) == 0) {
            puVar12 = (undefined1 *)(lVar14 + local_c0 * 0x20 + 9);
          }
          else {
            puVar12 = *(undefined1 **)(lVar14 + local_c0 * 0x20 + 0x10);
          }
          puVar12[2] = (char)lVar10;
          puVar12[4] = bVar3;
          uVar20 = 9;
          if (local_d0[0] != 0) {
            uVar20 = 1;
          }
          *puVar12 = (char)((ulong)lVar10 >> 0x10);
          puVar12[1] = (char)((ulong)lVar10 >> 8);
          puVar12[3] = uVar20;
          puVar12[8] = (char)local_b8;
          puVar12[5] = (char)((uint)local_b8 >> 0x18);
          puVar12[6] = (char)((uint)local_b8 >> 0x10);
          puVar12[7] = (char)((uint)local_b8 >> 8);
          *plVar1 = *plVar1 + 9;
          local_d0[0] = 0;
          local_80 = 0;
          local_78 = 9;
          local_c0 = FUN_00368650(lVar15,&local_80);
          local_c8 = *(long *)(lVar15 + 0x20);
        }
        plVar1[2] = plVar1[2] + 1;
        pbVar11 = (byte *)FUN_00368590(lVar15,1);
      }
      else {
        iVar8 = (uint)uVar19 - 0x7e;
        uVar9 = FUN_00319a80(iVar8);
        plVar1 = local_a8;
        lVar15 = local_b0;
        uVar17 = (ulong)uVar9;
        lVar10 = *(long *)(local_b0 + 0x20) - local_c8;
        if (local_a0 < lVar10 + uVar17) {
          lVar14 = *(long *)(local_b0 + 8);
          bVar3 = 0;
          if (local_d0[0] != 0) {
            bVar3 = local_97;
          }
          if (*(long *)(lVar14 + local_c0 * 0x20) == 0) {
            puVar12 = (undefined1 *)(lVar14 + local_c0 * 0x20 + 9);
          }
          else {
            puVar12 = *(undefined1 **)(lVar14 + local_c0 * 0x20 + 0x10);
          }
          puVar12[2] = (char)lVar10;
          puVar12[4] = bVar3;
          uVar20 = 9;
          if (local_d0[0] != 0) {
            uVar20 = 1;
          }
          *puVar12 = (char)((ulong)lVar10 >> 0x10);
          puVar12[1] = (char)((ulong)lVar10 >> 8);
          puVar12[3] = uVar20;
          puVar12[8] = (char)local_b8;
          puVar12[5] = (char)((uint)local_b8 >> 0x18);
          puVar12[6] = (char)((uint)local_b8 >> 0x10);
          puVar12[7] = (char)((uint)local_b8 >> 8);
          *local_a8 = *local_a8 + 9;
          local_d0[0] = 0;
          local_80 = 0;
          local_78 = 9;
          local_c0 = FUN_00368650(local_b0,&local_80);
          local_c8 = *(long *)(lVar15 + 0x20);
        }
        plVar1[2] = plVar1[2] + uVar17;
        pbVar11 = (byte *)FUN_00368590(lVar15,uVar17);
        if (uVar9 != 1) {
          *pbVar11 = 0xff;
          FUN_00319ac0(iVar8,pbVar11 + 1,uVar9 - 1);
          goto LAB_00310cb8;
        }
      }
      *pbVar11 = (char)uVar19 + 1U | 0x80;
    }
    else {
      FUN_003111b0(param_1,uVar17,local_d0);
    }
LAB_00310cb8:
    puVar16 = (ulong *)puVar16[1];
    lVar15 = local_b0;
    plVar1 = local_a8;
  } while( true );
}


