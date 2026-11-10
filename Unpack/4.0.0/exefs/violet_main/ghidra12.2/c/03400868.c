/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03400868; name: FUN_03400868
 */


void FUN_03400868(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float *__s;
  long alStack_450 [128];
  
  uVar12 = (ulong)param_5;
  uVar4 = *(ushort *)((long)param_4 + 0x12);
  uVar15 = (ulong)uVar4;
  uVar3 = param_5;
  if ((*(uint *)(param_4 + 1) & 0xf00) == 0x200) {
    uVar3 = 1;
  }
  lVar14 = -(uVar12 * 8 + 0xf & 0xffffffff0);
  lVar16 = (long)alStack_450 + lVar14 + 0x400;
  if (param_5 != 0) {
    uVar7 = (ulong)*(ushort *)(param_4 + 2);
    lVar6 = *param_4;
    uVar5 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      plVar13 = (long *)((long)alStack_450 + lVar14 + 0x410);
      lVar14 = lVar6;
      do {
        lVar1 = lVar14 + uVar7 * 8;
        lVar2 = lVar14 + uVar7 * 0xc;
        uVar9 = uVar9 + 4;
        plVar13[-2] = lVar14;
        plVar13[-1] = lVar14 + uVar7 * 4;
        lVar14 = lVar14 + uVar7 * 0x10;
        *plVar13 = lVar1;
        plVar13[1] = lVar2;
        plVar13 = plVar13 + 4;
      } while ((uVar12 & 0xfffffffc) != uVar9);
    }
    if ((param_5 & 3) != 0) {
      lVar6 = lVar6 + uVar9 * uVar7 * 4;
      plVar13 = (long *)(lVar16 + uVar9 * 8);
      do {
        *plVar13 = lVar6;
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 + uVar7 * 4;
        plVar13 = plVar13 + 1;
      } while (uVar5 != 0);
    }
  }
  __s = (float *)(lVar16 - ((ulong)((uint)uVar4 * 4 + 0xf) & 0x7fff0));
  memset(__s,0,uVar15 << 2);
  if ((uVar4 != 0) && (uVar3 != 0)) {
    uVar12 = 0;
    do {
      pfVar8 = *(float **)(lVar16 + uVar12 * 8);
      pfVar10 = __s;
      do {
        pfVar11 = pfVar10 + 1;
        *pfVar10 = *pfVar10 + *pfVar8 * *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar11;
      } while (pfVar11 < __s + uVar15);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar3);
  }
  FUN_03401060(1.0 / (float)uVar3,param_1,param_2,*(undefined4 *)(param_3 + 0x44),
               *(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x30),lVar16,__s,param_5,
               uVar15,*(undefined8 *)(param_3 + 0x38));
  return;
}


