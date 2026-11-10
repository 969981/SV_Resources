/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071ab28; name: FUN_0071ab28
 */


long FUN_0071ab28(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_0071ab48;
LAB_0071ab98:
    lVar7 = 0;
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) != 0) goto LAB_0071aba8;
LAB_0071ab84:
    uVar6 = uVar3 >> 1;
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_0071ab98;
LAB_0071ab48:
    uVar3 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar5 + 8);
    }
    lVar7 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) == 0) goto LAB_0071ab84;
LAB_0071aba8:
    uVar6 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar6 != 0) {
    uVar6 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar6 = *(ulong *)(pbVar5 + 8);
    }
    lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar5 = *(byte **)(param_1 + 0x20);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ac04:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ac04;
  pbVar5 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ac58:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ac58;
  pbVar5 = *(byte **)(param_1 + 0x30);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071acac:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071acac;
  pbVar5 = *(byte **)(param_1 + 0x38);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ad00:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ad00;
  pbVar5 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ad54:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ad54;
  pbVar5 = *(byte **)(param_1 + 0x48);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ada8:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ada8;
  pbVar5 = *(byte **)(param_1 + 0x50);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071adfc:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071adfc;
  pbVar5 = *(byte **)(param_1 + 0x58);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071ae50:
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)(pbVar5 + 8);
      }
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  else if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071ae50;
  pbVar5 = *(byte **)(param_1 + 0x60);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0071aed8;
  }
  else if (*(long *)(pbVar5 + 8) == 0) goto LAB_0071aed8;
  uVar3 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar5 + 8);
  }
  lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
LAB_0071aed8:
  if (param_1 != PTR_DAT_047d00b8) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x10);
      if (uVar1 == 0) {
        uVar3 = 0;
        uVar1 = *(uint *)(lVar4 + 0x14);
      }
      else if ((int)uVar1 < 0) {
        uVar3 = 0xb;
        uVar1 = *(uint *)(lVar4 + 0x14);
      }
      else {
        uVar3 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
        uVar1 = *(uint *)(lVar4 + 0x14);
      }
      if (uVar1 != 0) {
        if ((int)uVar1 < 0) {
          uVar6 = 0xb;
        }
        else {
          uVar6 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
        }
        uVar3 = uVar6 + uVar3;
      }
      if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
        bVar2 = *(byte *)(uVar6 + 8);
        if ((bVar2 & 1) == 0) {
          uVar6 = (ulong)(bVar2 >> 1);
        }
        else {
          uVar6 = *(ulong *)(uVar6 + 0x10);
        }
        uVar3 = uVar6 + uVar3;
      }
      *(uint *)(lVar4 + 0x18) = (uint)uVar3;
      lVar7 = lVar7 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar4 = FUN_00514094();
      lVar7 = lVar7 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar3 = 0xb;
    }
    else {
      uVar3 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar7 = uVar3 + lVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x7c);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar3 = 0xb;
    }
    else {
      uVar3 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar7 = uVar3 + lVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar3 + 8);
    if ((bVar2 & 1) == 0) {
      uVar3 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar7 = uVar3 + lVar7;
  }
  *(int *)(param_1 + 0x80) = (int)lVar7;
  return lVar7;
}


