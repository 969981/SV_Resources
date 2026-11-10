/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013c2e0; name: FUN_0013c2e0
 */


undefined8 FUN_0013c2e0(undefined8 param_1,long param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_2 + 0xc);
  if ((*(char *)(param_2 + 10) < '\0') &&
     (uVar4 = uVar9 - (uVar9 >> 1 & 0x55555555),
     uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333),
     1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
  }
  if (((byte)param_3[1] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    if ((byte)param_3[1] == 3) {
      uVar4 = (uint)*param_3;
      if (*param_3 - 1 >> 0x1f != 0) {
        uVar4 = 0;
      }
      if (uVar4 - 1 < uVar9) goto LAB_0013c3e0;
    }
    lVar2 = FUN_0013d3d0(param_2,param_3,1);
    if (*(char *)(lVar2 + 8) == ' ') {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"invalid key to \'next\'");
    }
    uVar4 = uVar9 + (int)((ulong)(lVar2 - *(long *)(param_2 + 0x18)) >> 3) * -0x55555555 + 1;
  }
LAB_0013c3e0:
  uVar5 = (ulong)uVar4;
  uVar7 = uVar5 << 4 | 8;
  if (uVar4 <= uVar9) {
    uVar4 = uVar9;
  }
  do {
    if (uVar4 == uVar5) {
      uVar4 = uVar4 - uVar9;
      iVar1 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
      if (iVar1 <= (int)uVar4) {
        return 0;
      }
      while (pbVar8 = (byte *)(*(long *)(param_2 + 0x18) + (ulong)uVar4 * 0x18 + 8),
            (*pbVar8 & 0xf) == 0) {
        uVar4 = uVar4 + 1;
        if (iVar1 <= (int)uVar4) {
          return 0;
        }
      }
      puVar6 = (ulong *)(*(long *)(param_2 + 0x18) + (ulong)uVar4 * 0x18);
      *param_3 = puVar6[2];
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)((long)puVar6 + 9);
      param_3[2] = *puVar6;
      bVar3 = *pbVar8;
      goto LAB_0013c4b4;
    }
    uVar5 = uVar5 + 1;
    pbVar8 = (byte *)(*(long *)(param_2 + 0x10) + uVar7);
    uVar7 = uVar7 + 0x10;
  } while ((*pbVar8 & 0xf) == 0);
  *param_3 = uVar5 & 0xffffffff;
  *(undefined1 *)(param_3 + 1) = 3;
  puVar6 = (ulong *)(*(long *)(param_2 + 0x10) + (ulong)((int)uVar5 - 1) * 0x10);
  param_3[2] = *puVar6;
  bVar3 = (byte)puVar6[1];
LAB_0013c4b4:
  *(byte *)(param_3 + 3) = bVar3;
  return 1;
}


