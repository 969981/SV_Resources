/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033269a8; name: FUN_033269a8
 */


undefined1  [16] FUN_033269a8(long *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  char *local_30;
  char *local_28;
  
  local_30 = param_2;
  if (param_2 == (char *)0x0) {
    local_28 = (char *)0x0;
  }
  else {
    sVar5 = strlen(param_2);
    local_28 = param_2 + sVar5;
  }
  iVar4 = FUN_0333d8d0(*param_1 + 0x3a0,&local_30);
  if (-1 < iVar4) {
    lVar12 = *param_1;
    lVar6 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x168) + 0x68) + 0x90),
                         &local_30,iVar4);
    uVar1 = *(uint *)(lVar12 + 0xcc);
    if (0 < (int)uVar1) {
      uVar2 = (int)lVar6 * -0x61c8864f;
      uVar3 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar10 = (ulong)((uVar2 + (uVar2 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar1);
      lVar9 = *(long *)(lVar12 + 0xc0);
      lVar11 = *(long *)(lVar9 + uVar10 * 0x10);
      if (lVar11 != -1) {
        if (lVar11 != lVar6) {
          do {
            uVar10 = (ulong)((int)uVar10 + 1U & uVar1);
            lVar11 = *(long *)(lVar9 + uVar10 * 0x10);
            if (lVar11 == -1) goto LAB_03326ac4;
          } while (lVar11 != lVar6);
        }
        uVar10 = *(ulong *)(lVar9 + uVar10 * 0x10 + 8);
        uVar7 = 0;
        iVar4 = (int)uVar10;
        if ((iVar4 < 0) || (iVar4 == 0x50000000)) goto LAB_03326ac8;
        puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0xb0) + (uVar10 & 0xffffffff) * 8);
        if (puVar8 != (undefined8 *)0x0) {
          uVar7 = *puVar8;
          goto LAB_03326ac8;
        }
      }
    }
  }
LAB_03326ac4:
  uVar7 = 0;
LAB_03326ac8:
  auVar13._0_8_ = *param_1;
  auVar13._8_8_ = uVar7;
  return auVar13;
}


