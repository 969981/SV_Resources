/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345f4bc; name: FUN_0345f4bc
 */


/* WARNING: Removing unreachable block (ram,0x0345f590) */
/* WARNING: Removing unreachable block (ram,0x0345f5a0) */

int FUN_0345f4bc(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 local_330 [2];
  long local_328;
  undefined8 local_320;
  undefined8 *local_318;
  int *local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 auStack_2f8 [72];
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined1 auStack_280 [104];
  undefined4 local_218;
  undefined8 local_214;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  ushort local_1f2;
  long local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined1 auStack_1c8 [256];
  undefined1 *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  long local_80;
  undefined4 local_78;
  long *local_70;
  ulong local_68;
  undefined8 local_60;
  uint local_58;
  byte local_54 [4];
  
  local_60 = CONCAT44(4,*(undefined4 *)(param_1 + 0xb8));
  local_58 = local_58 & 0xffffff00;
  lVar7 = *(long *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0xf8);
    local_58 = *(uint *)(param_1 + 0x100);
  }
  else {
    if ((*(byte *)(lVar7 + 0x378) & 0xf) == 2) {
      local_60 = CONCAT44(1,*(undefined4 *)(param_1 + 0xb8));
    }
    FUN_034a30a4(lVar7,&local_60,1);
  }
  plVar8 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,*(undefined4 *)(param_1 + 0x30),
                                *(byte *)(param_1 + 0x36) >> 6 & 1);
  if (plVar8 == (long *)0x0) {
    return 0xf;
  }
  local_98 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined4 *)(param_1 + 0xe8);
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = *(long *)(param_1 + 0x60);
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    *(int *)(local_80 + 0x10) = *(int *)(local_80 + 0x10) + 1;
  }
  local_310 = (int *)0x0;
  local_88 = (long *)(param_1 + 0x50);
  memcpy(auStack_2f8,(void *)(param_1 + 0x68),0x48);
  local_298 = CONCAT62(local_298._2_6_,0xff00);
  local_2a0 = 0;
  local_288 = 0;
  local_200 = 0;
  uVar1 = local_1f2 & 0xfc00;
  local_1f8 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  memset(auStack_280,0,0x68);
  local_1f4 = 0;
  local_214 = 0;
  local_20c = 0;
  local_218 = 0x3f800000;
  local_1f0 = 0;
  local_204 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_a4 = *(undefined1 *)(param_1 + 0xcc);
  local_a8 = *(undefined4 *)(param_1 + 200);
  local_330[0] = *(undefined4 *)(param_1 + 0xd0);
  local_328 = *(long *)(param_1 + 0xe0);
  local_320 = *(undefined8 *)(param_2 + 0x40);
  local_308 = *(undefined8 *)(param_2 + 0x24);
  local_2fc = *(undefined4 *)(param_2 + 0x30);
  local_300 = *(undefined4 *)(param_2 + 0x2c);
  local_310 = *(int **)(param_2 + 0x1c);
  if (local_310 != (int *)0x0) {
    *local_310 = *local_310 + 1;
  }
  local_2b0 = *(undefined4 *)(param_1 + 0xbc);
  uStack_2ac = *(undefined4 *)(param_2 + 0x14);
  local_2a0 = CONCAT44(local_2a0._4_4_,*(undefined4 *)(param_1 + 0xc0));
  local_298 = *(undefined8 *)(param_1 + 0x104);
  local_290 = *(undefined4 *)(param_1 + 0x10c);
  local_288 = *(undefined8 *)(param_1 + 0x110);
  local_2a8 = &local_98;
  local_318 = &local_60;
  local_a0 = *(byte *)(*(long *)(param_2 + 8) + 0x36) >> 5 & 4 |
             local_a0 & 0xf0 | 1 | (*(byte *)(param_1 + 0xc5) & 0x7d) << 1;
  bVar5 = (char)local_298 == -0x70;
  local_1f2 = uVar1;
  if ((bVar5) &&
     (local_298._5_1_ = (char)((ulong)local_298 >> 0x28), bVar5 = local_298._5_1_ != '\0', bVar5)) {
    local_54[0] = 1;
    if (local_328 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(local_328 + 0x10);
    }
    iVar6 = FUN_034a7e5c(plVar8,&local_298,uVar9,local_54,local_320,local_2fc);
    if (iVar6 != 1) goto LAB_0345f7d0;
    local_a0 = local_a0 & 0xfe | local_54[0];
  }
  iVar6 = FUN_034a9828(plVar8,local_330);
  if (iVar6 == 3) {
    iVar6 = 1;
  }
  else if (iVar6 == 1) {
    iVar6 = (**(code **)(*plVar8 + 0x240))(plVar8,local_330);
  }
