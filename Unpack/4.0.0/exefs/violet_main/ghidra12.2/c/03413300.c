/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03413300; name: FUN_03413300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03413300(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  
  FUN_03412c3c(param_1,0xffffffffffffffff);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)param_2 / uVar4;
    }
    for (plVar9 = *(long **)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0xf]) {
      if (plVar9[0xe] == param_2) goto LAB_03413438;
    }
  }
  plVar7 = param_1 + 0xb;
  plVar9 = (long *)FUN_034158b4(plVar7);
  if (plVar9 == (long *)0x0) {
LAB_03413584:
    uVar3 = 0x34;
  }
  else {
    *(undefined1 *)(plVar9 + 0xc) = 1;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    *(undefined8 *)((long)plVar9 + 0x94) = 0x3f8000003f800000;
    plVar9[8] = 0;
    *(undefined1 *)(plVar9 + 9) = 0;
    plVar9[6] = 0;
    *(undefined4 *)(plVar9 + 7) = 0;
    plVar9[0x11] = 0;
    *(undefined4 *)(plVar9 + 0x12) = 0;
    *(undefined8 *)((long)plVar9 + 0x9c) = 0xffffffff3f800000;
    *(undefined4 *)((long)plVar9 + 0xa4) = 0;
    *(undefined1 *)(plVar9 + 0x17) = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = param_2;
    plVar9[0xf] = 0;
    plVar9[0x10] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = -1;
    uVar4 = *(uint *)(param_1 + 1);
    if ((uVar4 == 0) || (fVar10 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar10 / (float)uVar4))
    {
      FUN_03415c0c(param_1);
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 == 0) {
        FUN_0341e9a0(plVar9);
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) {
LAB_03413500:
          if (_DAT_00003010 == (long *)0x0) {
            _DAT_00003010 = plVar9;
            *plVar9 = 0;
          }
          else {
            *plVar9 = (long)_DAT_00003010;
            _DAT_00003010 = plVar9;
          }
          _DAT_00003008 = _DAT_00003008 + 1;
        }
        else {
          if ((plVar9 < plVar5) || (plVar5 + 0x600 <= plVar9)) {
            do {
              plVar8 = plVar5;
              plVar5 = (long *)plVar8[0x600];
              if (plVar5 == (long *)0x0) goto LAB_03413500;
            } while ((plVar9 < plVar5) || (plVar5 + 0x600 <= plVar9));
          }
          else {
            plVar8 = (long *)0x0;
          }
          if (plVar5[0x602] == 0) {
            plVar5[0x602] = (long)plVar9;
            *plVar9 = 0;
          }
          else {
            *plVar9 = plVar5[0x602];
            plVar5[0x602] = (long)plVar9;
          }
          iVar1 = (int)plVar5[0x601] + 1;
          *(int *)(plVar5 + 0x601) = iVar1;
          if (iVar1 == 0x40) {
            if ((long *)*plVar7 != plVar5) {
              plVar7 = plVar8 + 0x600;
            }
            *plVar7 = plVar5[0x600];
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
          }
        }
        goto LAB_03413584;
      }
      param_2 = plVar9[0xe];
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)param_2 / uVar4;
    }
    uVar4 = (uint)param_2 - uVar2 * uVar4;
    plVar9[0xf] = *(long *)(*param_1 + (ulong)uVar4 * 8);
    *(long **)(*param_1 + (ulong)uVar4 * 8) = plVar9;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_03413438:
    if ((plVar9[0x15] == 0) && (lVar6 = param_1[0xf], lVar6 != 0)) {
      plVar9[0x15] = lVar6;
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
      if ((int)plVar9[0xb] != 0) {
        plVar7 = (long *)plVar9[10];
        do {
          plVar5 = plVar7 + 1;
          *(undefined1 *)(*plVar7 + 0x60) = 1;
          plVar7 = plVar5;
        } while (plVar5 != (long *)(plVar9[10] + (ulong)*(uint *)(plVar9 + 0xb) * 8));
      }
    }
    FUN_0341ec54(plVar9,param_3,param_4);
    uVar3 = 1;
  }
  return uVar3;
}


