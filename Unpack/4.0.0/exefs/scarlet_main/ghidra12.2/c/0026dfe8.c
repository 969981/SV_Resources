/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026dfe8; name: FUN_0026dfe8
 */


void FUN_0026dfe8(int *param_1,long param_2,long param_3,ulong param_4)

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
  byte local_68;
  undefined7 uStack_67;
  ulong local_58;
  long *plStack_50;
  long *local_48;
  long lStack_40;
  ulong local_38;
  
  uVar6 = (ulong)*(uint *)(param_2 + 0x18);
  if (0 < (int)*(uint *)(param_2 + 0x18)) {
    puVar7 = (undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    do {
      while (pbVar8 = (byte *)*puVar7, (*pbVar8 & 1) != 0) {
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
        if (uVar6 == 0) goto LAB_0026e050;
      }
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
LAB_0026e050:
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  iVar3 = *param_1;
  if (iVar3 == 2) {
    iVar3 = param_1[1];
    FUN_0026e39c(param_1);
    puVar4 = PTR_PTR_047cc1a0;
    if ((char)iVar3 == '\0') {
      lVar9 = *(long *)(param_1 + 10);
      lVar2 = *(long *)(param_1 + 0xc);
      if (lVar9 != lVar2) {
        if ((param_4 & 1) == 0) {
          do {
            FUN_00250e00(&local_68,lVar9,*(undefined8 *)puVar4);
            uVar6 = (ulong)&local_68 | 1;
            if ((local_68 & 1) != 0) {
              uVar6 = local_58;
            }
                    /* try { // try from 0026e228 to 0026e22f has its CatchHandler @ 0026e344 */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_68 & 1) != 0) {
              (**(code **)(*plStack_50 + 0x18))
                        (plStack_50,local_58,CONCAT71(uStack_67,local_68) & 0xfffffffffffffffe,1);
            }
            lVar9 = lVar9 + 0x20;
          } while (lVar2 != lVar9);
        }
        else {
          do {
            FUN_002518a0(&local_68,lVar9);
            uVar6 = (ulong)&local_68 | 1;
            if ((local_68 & 1) != 0) {
              uVar6 = local_58;
            }
                    /* try { // try from 0026e1cc to 0026e1d3 has its CatchHandler @ 0026e348 */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_68 & 1) != 0) {
              (**(code **)(*plStack_50 + 0x18))
                        (plStack_50,local_58,CONCAT71(uStack_67,local_68) & 0xfffffffffffffffe,1);
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
        if ((param_4 & 1) == 0) {
          do {
            if ((*pbVar8 & 1) == 0) {
              pbVar5 = pbVar8 + 1;
            }
            else {
              pbVar5 = *(byte **)(pbVar8 + 0x10);
            }
                    /* try { // try from 0026e0e4 to 0026e0eb has its CatchHandler @ 0026e350 */
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
            FUN_00251690(&local_68,pbVar5);
            uVar6 = (ulong)&local_68 | 1;
            if ((local_68 & 1) != 0) {
              uVar6 = local_58;
            }
                    /* try { // try from 0026e134 to 0026e13b has its CatchHandler @ 0026e34c */
            FUN_0026ea7c(param_2,uVar6);
            if ((local_68 & 1) != 0) {
              (**(code **)(*plStack_50 + 0x18))
                        (plStack_50,local_58,CONCAT71(uStack_67,local_68) & 0xfffffffffffffffe,1);
            }
            pbVar8 = pbVar8 + 0x20;
          } while (pbVar1 != pbVar8);
        }
      }
    }
  }
  else if (iVar3 == 1) {
                    /* try { // try from 0026e164 to 0026e173 has its CatchHandler @ 0026e340 */
    FUN_0026ea7c(param_2,&DAT_03c0f097);
  }
  else if (iVar3 == 0) {
    lStack_40 = *(long *)(param_3 + 0x20);
    local_38 = *(ulong *)(lStack_40 + 0x18);
    uVar6 = *(ulong *)(lStack_40 + 8);
    if (local_38 < uVar6) {
      do {
        local_48 = *(long **)(*(long *)(lStack_40 + 0x20) + local_38 * 8);
        if (local_48 != (long *)0x0) {
          if (local_48 == *(long **)(*(long *)(lStack_40 + 0x20) + (local_38 ^ 1) * 8)) {
            local_48 = *(long **)(*local_48 + 0x20);
          }
          goto LAB_0026e270;
        }
        local_38 = local_38 + 1;
      } while (uVar6 != local_38);
      local_48 = (long *)0x0;
      local_38 = uVar6;
    }
    else {
      local_48 = (long *)0x0;
    }
LAB_0026e270:
    if ((param_4 & 1) == 0) {
      while (local_48 != (long *)0x0) {
        pbVar8 = (byte *)local_48[1];
        if ((*pbVar8 & 1) == 0) {
          pbVar8 = pbVar8 + 1;
        }
        else {
          pbVar8 = *(byte **)(pbVar8 + 0x10);
        }
                    /* try { // try from 0026e314 to 0026e31b has its CatchHandler @ 0026e358 */
        FUN_0026ea7c(param_2,pbVar8);
                    /* try { // try from 0026e31c to 0026e323 has its CatchHandler @ 0026e354 */
        FUN_0025aac8(&local_48);
      }
    }
    else if (local_48 != (long *)0x0) {
      do {
        pbVar8 = (byte *)local_48[1];
        if ((*pbVar8 & 1) == 0) {
          pbVar8 = pbVar8 + 1;
        }
        else {
          pbVar8 = *(byte **)(pbVar8 + 0x10);
        }
        FUN_00251690(&local_68,pbVar8);
        uVar6 = (ulong)&local_68 | 1;
        if ((local_68 & 1) != 0) {
          uVar6 = local_58;
        }
                    /* try { // try from 0026e2b8 to 0026e2bf has its CatchHandler @ 0026e364 */
        FUN_0026ea7c(param_2,uVar6);
        if ((local_68 & 1) != 0) {
          (**(code **)(*plStack_50 + 0x18))
                    (plStack_50,local_58,CONCAT71(uStack_67,local_68) & 0xfffffffffffffffe,1);
        }
                    /* try { // try from 0026e2e4 to 0026e2eb has its CatchHandler @ 0026e35c */
        FUN_0025aac8(&local_48);
      } while (local_48 != (long *)0x0);
    }
  }
  return;
}


