/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03124af8; name: FUN_03124af8
 */


void FUN_03124af8(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_120;
  undefined4 local_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  long local_c8;
  ulong local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  ulong local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  local_70 = (long *)0x0;
  local_68 = -0x8000000000000000;
  FUN_030d1538(*(undefined8 *)(param_1 + 0x250),0xffffffff,*(undefined4 *)(param_1 + 0x25c),
               *(undefined4 *)(param_1 + 0x264),&local_70);
  iVar5 = *(int *)(param_1 + 0x260);
  local_90 = 0;
  local_88 = 0x8000000000000000;
  if (iVar5 < 0) {
    iVar5 = 0x7fffffff;
  }
  local_80 = 0;
  local_78 = 0x8000000000000000;
  local_c8 = 0;
  local_c0 = 0x8000000000000000;
  local_b8 = 0;
  local_b0 = 0x8000000000000000;
  local_100 = 0xffffffffffffffff;
  local_f8 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  if (0 < (int)local_68) {
    if (*(ulong *)(param_1 + 0x80) < 4) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        switch(*(undefined4 *)((long)local_70 + lVar8 + 8)) {
        case 0:
          lVar7 = *(long *)((long)local_70 + lVar8);
          FUN_030d0594(lVar7,*(undefined8 *)(param_1 + 0x130),iVar5,auStack_a8,auStack_e0,0,
                       &local_100);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x20) + 0x40);
          goto LAB_03124d58;
        case 1:
          FUN_030cf334(*(undefined8 *)((long)local_70 + lVar8),*(undefined8 *)(param_1 + 0x130),
                       iVar5,auStack_a8,auStack_e0,0,&local_100);
          break;
        case 2:
          lVar7 = *(long *)((long)local_70 + lVar8);
          FUN_030d0900(lVar7,*(undefined8 *)(param_1 + 0x130),iVar5,auStack_a8);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x20) + 0x50);
LAB_03124d58:
          iVar5 = iVar5 - iVar2;
          break;
        case 3:
          FUN_030cf638(*(undefined8 *)((long)local_70 + lVar8),*(undefined8 *)(param_1 + 0x130),
                       iVar5,auStack_a8);
          break;
        default:
          goto switchD_03124bc4_default;
        }
        if (iVar5 < 1) break;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < (int)local_68);
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      do {
        switch(*(undefined4 *)((long)local_70 + lVar8 + 8)) {
        case 0:
          lVar7 = *(long *)((long)local_70 + lVar8);
          FUN_030d0594(lVar7,*(undefined8 *)(param_1 + 0x130),iVar5,auStack_a8,auStack_e0,&local_f0,
                       &local_100);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x20) + 0x40);
          goto LAB_03124c3c;
        case 1:
          FUN_030cf334(*(undefined8 *)((long)local_70 + lVar8),*(undefined8 *)(param_1 + 0x130),
                       iVar5,auStack_a8,auStack_e0,&local_f0,&local_100);
          break;
        case 2:
          lVar7 = *(long *)((long)local_70 + lVar8);
          FUN_030d0900(lVar7,*(undefined8 *)(param_1 + 0x130),iVar5,auStack_a8);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x20) + 0x50);
LAB_03124c3c:
          iVar5 = iVar5 - iVar2;
          break;
        case 3:
          FUN_030cf638(*(undefined8 *)((long)local_70 + lVar8),*(undefined8 *)(param_1 + 0x130),
                       iVar5,auStack_a8);
          break;
        default:
switchD_03124bc4_default:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (iVar5 < 1) break;
        if ((int)local_e8 != 0) {
          local_120 = local_100;
          local_118 = local_f8;
          lStack_108 = local_f0 + (long)(int)local_e8 * 4;
          local_110 = local_f0;
          FUN_0311c970((ulong *)(param_1 + 0x80),param_1,&local_120);
          local_e8 = local_e8 & 0xffffffff00000000;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < (int)local_68);
    }
  }
  FUN_030d120c(*(undefined8 *)(param_1 + 0x250),0xffffffff);
  if ((int)local_68 != 0) {
    lVar9 = (long)(int)local_68 << 4;
    plVar6 = local_70;
    do {
      switch((int)plVar6[1]) {
      case 0:
        FUN_0311c818(param_1 + 0x30,param_1,*plVar6);
        break;
      case 1:
      case 3:
        plVar1 = (long *)*plVar6;
        if ((char)plVar1[4] == '\x02') {
          (**(code **)(*plVar1 + 0x28))(plVar1,plVar1[5],plVar1[6]);
        }
        break;
      case 2:
        FUN_0311c8c4(param_1 + 0x38,param_1,*plVar6);
        break;
      default:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      plVar6 = plVar6 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  uVar4 = local_e8;
  uVar3 = (ulong)local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_f0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f0,uVar3 << 2);
  }
  uVar4 = local_b0;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_b8 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar4 = local_c0;
  local_b8 = 0;
  local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_c8 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar4 = local_78;
  local_78 = local_78 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar4 = local_88;
  local_80 = 0;
  local_78 = CONCAT44(0x80000000,(undefined4)local_78);
  local_88 = local_88 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_90 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  lVar9 = local_68;
  uVar4 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_70 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar4 << 4);
  }
  return;
}


