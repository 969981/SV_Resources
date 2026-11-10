/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026f698; name: FUN_0026f698
 */


void FUN_0026f698(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  uVar6 = (ulong)*(uint *)(param_2 + 0x18);
  if (0 < (int)*(uint *)(param_2 + 0x18)) {
    puVar7 = (undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    do {
      while (pbVar8 = (byte *)*puVar7, (*pbVar8 & 1) == 0) {
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_0026f700;
      }
      **(undefined1 **)(pbVar8 + 0x10) = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
LAB_0026f700:
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  if (*param_1 == 2) {
    iVar3 = param_1[1];
    FUN_0026f91c(param_1);
    puVar4 = PTR_PTR_047cc1a0;
    if ((char)iVar3 == '\0') {
      lVar9 = *(long *)(param_1 + 10);
      lVar2 = *(long *)(param_1 + 0xc);
      if (lVar9 != lVar2) {
        if ((param_3 & 1) == 0) {
          do {
            FUN_00250e00(&local_50,lVar9,*(undefined8 *)puVar4);
            uVar6 = (ulong)&local_50 | 1;
            if ((local_50 & 1) != 0) {
              uVar6 = local_40;
            }
                    /* try { // try from 0026f8a4 to 0026f8ab has its CatchHandler @ 0026f8d8 */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_50 & 1) != 0) {
              (**(code **)(*plStack_38 + 0x18))
                        (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
            }
            lVar9 = lVar9 + 0x20;
          } while (lVar2 != lVar9);
        }
        else {
          do {
            FUN_002518a0(&local_50,lVar9);
            uVar6 = (ulong)&local_50 | 1;
            if ((local_50 & 1) != 0) {
              uVar6 = local_40;
            }
                    /* try { // try from 0026f848 to 0026f84f has its CatchHandler @ 0026f8dc */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_50 & 1) != 0) {
              (**(code **)(*plStack_38 + 0x18))
                        (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
            }
            lVar9 = lVar9 + 0x20;
          } while (lVar2 != lVar9);
        }
      }
    }
    else {
      pbVar8 = *(byte **)(param_1 + 2);
      pbVar1 = *(byte **)(param_1 + 4);
      if (pbVar8 != pbVar1) {
        if ((param_3 & 1) == 0) {
          do {
            if ((*pbVar8 & 1) == 0) {
              pbVar5 = pbVar8 + 1;
            }
            else {
              pbVar5 = *(byte **)(pbVar8 + 0x10);
            }
                    /* try { // try from 0026f77c to 0026f783 has its CatchHandler @ 0026f910 */
            FUN_0026ea7c(param_2,pbVar5);
            pbVar8 = pbVar8 + 0x20;
          } while (pbVar1 != pbVar8);
        }
        else {
          do {
            if ((*pbVar8 & 1) == 0) {
              pbVar5 = pbVar8 + 1;
            }
            else {
              pbVar5 = *(byte **)(pbVar8 + 0x10);
            }
            FUN_00251690(&local_50,pbVar5);
            uVar6 = (ulong)&local_50 | 1;
            if ((local_50 & 1) != 0) {
              uVar6 = local_40;
            }
                    /* try { // try from 0026f7cc to 0026f7d3 has its CatchHandler @ 0026f8e0 */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_50 & 1) != 0) {
              (**(code **)(*plStack_38 + 0x18))
                        (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
            }
            pbVar8 = pbVar8 + 0x20;
          } while (pbVar1 != pbVar8);
        }
      }
    }
  }
  else if (*param_1 == 1) {
                    /* try { // try from 0026f718 to 0026f727 has its CatchHandler @ 0026f8d4 */
    FUN_0026ea7c(param_2,&DAT_03c0f097);
  }
  return;
}


