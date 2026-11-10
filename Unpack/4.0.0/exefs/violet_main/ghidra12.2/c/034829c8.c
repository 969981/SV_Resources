/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034829c8; name: FUN_034829c8
 */


long FUN_034829c8(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  bVar2 = *param_2;
  if ((bVar2 != 0xff) || (*(long *)(param_2 + 8) != 0)) {
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar1 * 0x28;
          goto LAB_03482a80;
        }
        if (bVar3 < bVar2) {
          iVar7 = iVar1 + 1;
        }
        uVar6 = uVar6 - (bVar3 < bVar2) >> 1;
      } while (uVar6 != 0);
    }
    if (bVar2 != 0xff) {
      *param_2 = 0xff;
      uVar6 = *(uint *)(param_1 + 0x18);
      if (uVar6 != 0) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + (uVar6 >> 1);
          if (*(char *)(*(long *)(param_1 + 0x10) + (long)iVar7 * 0x28 + 0x20) == -1) {
            lVar4 = *(long *)(param_1 + 0x10) + (long)iVar7 * 0x28;
LAB_03482a80:
            uVar5 = *(ulong *)(param_2 + 8);
            if ((uVar5 != 0) && (uVar6 = *(uint *)(lVar4 + 0x18), uVar6 != 0)) {
              iVar7 = 0;
              do {
                iVar1 = iVar7 + (uVar6 >> 1);
                uVar8 = *(ulong *)(*(long *)(lVar4 + 0x10) + (long)iVar1 * 0x10 + 8);
                if (uVar8 == uVar5) {
                  return *(long *)(lVar4 + 0x10) + (long)iVar1 * 0x10;
                }
                if (uVar8 < uVar5) {
                  iVar7 = iVar1 + 1;
                }
                uVar6 = uVar6 - (uVar8 < uVar5) >> 1;
              } while (uVar6 != 0);
            }
            param_2[8] = 0;
            param_2[9] = 0;
            param_2[10] = 0;
            param_2[0xb] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0xe] = 0;
            param_2[0xf] = 0;
            if (*(char *)(lVar4 + 0xc) != '\0') {
              return lVar4 + 8;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          uVar6 = uVar6 - 1 >> 1;
        } while (uVar6 != 0);
      }
    }
  }
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
}


