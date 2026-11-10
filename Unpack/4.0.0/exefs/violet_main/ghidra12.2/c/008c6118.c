/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c6118; name: FUN_008c6118
 */


void FUN_008c6118(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 local_68;
  
  uVar9 = (ulong)(*(uint *)(param_3 + 0xd0) & ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU)
                 );
  FUN_008b5350(param_2,param_4,*(undefined8 *)(param_3 + 0x40),
               *(undefined4 *)(param_3 + uVar9 * 0x18 + 0x58));
  puVar1 = (undefined8 *)FUN_00893db0(*(undefined8 *)(param_2 + 0xb8),0);
  local_68 = *puVar1;
  uVar7 = (ulong)*(uint *)(param_3 + 0xd0);
  if (0 < (int)*(uint *)(param_3 + 0xd0)) {
    puVar1 = (undefined8 *)(param_3 + 0xb8);
    puVar10 = (undefined4 *)(param_3 + uVar9 * 0x18 + 100);
    do {
      FUN_00c5afc0(param_4,*puVar10,4,*puVar1,&local_68);
      uVar7 = uVar7 - 1;
      puVar1 = puVar1 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (((*(short *)(*(long *)(param_1 + 0xa0) + uVar7 * 0xa0) != 0) &&
          (*(short *)(*(long *)(param_1 + 0xa0) + uVar7 * 0xa0 + 0x10) != 0)) &&
         (0.0 < *(float *)(param_1 + 0x18))) {
        lVar5 = *(long *)(param_1 + 0xa8);
        uVar6 = *(uint *)(lVar5 + uVar7 * 0x30 + 0x24);
        if (uVar6 != 0) {
          uVar2 = 0;
          do {
            lVar5 = *(long *)(lVar5 + uVar7 * 0x30 + 0x28);
            piVar8 = (int *)(lVar5 + (long)(int)(uVar6 + ~uVar2) * 0x18);
            if (*(code **)(param_3 + 0x48) == (code *)0x0) {
              FUN_008f0fd0(0x3f800000,param_4,*(undefined8 *)(param_2 + 0x150),0,2,0);
              FUN_00892e3c(param_2,param_4);
              iVar3 = *piVar8;
              if (iVar3 == 1) goto LAB_008c6234;
LAB_008c62e4:
              if (iVar3 == 0) {
                lVar4 = *(long *)(param_1 + 0xa8);
                if (*(int *)(lVar4 + uVar7 * 0x30 + 0x24) != 0) {
                  lVar11 = 0;
                  uVar9 = 1;
                  do {
                    if (*(long *)(*(long *)(lVar4 + uVar7 * 0x30 + 0x28) + lVar11 + 0x10) ==
                        *(long *)(lVar5 + (long)(int)(uVar6 + ~uVar2) * 0x18 + 0x10)) {
                      FUN_008c5d90(param_1,param_2,param_3,param_4,
                                   *(undefined8 *)(lVar4 + uVar7 * 0x30));
                      lVar4 = *(long *)(param_1 + 0xa8);
                    }
                    do {
                      if (*(uint *)(lVar4 + uVar7 * 0x30 + 0x24) <= uVar9) goto LAB_008c638c;
                      lVar11 = lVar11 + 0x18;
                      uVar9 = uVar9 + 1;
                    } while (*piVar8 != 0);
                  } while( true );
                }
LAB_008c638c:
                FUN_008c5bd0(param_1,param_2,param_3,param_4,*(undefined8 *)(lVar4 + uVar7 * 0x30),
                             piVar8);
              }
            }
            else {
              (**(code **)(param_3 + 0x48))(param_2,param_4,*(undefined8 *)(param_3 + 0x50));
              iVar3 = *piVar8;
              if (iVar3 != 1) goto LAB_008c62e4;
LAB_008c6234:
              FUN_008c5f50(param_1,param_2,param_3,param_4,
                           *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar7 * 0x30),piVar8);
            }
            lVar5 = *(long *)(param_1 + 0xa8);
            uVar6 = *(uint *)(lVar5 + uVar7 * 0x30 + 0x24);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar6);
          uVar2 = *(uint *)(param_1 + 0xc0);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return;
}


