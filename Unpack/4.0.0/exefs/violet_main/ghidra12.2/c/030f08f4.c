/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f08f4; name: FUN_030f08f4
 */


void FUN_030f08f4(long param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint local_58 [2];
  uint *local_50;
  undefined8 local_48;
  
  local_50 = (uint *)0x0;
  local_48 = -0x8000000000000000;
  if (*(float *)(param_1 + 0xa4) == 0.0) {
    FUN_030a74dc(*(undefined8 *)(param_1 + 0x18),&local_50);
  }
  else {
    FUN_030a75b4(*(undefined8 *)(param_1 + 0x18),param_1 + 0x30,&local_50);
  }
  if ((int)local_48 != 0) {
    lVar7 = (long)(int)local_48 << 2;
    puVar5 = local_50;
    do {
      local_58[0] = *puVar5 & 0x3fffff;
      FUN_030d9db8(*(long *)(*(long *)(param_1 + 0x20) + ((ulong)(*puVar5 >> 0x13) & 0x1ff8)) + 0xb8
                   ,local_58);
      lVar7 = lVar7 + -4;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar7 + 0x40);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    while( true ) {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x100);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x40) != 0)) {
        plVar6 = *(long **)(lVar7 + 0x38);
        lVar9 = (long)*(int *)(lVar7 + 0x40) * 0x18;
        bVar2 = false;
        lVar7 = lVar9;
        plVar3 = plVar6;
        do {
          lVar4 = *plVar3;
          if (((lVar4 != 0) && (*(float *)(lVar4 + 0x1c) + 0.001 < *(float *)(lVar4 + 0x18))) &&
             ((*(int *)(lVar4 + 0x40) - *(int *)(lVar4 + 0x48)) * 3 < *(int *)(lVar4 + 0x40) * 2)) {
            bVar2 = true;
          }
          plVar3 = plVar3 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
        if (bVar2) {
          do {
            lVar7 = *plVar6;
            if (lVar7 != 0) {
              if ((char)plVar6[2] != '\x01') {
                lVar7 = FUN_03065a74(plVar6);
              }
              if ((*(float *)(lVar7 + 0x1c) + 0.001 < *(float *)(lVar7 + 0x18)) &&
                 ((*(int *)(lVar7 + 0x40) - *(int *)(lVar7 + 0x48)) * 3 < *(int *)(lVar7 + 0x40) * 2
                 )) {
                FUN_03077918();
              }
            }
            plVar6 = plVar6 + 3;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
        }
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar1) break;
      lVar7 = *(long *)(param_1 + 0x18);
    }
  }
  lVar7 = local_48;
  uVar8 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_50 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_50,uVar8 << 2);
  }
  return;
}


