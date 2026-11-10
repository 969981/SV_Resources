/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c65ac; name: FUN_008c65ac
 */


long FUN_008c65ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  void *__s;
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  
  local_70 = param_6;
  uStack_6c = param_7;
  local_80 = param_2;
  uStack_78 = param_3;
  lVar2 = -0xa0 - ((ulong)*(uint *)(param_5 + 0x10) * 8 + 0xf & 0xffffffff0);
  if (*(uint *)(param_5 + 0x10) == 0) {
    lVar13 = 0;
  }
  else {
    local_a0 = param_4;
    local_68 = (undefined4 *)0x0;
    uVar15 = 0;
    lVar13 = 0;
    uVar14 = 0;
    lVar6 = param_1 + 0x100;
    local_98 = PTR_DAT_047d24e0 + 0x10;
    local_90 = PTR_DAT_047d24c0 + 0x10;
    do {
      puVar16 = *(undefined4 **)(*(long *)(param_5 + 0x18) + uVar15 * 8);
      switch(*puVar16) {
      case 0:
        plVar7 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar7 + 0x14;
        if (plVar7 != (long *)0x0) {
          plVar7[1] = (long)(plVar7 + 1);
          plVar7[2] = (long)(plVar7 + 1);
          plVar7[4] = 0;
          plVar7[5] = (long)puVar16;
          *plVar7 = (long)local_90;
          *(undefined4 *)(plVar7 + 3) = 0x3f800000;
          plVar7[0xb] = 0;
          plVar7[0xc] = 0;
          *(undefined1 *)((long)plVar7 + 0x1c) = 1;
          *(undefined4 *)(plVar7 + 10) = 0;
          plVar7[0xd] = 0;
          plVar7[0xe] = 0;
          plVar7[6] = (long)local_68;
          plVar7[7] = 0;
          plVar7[0x13] = (long)(plVar7 + 0x12);
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[0xf] = 0;
          plVar7[0x10] = lVar6;
          plVar7[0x11] = lVar6;
          plVar7[0x12] = (long)(plVar7 + 0x12);
        }
        local_88 = lVar13;
        piVar5 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        if (piVar5 != (int *)0x0) {
          iVar12 = 0;
          do {
            if (*piVar5 == 0x50434756) {
              if (iVar12 == puVar16[0x26]) {
                lVar13 = FUN_008c65ac(param_1,local_80,uStack_78,plVar7,piVar5,local_70,uStack_6c);
                lVar13 = lVar13 + local_88;
                goto LAB_008c687c;
              }
              iVar12 = iVar12 + 1;
            }
            piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          } while (piVar5 != (int *)0x0);
        }
        lVar13 = local_88;
        goto LAB_008c687c;
      case 1:
      case 2:
      case 3:
      case 5:
        plVar7 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar7 + 0x14;
        if (plVar7 != (long *)0x0) {
          plVar7[2] = (long)(plVar7 + 1);
          puVar3 = PTR_DAT_047d24c0;
          plVar7[4] = 0;
          plVar7[5] = (long)puVar16;
          *plVar7 = (long)(puVar3 + 0x10);
          plVar7[1] = (long)(plVar7 + 1);
          *(undefined4 *)(plVar7 + 3) = 0x3f800000;
          plVar7[0xb] = 0;
          plVar7[0xc] = 0;
          *(undefined1 *)((long)plVar7 + 0x1c) = 1;
          plVar7[0xd] = 0;
          plVar7[0xe] = 0;
          *(undefined4 *)(plVar7 + 10) = 0;
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[0xf] = 0;
          plVar7[0x10] = lVar6;
          plVar7[6] = (long)local_68;
          plVar7[7] = 0;
          plVar7[0x13] = (long)(plVar7 + 0x12);
          plVar7[0x11] = lVar6;
          plVar7[0x12] = (long)(plVar7 + 0x12);
          goto LAB_008c687c;
        }
        break;
      case 4:
        plVar7 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar7 + 0x20;
        if (plVar7 != (long *)0x0) {
          plVar7[0x11] = lVar6;
          plVar7[0x12] = (long)(plVar7 + 0x12);
          plVar7[0x13] = (long)(plVar7 + 0x12);
          *(undefined4 *)(plVar7 + 3) = 0x3f800000;
          *(undefined1 *)((long)plVar7 + 0x1c) = 1;
          *(undefined4 *)(plVar7 + 10) = 0;
          plVar7[1] = (long)(plVar7 + 1);
          plVar7[2] = (long)(plVar7 + 1);
          plVar7[4] = 0;
          plVar7[5] = (long)puVar16;
          plVar7[0xb] = 0;
          plVar7[0xc] = 0;
          plVar7[0xd] = 0;
          plVar7[0xe] = 0;
          plVar7[6] = (long)local_68;
          plVar7[7] = 0;
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[0xf] = 0;
          plVar7[0x10] = lVar6;
          *plVar7 = (long)local_98;
          plVar7[0x14] = *(long *)(puVar16 + 0x2c);
          plVar7[0x15] = 0;
          plVar7[0x16] = 0;
          plVar7[0x17] = 0;
          *(undefined4 *)(plVar7 + 0x18) = puVar16[0x2a];
          *(undefined8 *)((long)plVar7 + 0xc4) = 0x3dcccccd00000000;
          *(undefined8 *)((long)plVar7 + 0xcc) = 0;
          plVar7[0x1f] = 0;
          plVar7[0x1b] = 0;
          plVar7[0x1c] = 0;
          plVar7[0x1d] = 0;
          plVar7[0x1e] = 0;
          uVar1 = *(ushort *)(puVar16 + 0x2b);
          if (uVar1 != 0) {
            *(uint *)((long)plVar7 + 0xc4) = (uint)uVar1;
            plVar7[0x16] = *(long *)(puVar16 + 0x28);
            __s = (void *)(*(long *)(param_1 + 0x110) + 0xfU & 0xfffffffffffffff0);
            *(void **)(param_1 + 0x110) = (void *)((long)__s + (ulong)uVar1 * 0x40);
            if (__s != (void *)0x0) {
              memset(__s,0,(ulong)uVar1 * 0x40);
            }
            plVar7[0x17] = (long)__s;
          }
        }
LAB_008c687c:
        uVar4 = local_80;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,local_80,uStack_78,local_70,uStack_6c);
          lVar10 = (**(code **)(*plVar7 + 0x30))(plVar7,uVar4);
          *(long **)((long)&local_a0 + (long)(int)uVar14 * 8 + lVar2 + 0xa0) = plVar7;
          lVar13 = lVar10 + lVar13;
          uVar14 = uVar14 + 1;
        }
        break;
      case 6:
        local_68 = puVar16;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_5 + 0x10));
    if (0 < (int)uVar14) {
      uVar15 = 0;
      do {
        lVar6 = *(long *)((long)&local_a0 + uVar15 * 8 + lVar2 + 0xa0);
        iVar12 = *(int *)(*(long *)(lVar6 + 0x28) + 0x8c);
        if (iVar12 < 0) {
          plVar7 = (long *)(lVar6 + 8);
          lVar10 = *plVar7;
          *plVar7 = *(long *)(local_a0 + 0x90);
          *(long *)(lVar10 + 8) = local_a0 + 0x90;
          *(long **)(*(long *)(local_a0 + 0x90) + 8) = plVar7;
          *(long *)(local_a0 + 0x90) = lVar10;
          *(long *)(lVar6 + 0x38) = local_a0;
        }
        else if (*(uint *)(param_5 + 0x10) != 0) {
          uVar11 = 0;
          do {
            lVar10 = *(long *)((long)&local_a0 + uVar11 * 8 + lVar2 + 0xa0);
            if (*(int *)(*(long *)(lVar10 + 0x28) + 0x78) == iVar12) {
              plVar7 = (long *)(lVar6 + 8);
              lVar8 = *plVar7;
              plVar9 = (long *)(lVar10 + 0x90);
              *plVar7 = *plVar9;
              *(long **)(lVar8 + 8) = plVar9;
              *(long **)(*plVar9 + 8) = plVar7;
              *plVar9 = lVar8;
              *(long *)(lVar6 + 0x38) = lVar10;
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_5 + 0x10));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar14);
    }
  }
  return lVar13;
}


