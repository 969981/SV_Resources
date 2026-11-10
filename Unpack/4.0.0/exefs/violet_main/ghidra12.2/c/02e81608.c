/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e81608; name: FUN_02e81608
 */


void FUN_02e81608(undefined8 *param_1,uint *param_2,int param_3,undefined8 *param_4)

{
  float fVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined5 uStack_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  
  if (0 < param_3) {
    auVar11 = NEON_fmov(0x3f800000,4);
    iVar9 = 0;
    do {
      switch(iVar9) {
      case 0:
        uVar5 = *param_2;
        break;
      case 1:
        uVar5 = param_2[1];
        break;
      case 2:
        uVar5 = param_2[2];
        break;
      case 3:
        uVar5 = param_2[3];
        break;
      default:
        uVar5 = 0;
      }
      if (*(char *)(param_1 + 0x11) == '\0') {
        lVar7 = param_1[1];
        lVar8 = lVar7 + (ulong)uVar5 * 0xc0;
        if ((~*(uint *)(lVar8 + 0x50) & 0xffffff) != 0) {
          lVar4 = param_1[2];
          lVar6 = *(long *)(lVar4 + 0x48);
          if (lVar6 == 0) {
            if (*(long *)(lVar4 + 8) != 0) {
LAB_02e81724:
              uVar3 = (**(code **)(**(long **)(lVar4 + 8) + 0x30))
                                (*(long **)(lVar4 + 8),5,lVar4 + 0x10,lVar8);
              if ((uVar3 & 1) == 0) goto LAB_02e817e8;
              lVar4 = param_1[2];
            }
LAB_02e81748:
            lVar7 = lVar7 + (ulong)uVar5 * 0xc0;
            local_d8 = *(undefined8 *)(lVar7 + 0x78);
            local_80[0] = *(undefined2 *)(lVar7 + 0x8a);
            local_7c = *(undefined4 *)(lVar7 + 0x8c);
            local_78 = *(undefined8 *)(lVar7 + 0x98);
            local_c8 = 0xffffffff;
            uStack_d0 = 0;
            uStack_b4 = 0;
            local_c4 = 0;
            uStack_b8 = 0;
            local_ac = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_e0 = lVar8;
            local_a0 = auVar11._0_8_;
            uStack_98 = auVar11._8_8_;
            uStack_c0 = lVar8;
            FUN_00e5cfa4(*param_1,lVar4,param_1 + 4,local_d8,local_80,&local_e0,param_1[0x10]);
            uVar10 = NEON_fmax(*(undefined8 *)(param_1[0x10] + 0x10),0,4);
            fVar1 = (float)((ulong)uVar10 >> 0x20);
            *param_4 = CONCAT44(fVar1 * fVar1,(float)uVar10 * (float)uVar10);
            *(bool *)(param_1 + 0x11) = *(char *)(param_1[0x10] + 0x18) != '\0';
          }
          else if (*(uint *)(lVar8 + 0x50) != *(uint *)(lVar6 + 0x50)) {
            plVar2 = *(long **)(lVar4 + 8);
            if (plVar2 == (long *)0x0) goto LAB_02e81748;
            uVar3 = (**(code **)(*plVar2 + 0x38))
                              (plVar2,5,*(undefined8 *)(lVar6 + 0xb0),
                               *(undefined8 *)(lVar7 + (ulong)uVar5 * 0xc0 + 0xb0));
            if ((uVar3 & 1) != 0) {
              lVar4 = param_1[2];
              goto LAB_02e81724;
            }
          }
        }
      }
LAB_02e817e8:
      iVar9 = iVar9 + 1;
    } while (param_3 != iVar9);
  }
  return;
}


