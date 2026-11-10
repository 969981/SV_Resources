/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ecbd8; name: FUN_033ecbd8
 */


undefined8 FUN_033ecbd8(long *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  size_t __nmemb;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[6] = 0;
  }
  lVar6 = param_1[3];
  if ((*(int *)(lVar6 + 0x24) == 0) && (*(int *)(lVar6 + 0x18) != 0)) {
    uVar8 = 0;
    do {
      puVar1 = &DAT_03d85330 + uVar8;
      lVar5 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar6 + lVar5 + 0x28) = *puVar1;
      lVar6 = param_1[3];
    } while (uVar8 < *(uint *)(lVar6 + 0x18));
  }
  if (*(int *)(lVar6 + 0x20) == 0) {
    param_2 = param_2 & 0xffff7f00 | param_2 - (param_2 >> 0xf & 1) & 0xff;
  }
  uVar7 = param_2 >> 0xc;
  *(uint *)((long)param_1 + 0x264) = param_2 & 0xff;
  if (uVar7 < 0x607) {
    if (uVar7 == 3) {
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar9 = &LAB_033ee350;
        break;
      case 1:
        puVar9 = &LAB_033ee59c;
        break;
      case 2:
        puVar9 = &LAB_033ee8a4;
        break;
      case 3:
        puVar9 = &LAB_033eec9c;
        break;
      default:
        goto switchD_033ecd30_default;
      }
    }
    else if (uVar7 == 4) {
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar9 = &LAB_033ed640;
        break;
      case 1:
        puVar9 = &LAB_033ed840;
        break;
      case 2:
        puVar9 = &LAB_033edae0;
        break;
      case 3:
        puVar9 = &LAB_033ede80;
        break;
      default:
        goto switchD_033ecd30_default;
      }
    }
    else {
LAB_033ecd88:
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar9 = &LAB_033f1c6c;
        break;
      case 1:
        puVar9 = &LAB_033f2210;
        break;
      case 2:
        puVar9 = &LAB_033f29c4;
        break;
      case 3:
        puVar9 = &LAB_033f3378;
        break;
      default:
        goto switchD_033ecd30_default;
      }
    }
  }
  else if (uVar7 == 0x607) {
    switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
    case 0:
      puVar9 = &LAB_033ef224;
      break;
    case 1:
      puVar9 = &LAB_033ef560;
      break;
    case 2:
      puVar9 = &LAB_033ef99c;
      break;
    case 3:
      puVar9 = &LAB_033efef8;
      break;
    default:
      goto switchD_033ecd30_default;
    }
  }
  else {
    if (uVar7 != 0x60f) goto LAB_033ecd88;
    switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
    case 0:
      puVar9 = &LAB_033f067c;
      break;
    case 1:
      puVar9 = &LAB_033f0a0c;
      break;
    case 2:
      puVar9 = &LAB_033f0ebc;
      break;
    case 3:
      puVar9 = &LAB_033f1484;
      break;
    default:
      goto switchD_033ecd30_default;
    }
  }
  param_1[1] = (long)puVar9;
  param_1[2] = 0;
switchD_033ecd30_default:
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
  uVar7 = (uint)(*(float *)(lVar6 + 0x1c) * fVar15);
  *(uint *)(param_1 + 9) = uVar7;
  if (uVar7 != 0) {
    lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))
                      ((long *)param_1[4],(ulong)uVar7 << 2,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkFDNReverb/AkFDNReverbFX.cpp"
                       ,0x192);
    param_1[6] = lVar6;
    if (lVar6 == 0) {
      return 0x34;
    }
    param_1[7] = lVar6;
    param_1[8] = lVar6 + (ulong)*(uint *)(param_1 + 9) * 4;
    lVar6 = param_1[3];
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    __nmemb = 0;
  }
  else {
    uVar8 = 0;
    do {
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
      uVar7 = (uint)(*(float *)(lVar6 + 0x28 + uVar8 * 4) * 0.001 * fVar15);
      uVar7 = (~uVar7 & 1) + uVar7;
      uVar4 = (ulong)uVar7;
      puVar10 = (uint *)((long)param_1 + uVar8 * 4 + 0x58);
      *puVar10 = uVar7;
      if (2 < (int)SQRT((double)uVar4)) {
        do {
          uVar11 = 3;
          while( true ) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar7 / uVar11;
            }
            uVar3 = uVar3 * uVar11;
            uVar11 = uVar11 + 2;
            if (uVar7 == uVar3) break;
            if ((int)SQRT((double)uVar4) < (int)uVar11) goto LAB_033ecf98;
          }
          uVar7 = uVar7 + 2;
          *puVar10 = uVar7;
        } while( true );
      }
LAB_033ecf98:
      __nmemb = (size_t)*(uint *)(lVar6 + 0x18);
      uVar8 = uVar8 + 1;
    } while (uVar8 < __nmemb);
  }
  qsort(param_1 + 0xb,__nmemb,4,(__compar_fn_t)&LAB_033f3ff0);
  if (3 < *(uint *)(param_1[3] + 0x18)) {
    piVar12 = (int *)((long)param_1 + 100);
    lVar6 = 0x2b;
    plVar13 = param_1 + 0x23;
    plVar14 = param_1 + 0x16;
    do {
      iVar2 = *piVar12;
      lVar5 = (**(code **)(*(long *)param_1[4] + 0x10))
                        ((long *)param_1[4],(ulong)(uint)(iVar2 << 2) << 2,
                         "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkFDNReverb/AkFDNReverbFX.cpp"
                         ,0x1be);
      *plVar13 = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      plVar13[4] = lVar5;
      plVar13[8] = lVar5 + (ulong)(uint)(iVar2 << 2) * 4;
      plVar14[-3] = lVar5 + (ulong)(uint)((iVar2 - piVar12[-3]) * 4) * 4;
      plVar14[-2] = *plVar13 + (ulong)((iVar2 - piVar12[-2]) * 4 | 1) * 4;
      uVar8 = lVar6 - 0x2a;
      lVar6 = lVar6 + 1;
      plVar14[-1] = *plVar13 + (ulong)((iVar2 - piVar12[-1]) * 4 | 2) * 4;
      *plVar14 = *plVar13 + 0xc;
      piVar12 = piVar12 + 4;
      plVar13 = plVar13 + 1;
      plVar14 = plVar14 + 4;
    } while (uVar8 < *(uint *)(param_1[3] + 0x18) >> 2);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1[3] + 0x68) = 0;
  return 1;
}


