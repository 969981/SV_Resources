/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008970d4; name: FUN_008970d4
 */


long FUN_008970d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int *param_5,long param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  *(undefined4 *)(param_6 + 0x40) = 0;
  *(undefined2 *)(param_6 + 0x44) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 200) = 0;
  if (param_5 == (int *)0x0) {
    if ((param_1[3] == 0) && (*(char *)(param_6 + 0xd0) != '\0')) {
      local_b8 = (char *)param_4[1];
      puStack_b0 = (undefined8 *)param_4[2];
      local_a8 = param_4[3];
      uStack_a0 = param_4[4];
      local_98 = param_4[5];
      uStack_90 = param_4[6];
      uStack_78 = param_4[9];
      local_88 = param_4[7];
      local_80 = param_4[8];
      local_70 = *(undefined4 *)(param_4 + 10);
      local_c0._4_4_ = (undefined4)((ulong)*param_4 >> 0x20);
      local_c0 = CONCAT44(local_c0._4_4_,0x31747270);
      uStack_6c = 0;
      local_68 = 0x3f8000003f800000;
      lVar6 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,0x31747270,&local_c0,0,param_6)
      ;
      *(long **)(lVar6 + 0xe8) = param_1;
      goto joined_r0x00897208;
    }
LAB_00897250:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (param_1[3] != 0) {
      if (0 < *param_5) {
        lVar8 = 0;
        lVar6 = 0;
        do {
          uVar2 = FUN_0088fc10((long)param_4 + 0xc,*(long *)(param_5 + 2) + lVar8);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_5 + 2) != 0) {
              lVar8 = *(long *)(param_5 + 2) + lVar8;
              if (*(uint *)(lVar8 + 0x1c) == 0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                puVar7 = (undefined8 *)(*(long *)(param_5 + 4) + (ulong)*(uint *)(lVar8 + 0x1c));
              }
              *(ushort *)(param_6 + 0x40) = (ushort)*(byte *)(lVar8 + 0x18);
              *(ushort *)(param_6 + 0x42) = (ushort)*(byte *)(lVar8 + 0x19);
              *(ushort *)(param_6 + 0x44) = (ushort)*(byte *)(lVar8 + 0x1a);
              if (*(uint *)(lVar8 + 0x24) == 0) {
                *(undefined8 *)(param_6 + 0x48) = 0;
                uVar1 = *(uint *)(lVar8 + 0x20);
              }
              else {
                *(ulong *)(param_6 + 0x48) = *(long *)(param_5 + 4) + (ulong)*(uint *)(lVar8 + 0x24)
                ;
                uVar1 = *(uint *)(lVar8 + 0x20);
              }
              if (uVar1 != 0) {
                if (uVar1 == 1) {
LAB_00897450:
                  lVar6 = 0;
                }
                else {
                  if (*(char *)(lVar8 + 0x1b) == '\x01') goto LAB_00897464;
                  if (*(char *)(lVar8 + 0x1b) == '\x02') goto LAB_00897450;
                  lVar6 = *(long *)(param_5 + 4) + (ulong)uVar1;
                }
                *(long *)(param_6 + 0xc0) = lVar6;
              }
LAB_00897464:
              if (*(char *)(lVar8 + 0x1b) != '\0') {
                *(ulong *)(param_6 + 200) = *(long *)(param_5 + 4) + (ulong)*(uint *)(lVar8 + 0x20);
              }
              goto LAB_00897254;
            }
            break;
          }
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + 0x28;
        } while (lVar6 < *param_5);
      }
      goto LAB_00897250;
    }
    lVar6 = *(long *)(param_5 + 6);
joined_r0x00897208:
    puVar7 = (undefined8 *)0x0;
    if (lVar6 != 0) goto LAB_00897284;
  }
LAB_00897254:
  lVar6 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_8,param_4,puVar7,param_6);
  if (lVar6 == 0) {
    return 0;
  }
LAB_00897284:
  if (param_1[3] == 0) {
    param_1[3] = lVar6;
  }
  if (*(long *)(param_6 + 0x98) != 0) {
    FUN_010ec1c4(*(long *)(param_6 + 0x98),lVar6);
  }
  if (param_8 == 0x31747270) {
    puStack_b0 = param_4;
    if (puVar7 != (undefined8 *)0x0) {
      puStack_b0 = puVar7;
    }
    local_b8 = (char *)(puStack_b0 + 0xc);
    uStack_a0 = param_7;
    if (puVar7 != (undefined8 *)0x0) {
      uStack_a0 = *(undefined8 *)(param_6 + 0x38);
    }
    uVar1 = *(uint *)((long)puStack_b0 + 0x54);
    uVar2 = (ulong)uVar1;
    local_c0 = CONCAT44(local_c0._4_4_,uVar1);
    local_98 = CONCAT44((*(float *)(lVar6 + 0x54) / *(float *)(param_4 + 10)) *
                        *(float *)((long)puStack_b0 + 0x5c),
                        (*(float *)(lVar6 + 0x50) / *(float *)((long)param_4 + 0x4c)) *
                        *(float *)(puStack_b0 + 0xb));
    if ((0 < (int)uVar1) && (pcVar5 = local_b8, *(int *)(param_6 + 0x94) < 0)) {
      do {
        if (*pcVar5 != '\0') {
          *(undefined4 *)(param_6 + 0x94) = *(undefined4 *)(param_6 + 0x90);
          break;
        }
        uVar2 = uVar2 - 1;
        pcVar5 = pcVar5 + 0x28;
      } while (uVar2 != 0);
    }
    *(long *)(param_6 + (long)*(int *)(param_6 + 0x90) * 8 + 0x50) = lVar6 + 0xb0;
    *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + 1;
    local_a8 = lVar6;
    lVar8 = (**(code **)(*param_1 + 0xa0))
                      (param_1,param_2,param_3,
                       puStack_b0 + (ulong)*(uint *)((long)puStack_b0 + 0x54) * 5 + 0xc,&local_c0,
                       param_6);
    if (lVar8 != 0) {
      plVar3 = (long *)(lVar6 + 0xd8);
      lVar4 = *plVar3;
      *(long *)(lVar6 + 0xe8) = lVar8;
      param_1 = param_1 + 9;
      *plVar3 = *param_1;
      *(long **)(lVar4 + 8) = param_1;
      *(long **)(*param_1 + 8) = plVar3;
      *param_1 = lVar4;
    }
    *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + -1;
    if (*(int *)(param_6 + 0x94) == 0) {
      *(undefined4 *)(param_6 + 0x94) = 0xffffffff;
    }
  }
  return lVar6;
}


