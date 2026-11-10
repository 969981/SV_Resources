/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cc408; name: FUN_034cc408
 */


undefined8 FUN_034cc408(float param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x28);
  uVar1 = *(uint *)(param_2 + 0x48);
  uVar2 = *(ushort *)(lVar7 + 0x38);
  uVar6 = (ulong)uVar2;
  uVar5 = (uint)uVar2;
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
LAB_034cc4f0:
      *(undefined1 *)(param_2 + 0xc4) = 0;
      return 0;
    }
    pfVar3 = (float *)(*(long *)(lVar7 + 0x20) + 0x20);
    pfVar4 = (float *)(*(long *)(param_2 + 0x40) + 0x20);
    do {
      if (param_1 * param_1 <
          (pfVar3[-2] - pfVar4[-2]) * (pfVar3[-2] - pfVar4[-2]) +
          (pfVar3[-1] - pfVar4[-1]) * (pfVar3[-1] - pfVar4[-1]) +
          (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4)) {
        *(undefined1 *)(param_2 + 0xc4) = 1;
        break;
      }
      uVar6 = uVar6 - 1;
      pfVar3 = pfVar3 + 10;
      pfVar4 = pfVar4 + 9;
    } while (uVar6 != 0);
  }
  else {
    *(undefined1 *)(param_2 + 0xc4) = 1;
    if ((uVar1 <= uVar2) && (*(uint *)(param_2 + 0x4c) < uVar5)) {
      uVar1 = *(uint *)(param_2 + 0x4c) + (uVar5 - uVar1);
      lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)(param_2 + 0x40),(ulong)uVar1 * 0x24);
      if (lVar9 == 0) goto LAB_034cc4f0;
      *(long *)(param_2 + 0x40) = lVar9;
      *(uint *)(param_2 + 0x4c) = uVar1;
    }
    *(uint *)(param_2 + 0x48) = (uint)uVar2;
  }
  if (uVar5 != 0 && *(char *)(param_2 + 0xc4) != '\0') {
    lVar8 = 0;
    lVar9 = 0;
    do {
      memcpy((void *)(*(long *)(param_2 + 0x40) + lVar8),(void *)(*(long *)(lVar7 + 0x20) + lVar9),
             0x24);
      lVar9 = lVar9 + 0x28;
      lVar8 = lVar8 + 0x24;
    } while ((ulong)uVar5 * 0x28 != lVar9);
  }
  return 1;
}


