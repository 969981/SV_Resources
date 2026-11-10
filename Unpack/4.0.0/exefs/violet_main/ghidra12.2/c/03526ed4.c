/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03526ed4; name: FUN_03526ed4
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_03526ed4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  undefined **local_98;
  uint local_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x30) == 0) {
      *(long *)(lVar7 + 0x30) = param_1;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      *(long *)(param_1 + 8) = *(long *)(lVar7 + 0x30);
      *(long *)(lVar7 + 0x30) = param_1;
    }
    *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
      goto LAB_03526f5c;
    }
  }
  uVar5 = FUN_035182ec(param_1,param_3,param_2,param_4 & 1);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
LAB_03526f5c:
  puVar6 = *(undefined8 **)(param_1 + 0x80);
  if (puVar6 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x88) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x88) * 0x18;
      do {
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + -0x18;
        puVar6 = puVar6 + 3;
      } while (lVar7 != 0);
      puVar6 = *(undefined8 **)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar6);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  uVar9 = *(uint *)(*(long *)(param_1 + 0x78) + 0x158);
  uVar10 = (ulong)uVar9;
  if (uVar9 == 0) {
LAB_03527178:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar5 = FUN_0352729c(param_1,1);
      if ((int)uVar5 == 1) {
        local_98 = (undefined **)0x0;
        local_90 = local_90 & 0xffffff00;
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
        if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
          uVar3 = FUN_03527670(param_1);
          local_68 = (long *)FUN_03527714(param_1,uVar3);
          if ((local_68 != (long *)0x0) &&
             (FUN_035279f0(param_1,uVar3,&local_98,&local_68), local_68 != (long *)0x0)) {
            (**(code **)(*local_68 + 0x80))();
          }
        }
        uVar5 = 1;
      }
    }
    else {
      uVar5 = FUN_0352729c(param_1,0);
    }
  }
  else {
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar10 * 0x18);
    *(long *)(param_1 + 0x80) = lVar7;
    if (lVar7 != 0) {
      lVar12 = 0;
      *(uint *)(param_1 + 0x8c) = uVar9;
      lVar7 = 0;
      lVar13 = uVar10 - 1;
      do {
        local_98 = &PTR_FUN_047c88a0;
        uStack_8c = 0xffffffff;
        local_88 = 0;
        uVar2 = *(uint *)(param_1 + 0x88);
        uVar9 = (uint)uVar10;
        if (uVar2 < uVar9) {
LAB_03527068:
          if (uVar2 < uVar9) {
            uVar9 = *(uint *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = uVar9 + 1;
            if (*(long *)(param_1 + 0x80) != 0) {
              puVar6 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar9 * 0x18);
              *puVar6 = &PTR_FUN_047c88a0;
              *(undefined4 *)((long)puVar6 + 0xc) = 0xffffffff;
              puVar6[2] = 0;
              puVar6[1] = CONCAT44(uStack_8c,local_90);
              puVar6[2] = local_88;
            }
          }
        }
        else {
          iVar1 = uVar9 + (uVar9 >> 1);
          if (uVar9 == 0) {
            iVar1 = 1;
          }
          uVar9 = iVar1 + uVar9;
          lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                            (0,*(undefined8 *)(param_1 + 0x80),(ulong)uVar9 * 0x18);
          if (lVar4 != 0) {
            *(long *)(param_1 + 0x80) = lVar4;
            *(uint *)(param_1 + 0x8c) = uVar9;
            goto LAB_03527068;
          }
        }
        local_98 = &PTR_FUN_047c88a0;
        FUN_034e4a84(*(undefined8 *)PTR_DAT_047e7098,&local_98);
        FUN_034dcf30(*(undefined8 *)PTR_DAT_047e7050,&local_98);
        lVar4 = *(long *)(param_1 + 0x80) + lVar12;
        *(undefined4 *)(lVar4 + 8) = 0;
        *(int *)(lVar4 + 0xc) = (int)lVar7;
        *(long *)(lVar4 + 0x10) = param_1;
        lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x178);
        if (lVar8 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(lVar8 + lVar7 * 4);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x180);
        if (lVar8 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined1 *)(lVar8 + lVar7);
        }
        uVar5 = FUN_034de99c(lVar4,uVar3,uVar11);
        if ((int)uVar5 != 1) {
          return uVar5;
        }
        local_98 = *(undefined ***)(*(long *)(param_1 + 0x60) + 0x30);
        local_90 = *(uint *)(*(long *)(param_1 + 0x60) + 0x2c);
        local_80 = 0xff;
        local_78 = 0xff;
        local_70 = 0;
        local_88 = local_88 & 0xffffffff00000000;
        uVar3 = FUN_034deb98(lVar4,&local_98,uVar3,uVar11);
        *(undefined4 *)(lVar4 + 8) = uVar3;
        if (lVar13 == lVar7) goto LAB_03527178;
        uVar10 = (ulong)*(uint *)(param_1 + 0x8c);
        lVar7 = lVar7 + 1;
        lVar12 = lVar12 + 0x18;
      } while( true );
    }
    uVar5 = 0x34;
  }
  return uVar5;
}


