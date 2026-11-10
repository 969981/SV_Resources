/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00897864; name: FUN_00897864
 */


void FUN_00897864(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_80;
  long lStack_78;
  float local_70 [2];
  undefined8 *local_68;
  
  lVar2 = FUN_008a6694(*(undefined8 *)(param_1 + 0x18),0x13);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 8) == 0)) {
    puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d2258)(0xe8,4,*(undefined8 *)PTR_DAT_047d2268);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = puVar3 + 2;
      puVar3[3] = puVar3 + 2;
      puVar3[4] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      *(undefined4 *)(puVar3 + 0xe) = 0;
      *(undefined4 *)(puVar3 + 0x19) = 0;
      *(undefined1 *)(puVar3 + 0x1c) = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = puVar3 + 0x10;
      puVar3[0x11] = puVar3 + 0x10;
      puVar3[0x12] = puVar3 + 0x12;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[0x13] = puVar3 + 0x12;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = puVar3 + 0x16;
      puVar3[0x17] = puVar3 + 0x16;
      puVar3[0x18] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
    }
    local_80 = param_3;
    lStack_78 = param_1;
    FUN_00897ac0(&local_80,puVar3,*(undefined8 *)(param_2 + 0x130));
    local_70[0] = 2.66247e-44;
    local_68 = puVar3;
    FUN_008a6700(*(undefined8 *)(param_1 + 0x18),0x13,local_70,0x10);
    if (param_4 != (int *)0x0) {
      puVar8 = (undefined8 *)puVar3[3];
      if (puVar3 + 2 != puVar8) {
        puVar1 = puVar3 + 0x14;
        do {
          if (0 < *param_4) {
            uVar6 = puVar8[3];
            lVar2 = 0;
            lVar7 = 0x1c;
            do {
              uVar4 = FUN_0088fc10(uVar6,*(long *)(param_4 + 2) + lVar7 + -0x1c);
              if ((uVar4 & 1) != 0) {
                if (*(long *)(param_4 + 2) != 0) {
                  fVar10 = *(float *)(*(long *)(param_4 + 4) +
                                     (ulong)*(uint *)(*(long *)(param_4 + 2) + lVar7));
                  lVar2 = FUN_008be3bc(puVar1,uVar6);
                  if (lVar2 != 0) {
                    lVar2 = FUN_008be3bc(puVar1,uVar6);
                    uVar9 = *(undefined4 *)(lVar2 + 0x40);
                    local_70[0] = fVar10;
                    lVar2 = FUN_008be42c(puVar1,uVar6);
                    FUN_008b5210(*(undefined4 *)(lVar2 + 0x30),*(undefined4 *)(lVar2 + 0x34),
                                 local_70);
                    fVar10 = *(float *)(lVar2 + 0x40);
                    if (local_70[0] != fVar10) {
                      *(float *)(lVar2 + 0x40) = local_70[0];
                      FUN_008be484(puVar1,lVar2 + 0x10,lVar2);
                      for (lVar7 = *(long *)(lVar2 + 0x58); lVar2 + 0x50 != lVar7;
                          lVar7 = *(long *)(lVar7 + 8)) {
                        FUN_008be414(fVar10,local_70[0],puVar1,lVar7);
                      }
                      lVar2 = FUN_008be3bc(puVar1,uVar6);
                      plVar5 = (long *)puVar3[0x1b];
                      if (plVar5 != (long *)0x0) {
                        (**(code **)(*plVar5 + 0x20))
                                  (uVar9,*(undefined4 *)(lVar2 + 0x40),plVar5,puVar3[1],uVar6);
                      }
                    }
                  }
                }
                break;
              }
              lVar2 = lVar2 + 1;
              lVar7 = lVar7 + 0x28;
            } while (lVar2 < *param_4);
          }
          puVar8 = (undefined8 *)puVar8[1];
        } while (puVar3 + 2 != puVar8);
      }
    }
  }
  return;
}


