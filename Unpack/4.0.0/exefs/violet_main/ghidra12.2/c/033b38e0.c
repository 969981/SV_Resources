/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b38e0; name: FUN_033b38e0
 */


undefined8 FUN_033b38e0(long param_1)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  pbVar4 = *(byte **)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = param_1 + 0x18;
LAB_033b3910:
  while( true ) {
    lVar6 = (long)*(int *)(param_1 + 0x48);
    pbVar3 = pbVar4;
    if ((byte *)(lVar5 + lVar6) <= pbVar4) {
      FUN_033b40b8(lVar1,0x100);
      pbVar3 = *(byte **)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar6 = (long)*(int *)(param_1 + 0x48);
      if ((byte *)(lVar5 + lVar6) <= pbVar3) {
        return 5;
      }
    }
    pbVar4 = pbVar3 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
    bVar2 = *pbVar3;
    uVar7 = (uint)bVar2;
    if (0x1f < bVar2) break;
    if (1 < uVar7 - 9 && uVar7 != 0xd) {
      if (bVar2 == 0) {
        return 5;
      }
      goto LAB_033b3b30;
    }
LAB_033b39bc:
    bVar2 = *pbVar4;
    if (bVar2 == 0) {
      FUN_033b40b8(lVar1,0x100);
      pbVar4 = *(byte **)(param_1 + 0x38);
      bVar2 = *pbVar4;
    }
    if (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
      if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar4)
      goto code_r0x033b3994;
      goto LAB_033b39b4;
    }
    lVar5 = *(long *)(param_1 + 0x40);
    for (pbVar3 = (byte *)(lVar5 + *(int *)(param_1 + 0x34)); pbVar3 < pbVar4; pbVar3 = pbVar3 + 1)
    {
      if (*pbVar3 == 0xd || *pbVar3 == 10) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    *(int *)(param_1 + 0x34) = (int)pbVar4 - (int)lVar5;
  }
  if (bVar2 < 0x3d) {
    if (uVar7 == 0x20) goto LAB_033b39bc;
    if (uVar7 == 0x22) {
      while( true ) {
        pbVar3 = pbVar4;
        if ((byte *)(lVar5 + (int)lVar6) <= pbVar4) {
          FUN_033b40b8(lVar1,0x100);
          pbVar3 = *(byte **)(param_1 + 0x38);
          lVar5 = *(long *)(param_1 + 0x40);
          lVar6 = (long)*(int *)(param_1 + 0x48);
          if ((byte *)(lVar5 + lVar6) <= pbVar3) {
            return 0xc;
          }
        }
        pbVar4 = pbVar3 + 1;
        *(byte **)(param_1 + 0x38) = pbVar4;
        if (*pbVar3 == 0) break;
        if (*pbVar3 == 0x22) {
          return 10;
        }
      }
      return 0xc;
    }
    if (uVar7 == 0x2f) {
      return 0xb;
    }
    goto LAB_033b3b30;
  }
  if (uVar7 == 0x3f) {
    if ((*(byte *)(param_1 + 0x60) >> 1 & 1) != 0) {
      pbVar3 = pbVar4;
      if (pbVar4 < (byte *)(lVar5 + (int)lVar6)) {
LAB_033b3a6c:
        pbVar4 = pbVar3 + 1;
        *(byte **)(param_1 + 0x38) = pbVar4;
        if (*pbVar3 == 0x3e) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
          return 7;
        }
      }
      else {
        FUN_033b40b8(lVar1,0x100);
        pbVar4 = *(byte **)(param_1 + 0x38);
        lVar5 = *(long *)(param_1 + 0x40);
        pbVar3 = pbVar4;
        if (pbVar4 < (byte *)(lVar5 + *(int *)(param_1 + 0x48))) goto LAB_033b3a6c;
      }
      if ((byte *)(lVar5 + *(int *)(param_1 + 0x34)) < pbVar4) {
        pbVar4 = pbVar4 + -1;
        *(byte **)(param_1 + 0x38) = pbVar4;
      }
    }
    goto LAB_033b3910;
  }
  if (uVar7 == 0x3d) {
    return 9;
  }
  if (uVar7 == 0x3e) {
    if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
      return 6;
    }
  }
  else {
LAB_033b3b30:
    if ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || (uVar7 == 0x5f)) || (uVar7 == 0x3a)) {
LAB_033b3b98:
      bVar2 = *pbVar4;
      if (bVar2 == 0) {
        FUN_033b40b8(lVar1,0x100);
        pbVar4 = *(byte **)(param_1 + 0x38);
        bVar2 = *pbVar4;
      }
      uVar7 = (uint)bVar2;
      if (((9 < uVar7 - 0x30 && 0x19 < ((uVar7 & 0xffffffdf) - 0x41 & 0xff)) && (uVar7 != 0x5f)) &&
         (uVar7 != 0x3a)) {
        return 8;
      }
      if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar4)
      goto code_r0x033b3b70;
      goto LAB_033b3b90;
    }
  }
  return 0xc;
code_r0x033b3b70:
  FUN_033b40b8(lVar1,0x100);
  pbVar4 = *(byte **)(param_1 + 0x38);
  if (pbVar4 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_033b3b90:
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
  }
  goto LAB_033b3b98;
code_r0x033b3994:
  FUN_033b40b8(lVar1,0x100);
  pbVar4 = *(byte **)(param_1 + 0x38);
  if (pbVar4 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_033b39b4:
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
  }
  goto LAB_033b39bc;
}


