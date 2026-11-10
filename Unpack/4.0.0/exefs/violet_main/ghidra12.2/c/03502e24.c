/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03502e24; name: FUN_03502e24
 */


undefined8 FUN_03502e24(long param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  
  puVar12 = PTR_DAT_047e6ce8;
  lVar8 = param_1 + (ulong)param_2 * 0x30;
  if (((*(char *)(lVar8 + 0xbc) == '\0') ||
      (uVar11 = (ulong)param_2, *(char *)(param_1 + uVar11 * 0x30 + 0xbd) == '\0')) ||
     (*(char *)(param_1 + uVar11 * 0x30 + 0xbf) != '\0')) {
    return 2;
  }
  if (*(long *)(PTR_DAT_047e6ce8 + 0x58) != 0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e7460);
  }
  lVar13 = param_1 + uVar11 * 0x30;
  puVar14 = (uint *)(lVar13 + 0xb0);
  uVar15 = *puVar14;
  if (uVar15 == 0) {
    uVar15 = param_2 + 1;
    if ((int)uVar15 < 1) {
      uVar10 = 0xff;
    }
    else {
      uVar6 = 0;
      uVar9 = 0xff;
      do {
        uVar10 = uVar9;
        if (((*(char *)(param_1 + (ulong)(uVar6 & 0xff) * 0x30 + 0xbf) == '\0') &&
            (*(short *)(param_1 + (ulong)(uVar6 & 0xff) * 0x30 + 0xc4) == 0)) &&
           (uVar10 = uVar6, *(short *)(param_1 + 400) != 0)) {
          uVar10 = uVar9;
        }
        uVar6 = uVar6 + 1;
        uVar9 = uVar10;
      } while (uVar15 != uVar6);
    }
    if ((char)uVar15 < '\x04') {
      do {
        uVar11 = (ulong)uVar15 & 0xff;
        if ((*(char *)(param_1 + uVar11 * 0x30 + 0xbf) == '\0') &&
           (*(short *)(param_1 + uVar11 * 0x30 + 0xc4) == 0)) {
          bVar2 = *(short *)(param_1 + 400) == 0;
        }
        else {
          bVar2 = false;
        }
        *(char *)(param_1 + (char)uVar10 + 0x171) = (char)uVar10;
        cVar1 = (char)uVar15;
        FUN_03501938(param_1 + (long)cVar1 * 0x30 + 0x98);
        uVar6 = (uint)uVar11;
        if (!bVar2) {
          uVar6 = uVar10;
        }
        uVar15 = (uint)uVar11 + 1;
        uVar10 = uVar6;
      } while (cVar1 < '\x03');
      uVar15 = *puVar14;
      puVar12 = PTR_DAT_047e6ce8;
    }
    else {
      uVar15 = 0;
    }
  }
  if (*param_4 != 0) {
    lVar8 = lVar8 + 0x98;
    if (param_2 < 3) {
      uVar10 = 0;
      do {
        if (*(long *)(param_1 + 8) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x184);
        }
        lVar3 = FUN_035011e0(lVar8,param_3,uVar4);
        if (lVar3 == 0) goto LAB_03503128;
        FUN_0350247c(param_1,param_2,param_2 + 1,1,lVar3);
        uVar6 = *param_4;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
    else {
      uVar10 = 0;
      do {
        if (*(long *)(param_1 + 8) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x184);
        }
        lVar3 = FUN_035011e0(lVar8,param_3,uVar4);
        if (lVar3 == 0) goto LAB_03503128;
        uVar6 = *param_4;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
    plVar5 = (long *)(lVar13 + 0xa8);
    if (*(long **)(param_4 + 2) != (long *)0x0) {
      if (uVar6 == 0) goto LAB_03503120;
      **(long **)(param_4 + 2) = *plVar5 + (ulong)uVar15 * 0x30;
      uVar6 = *param_4;
      if (1 < uVar6) {
        uVar11 = 1;
        do {
          *(ulong *)(*(long *)(param_4 + 2) + uVar11 * 8) =
               *plVar5 + (ulong)(uVar15 + (int)uVar11) * 0x30;
          uVar6 = *param_4;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
    }
    uVar7 = 1;
    if ((uVar6 == 0) || (*(undefined8 **)(param_4 + 4) == (undefined8 *)0x0)) goto LAB_0350312c;
    **(undefined8 **)(param_4 + 4) = *(undefined8 *)(*plVar5 + (ulong)uVar15 * 0x30 + 0x18);
    if (1 < *param_4) {
      uVar11 = 1;
      do {
        *(undefined8 *)(*(long *)(param_4 + 4) + uVar11 * 8) =
             *(undefined8 *)(*plVar5 + (ulong)(uVar15 + (int)uVar11) * 0x30 + 0x18);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *param_4);
    }
  }
LAB_03503120:
  uVar7 = 1;
LAB_0350312c:
  if (*(long *)(puVar12 + 0x58) != 0) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e7460);
  }
  return uVar7;
LAB_03503128:
  uVar7 = 2;
  goto LAB_0350312c;
}


