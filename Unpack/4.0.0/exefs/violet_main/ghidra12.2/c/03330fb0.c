/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03330fb0; name: FUN_03330fb0
 */


undefined8 * FUN_03330fb0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  char *__s;
  ulong uVar11;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  if ((ulong *)0x1 < param_2) {
    uVar8 = *param_2;
    uVar7 = (uint)uVar8;
    puVar10 = param_2;
    if ((uVar7 >> 0x11 & 1) != 0) {
      while ((uVar7 >> 0x12 & 1) == 0) {
        if (((uVar8 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0)) {
          uVar8 = 0;
          goto LAB_03331108;
        }
        uVar8 = *puVar10;
        uVar7 = (uint)uVar8;
      }
      uVar8 = CONCAT44(uVar7,uVar7) & 0x3ffff0003ffff;
      uVar8 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                   POPCOUNT((char)(uVar8 >> 0x10))) + 2];
LAB_03331108:
      lVar5 = FUN_03330fb0(param_1,uVar8);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      __s = (char *)0x0;
      if (param_2 != (ulong *)0x0) {
        do {
          uVar7 = (uint)*param_2;
          if ((uVar7 >> 0x10 & 1) != 0) {
            uVar7 = uVar7 & 0xffff;
            __s = (char *)param_2[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))
                                               ) + 2];
            if (__s == (char *)0x0) goto LAB_0333116c;
            sVar4 = strlen(__s);
            pcVar6 = __s + sVar4;
            goto LAB_03331170;
          }
          if ((*param_2 & 1) != 0) {
            __s = (char *)0x0;
            goto LAB_0333116c;
          }
          param_2 = (ulong *)param_2[1];
        } while (param_2 != (ulong *)0x0);
        __s = (char *)0x0;
      }
LAB_0333116c:
      pcVar6 = (char *)0x0;
LAB_03331170:
      puVar3 = (undefined8 *)FUN_031e198c(lVar5,__s,pcVar6,0);
      return puVar3;
    }
  }
  uVar8 = FUN_0333faf4(param_1 + 0x68,param_2);
  if ((uVar8 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  uVar8 = *param_2;
  puVar10 = param_2;
  if ((uVar8 & 1) == 0) {
    puVar9 = param_2;
    do {
      puVar9 = (ulong *)puVar9[1];
    } while ((*puVar9 & 1) == 0);
    bVar2 = param_2 == (ulong *)0x0;
    if ((param_2 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) goto LAB_03331094;
    if ((uVar8 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
  }
  else {
    if ((param_2[2] & 0x1f) == 7) {
LAB_03331094:
      local_40 = &DAT_03c886bc;
      puStack_38 = &DAT_03c886bc;
      puVar3 = (undefined8 *)FUN_033364d4(param_1 + 0x68,&local_40,0,param_2);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)*puVar3;
    }
    bVar2 = false;
  }
  puVar3 = (undefined8 *)0x0;
  if ((!bVar2) && ((puVar10[2] & 0x1f) == 6)) {
    puVar10 = param_2;
    if (((uint)uVar8 >> 1 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
        if (puVar10 == (ulong *)0x0) {
          uVar8 = 0;
          goto LAB_03331188;
        }
      } while (((byte)*puVar10 >> 1 & 1) == 0);
    }
    uVar8 = puVar10[3];
LAB_03331188:
    lVar5 = FUN_03330fb0(param_1,uVar8);
    puVar3 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      do {
        uVar8 = *param_2;
        if (((uint)uVar8 >> 3 & 1) != 0) {
          uVar11 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar11 = param_2[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
          }
          goto LAB_033311e0;
        }
        if ((uVar8 & 1) != 0) {
          uVar11 = 0;
          goto LAB_033311e0;
        }
        param_2 = (ulong *)param_2[1];
      } while (param_2 != (ulong *)0x0);
      uVar11 = 0;
LAB_033311e0:
      puVar3 = (undefined8 *)
               (**(code **)(*(long *)(param_1 + 800) + 0x18))((long *)(param_1 + 800),0x70);
      *puVar3 = 0x30800f;
      puVar3[1] = 0;
      puVar1 = PTR_DAT_047e66c0;
      puVar3[7] = 0x80008;
      puVar3[8] = 0;
      puVar3[0xb] = 1;
      puVar3[0xc] = lVar5;
      puVar3[2] = 6;
      puVar3[3] = lVar5;
      puVar3[4] = puVar1;
      puVar3[5] = uVar11;
      puVar3[10] = 0;
      puVar3[6] = puVar3 + 10;
      puVar3[0xd] = &DAT_03c4f61e;
    }
  }
  return puVar3;
}


