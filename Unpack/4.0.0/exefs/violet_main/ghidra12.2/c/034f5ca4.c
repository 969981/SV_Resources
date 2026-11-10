/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f5ca4; name: FUN_034f5ca4
 */


void FUN_034f5ca4(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                 uint param_5)

{
  short *psVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  void *__dest;
  float fVar11;
  float fVar12;
  float fVar13;
  float afStack_240 [128];
  float fStack_34;
  
  bVar3 = *(byte *)(param_2 + 0x6d);
  __dest = (void *)((long)afStack_240 + (0x200 - ((ulong)((uint)bVar3 * 4 + 0xf) & 0x7f0)));
  if (*(byte *)(param_2 + 0x6c) - 3 < 3) {
    if (bVar3 != 0) {
      memcpy(__dest,*(void **)(param_2 + 0x20),(ulong)bVar3 << 2);
    }
  }
  else if ((*(byte *)(param_2 + 0x6c) < 3) && (bVar3 != 0)) {
    lVar9 = *(long *)(param_2 + 0x20);
    if (bVar3 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        psVar1 = (short *)(lVar9 + uVar10 * 2);
        sVar5 = psVar1[1];
        pfVar2 = (float *)((long)__dest + uVar10 * 4);
        uVar10 = uVar10 + 2;
        *pfVar2 = (float)(int)*psVar1 * 3.0517578e-05;
        pfVar2[1] = (float)(int)sVar5 * 3.0517578e-05;
      } while (((ulong)bVar3 & 0xfe) != uVar10);
    }
    if ((bVar3 & 1) != 0) {
      *(float *)((long)__dest + uVar10 * 4) =
           (float)(int)*(short *)(lVar9 + uVar10 * 2) * 3.0517578e-05;
    }
  }
  fVar11 = (float)NEON_ucvtf(*param_3);
  if (*(float *)(param_2 + 100) != fVar11 / (float)param_5) {
    *(float *)(param_2 + 100) = fVar11 / (float)param_5;
    *(undefined1 *)(param_2 + 0x6e) = 1;
  }
  FUN_034f5ed8(param_1,param_2,1);
  if ((*(ushort *)(param_3 + 2) & 0x3f) == 0x10) {
    cVar4 = *(char *)(param_2 + 0x6d);
    uVar8 = 1;
    if (cVar4 != '\x02') {
      uVar8 = 2;
    }
    if (cVar4 != '\x01') goto LAB_034f5e28;
    *(undefined1 *)(param_2 + 0x6c) = 0;
LAB_034f5e48:
    uVar10 = 0;
    do {
      fVar12 = *(float *)((long)__dest + uVar10 * 4) * 32767.0;
      fVar13 = (float)NEON_fminnm(fVar12,0x46fffe00);
      fVar11 = -32768.0;
      if (-32768.0 < fVar13) {
        fVar11 = 32767.0;
      }
      bVar6 = false;
      bVar7 = false;
      if (-32768.0 < fVar13) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar12)) {
          bVar6 = fVar12 < 32767.0;
          bVar7 = false;
        }
      }
      if (bVar6 != bVar7) {
        fVar11 = fVar12;
      }
      *(short *)(*(long *)(param_2 + 0x20) + uVar10 * 2) = (short)(int)fVar11;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(byte *)(param_2 + 0x6d));
  }
  else {
    if ((*(ushort *)(param_3 + 2) & 0x3f) != 0x20) {
      *(undefined1 *)(param_2 + 0x6c) = 0xff;
      return;
    }
    cVar4 = *(char *)(param_2 + 0x6d);
    uVar8 = 4;
    if (cVar4 != '\x02') {
      uVar8 = 5;
    }
    if (cVar4 == '\x01') {
      *(undefined1 *)(param_2 + 0x6c) = 3;
    }
    else {
LAB_034f5e28:
      *(char *)(param_2 + 0x6c) = (char)uVar8;
      if (2 < uVar8 - 3) {
        if (2 < uVar8) {
          return;
        }
        if (cVar4 == '\0') {
          return;
        }
        goto LAB_034f5e48;
      }
      if (cVar4 == '\0') {
        return;
      }
    }
    uVar10 = 0;
    do {
      *(undefined4 *)(*(long *)(param_2 + 0x20) + uVar10 * 4) =
           *(undefined4 *)((long)__dest + uVar10 * 4);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(byte *)(param_2 + 0x6d));
  }
  return;
}


