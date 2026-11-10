/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01243af4; name: FUN_01243af4
 */


void FUN_01243af4(long param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  long *plVar13;
  long alStack_188 [20];
  byte local_e2;
  byte local_e0;
  undefined1 auStack_d8 [16];
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98;
  undefined2 local_96;
  undefined1 local_94;
  undefined1 local_93;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  FUN_01243d84(alStack_188);
  FUN_01243db8(param_1,alStack_188);
  FUN_01243d7c(alStack_188);
  uVar10 = (ulong)local_e0;
  if (local_e0 < local_e2) {
    local_e0 = local_e0 + 1;
    plVar13 = (long *)alStack_188[uVar10];
    while (plVar13 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      if (((*(byte *)(lVar11 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar11 + 0x30) < 2)) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x290);
        uVar3 = (**(code **)(*plVar13 + 0x98))(plVar13);
        piVar6 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar11 + 8) + 0x50),uVar3);
        if (((piVar6 != (int *)0x0) && (*piVar6 < 5 && *piVar6 != 0)) ||
           (((bVar1 = (**(code **)(*plVar13 + 0x460))(plVar13), bVar1 < 0xdc ||
             (uVar2 = (**(code **)(*plVar13 + 0x230))(plVar13), uVar2 == 0)) ||
            (iVar4 = FUN_0124d360(param_1,0x14), iVar4 == 0)))) goto LAB_01243bf0;
        uVar5 = (**(code **)(*plVar13 + 0x98))(plVar13);
        puVar7 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8)
                                       + 0x50),uVar5);
        if (puVar7 == (uint *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar7 & 0xff;
          if (4 < (int)*puVar7) {
            uVar9 = 0;
          }
        }
        uStack_c4 = (uint)uVar2;
        local_96 = 0;
        local_94 = 0;
        local_bc = 0;
        local_b4 = 0;
        local_ac = 0;
        local_a4 = 0;
        local_9c = 0;
        local_70 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_98 = 1;
        local_93 = 1;
        uVar12 = 0x2d0;
        switch(uStack_c4) {
        case 1:
          uVar12 = 0x2d3;
          break;
        case 2:
          break;
        case 3:
          uVar12 = 0x2d4;
          break;
        case 4:
          uVar12 = 0x2d2;
          break;
        case 5:
          uVar12 = 0x2d1;
          break;
        default:
          goto switchD_01243d00_default;
        }
        local_90 = CONCAT44(uVar5,CONCAT22(0x101,uVar12));
        uStack_88 = (ulong)uVar9;
switchD_01243d00_default:
        local_c8 = uVar5;
        local_c0 = uVar5;
        FUN_018cdf14(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xae0),auStack_d8,&local_c8);
        uVar8 = FUN_01243584(param_1);
        uVar3 = (**(code **)(*plVar13 + 0x98))(plVar13);
        FUN_01932fa4(uVar8,uVar3,0);
      }
LAB_01243bf0:
      uVar10 = (ulong)local_e0;
      if (local_e2 <= local_e0) {
        return;
      }
      local_e0 = local_e0 + 1;
      plVar13 = (long *)alStack_188[uVar10];
    }
  }
  return;
}