LAB_0345f7d0:
  *(int *)PTR_DAT_047e6fe0 = *(int *)PTR_DAT_047e6fe0 + 1;
  lVar7 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((lVar7 != 0) &&
     (iVar2 = *(int *)(lVar7 + 0x10) + -1, *(int *)(lVar7 + 0x10) = iVar2, iVar2 == 0)) {
    FUN_034783fc(lVar7);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar7);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_034b2c38(*(undefined8 *)PTR_DAT_047e7040);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x30))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  (**(code **)(*plVar8 + 0x30))(plVar8);
  if (local_1f0 != 0) {
    local_1e8 = local_1e8 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_1f0 = 0;
    local_1e8 = local_1e8 & 0xffffffff;
  }
  if (local_c8 != (undefined1 *)0x0) {
    local_c0 = local_c0 & 0xffffffff00000000;
    if (auStack_1c8 != local_c8) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    local_c8 = (undefined1 *)0x0;
    local_c0 = local_c0 & 0xffffffff;
  }
  piVar4 = local_310;
  if (local_310 != (int *)0x0) {
    iVar2 = *local_310;
    *local_310 = iVar2 + -1;
    puVar3 = PTR_DAT_047e2fd0;
    if (iVar2 + -1 == 0) {
      uVar10 = local_310[1];
      if (uVar10 != 0) {
        uVar12 = 0;
        plVar8 = (long *)(local_310 + 4);
        do {
          if (*plVar8 != 0) {
            (**(code **)(puVar3 + 0x30))(0);
            uVar10 = piVar4[1];
          }
          uVar12 = uVar12 + 1;
          plVar8 = plVar8 + 4;
        } while (uVar12 < uVar10);
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar4);
    }
  }
  puVar3 = PTR_DAT_047e2fd0;
  plVar8 = local_70;
  if ((uint)local_68 != 0) {
    plVar13 = local_70;
    uVar10 = (uint)local_68;
    do {
      *(int *)(*plVar13 + 0x84) = *(int *)(*plVar13 + 0x84) + -1;
      puVar11 = (undefined8 *)*plVar13;
      iVar2 = *(int *)((long)puVar11 + 0x74) + -1;
      *(int *)((long)puVar11 + 0x74) = iVar2;
      if (iVar2 == 0) {
        (**(code **)*puVar11)(puVar11);
        (**(code **)(puVar3 + 0x30))(0,puVar11);
        plVar8 = local_70;
        uVar10 = (uint)local_68;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar8 + uVar10);
  }
  uVar12 = local_68 >> 0x20;
  local_68 = uVar12 << 0x20;
  if (plVar8 != (long *)0x0) {
    local_68 = uVar12 << 0x20;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_70 = (long *)0x0;
    local_68 = local_68 & 0xffffffff;
  }
  lVar7 = local_80;
  if ((local_80 != 0) &&
     (iVar2 = *(int *)(local_80 + 0x10) + -1, *(int *)(local_80 + 0x10) = iVar2, iVar2 == 0)) {
    FUN_034783fc(local_80);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar7);
  }
  return iVar6;
}


