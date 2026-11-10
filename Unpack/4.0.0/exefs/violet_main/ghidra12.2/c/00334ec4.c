/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00334ec4; name: FUN_00334ec4
 */


void FUN_00334ec4(long param_1,byte param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x50) == '\0') goto LAB_00335108;
    uVar2 = *param_3;
    if ((uVar2 & 1) == 0) {
      puVar7 = param_3 + 1;
      uVar5 = 3;
      if (uVar2 >> 1 == 3) goto LAB_00334f58;
    }
    else {
      puVar7 = (ulong *)param_3[1];
      uVar5 = param_3[2];
      if (uVar2 >> 1 == uVar5) {
LAB_00334f58:
        uVar1 = FUN_0049e770(PTR_FUN_047cba38,uVar5 << 4);
        *(char **)(uVar1 + uVar5 * 8) = "Address list became empty";
        if (uVar1 == 0) goto LAB_00334fe8;
        if (uVar5 != 0) {
          uVar2 = uVar5 & 3;
          if (uVar5 - 1 < 3) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            puVar4 = (ulong *)(uVar1 + 0x10);
            puVar6 = puVar7;
            do {
              puVar7 = puVar6 + 4;
              puVar4[-2] = *puVar6;
              puVar4[-1] = puVar6[1];
              *puVar4 = puVar6[2];
              uVar3 = uVar3 + 4;
              puVar4[1] = puVar6[3];
              puVar4 = puVar4 + 4;
              puVar6 = puVar7;
            } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
          }
          if (uVar2 != 0) {
            puVar4 = (ulong *)(uVar1 + uVar3 * 8);
            do {
              uVar2 = uVar2 - 1;
              *puVar4 = *puVar7;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar2 != 0);
          }
        }
LAB_003350d4:
        uVar2 = *param_3;
        if ((uVar2 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,param_3[1]);
          uVar2 = *param_3;
        }
        uVar2 = uVar2 | 1;
        param_3[1] = uVar1;
        param_3[2] = uVar5 << 1;
        *param_3 = uVar2;
        goto LAB_00335100;
      }
    }
    puVar7[uVar2 >> 1] = (ulong)"Address list became empty";
  }
  else {
    if (*(char *)(param_1 + 0x50) != '\0') goto LAB_00335108;
    uVar2 = *param_3;
    if ((uVar2 & 1) == 0) {
      puVar7 = param_3 + 1;
      uVar5 = 3;
      if (uVar2 >> 1 == 3) goto LAB_00334fa8;
    }
    else {
      puVar7 = (ulong *)param_3[1];
      uVar5 = param_3[2];
      if (uVar2 >> 1 == uVar5) {
LAB_00334fa8:
        uVar1 = FUN_0049e770(PTR_FUN_047cba38,uVar5 << 4);
        *(char **)(uVar1 + uVar5 * 8) = "Address list became non-empty";
        if (uVar1 != 0) {
          if (uVar5 != 0) {
            uVar2 = uVar5 & 3;
            if (uVar5 - 1 < 3) {
              uVar3 = 0;
            }
            else {
              uVar3 = 0;
              puVar4 = (ulong *)(uVar1 + 0x10);
              puVar6 = puVar7;
              do {
                puVar7 = puVar6 + 4;
                puVar4[-2] = *puVar6;
                puVar4[-1] = puVar6[1];
                *puVar4 = puVar6[2];
                uVar3 = uVar3 + 4;
                puVar4[1] = puVar6[3];
                puVar4 = puVar4 + 4;
                puVar6 = puVar7;
              } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
            }
            if (uVar2 != 0) {
              puVar4 = (ulong *)(uVar1 + uVar3 * 8);
              do {
                uVar2 = uVar2 - 1;
                *puVar4 = *puVar7;
                puVar4 = puVar4 + 1;
                puVar7 = puVar7 + 1;
              } while (uVar2 != 0);
            }
          }
          goto LAB_003350d4;
        }
LAB_00334fe8:
        uVar2 = *param_3;
        goto LAB_00335100;
      }
    }
    puVar7[uVar2 >> 1] = (ulong)"Address list became non-empty";
  }
LAB_00335100:
  *param_3 = uVar2 + 2;
LAB_00335108:
  *(byte *)(param_1 + 0x50) = param_2 & 1;
  return;
}


