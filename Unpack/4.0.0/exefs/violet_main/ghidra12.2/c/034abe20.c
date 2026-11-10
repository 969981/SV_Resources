/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034abe20; name: FUN_034abe20
 */


uint FUN_034abe20(long param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_28;
  
  lVar5 = DAT_048b0280;
  if (*(long *)(param_1 + 0x90) == 0) {
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x5000)) {
      if (*(long *)(&DAT_00005010 + lVar5) != 0) goto LAB_034abf08;
    }
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x5018);
    if (lVar5 != 0) {
      lVar6 = 0;
      *(undefined8 *)(lVar5 + 0x5000) = 0;
      lVar8 = 0;
      uVar7 = 0;
      *(undefined4 *)(&DAT_00005008 + lVar5) = 0;
      *(undefined8 *)(&DAT_00005010 + lVar5) = 0;
      do {
        plVar11 = (long *)(lVar5 + lVar6);
        lVar6 = lVar6 + 0x280;
        *plVar11 = lVar8;
        plVar11[0x28] = (long)(plVar11 + 0x14);
        uVar9 = uVar7 | 3;
        uVar7 = uVar7 + 4;
        lVar8 = lVar5 + uVar9 * 0xa0;
        plVar11[0x14] = (long)plVar11;
        plVar11[0x3c] = (long)(plVar11 + 0x28);
      } while (lVar6 != 0x5000);
      *(long *)(&DAT_00005010 + lVar5) = lVar5 + 0x4f60;
      *(undefined4 *)(&DAT_00005008 + lVar5) = 0x80;
      if (DAT_048b0280 == 0) {
        DAT_048b0280 = lVar5;
        *(undefined8 *)(lVar5 + 0x5000) = 0;
      }
      else {
        *(long *)(lVar5 + 0x5000) = DAT_048b0280;
        DAT_048b0280 = lVar5;
      }
LAB_034abf08:
      plVar11 = *(long **)(&DAT_00005010 + lVar5);
      if (plVar11 != (long *)0x0) {
        if (*plVar11 == 0) {
          *(undefined8 *)(&DAT_00005010 + lVar5) = 0;
        }
        else {
          *(long *)(&DAT_00005010 + lVar5) = *plVar11;
        }
        *(int *)(&DAT_00005008 + lVar5) = *(int *)(&DAT_00005008 + lVar5) + -1;
        plVar10 = plVar11 + 3;
        *plVar10 = (long)&PTR_FUN_047c4370;
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = 0;
        *(undefined4 *)(plVar11 + 6) = 0;
        *(undefined4 *)(plVar11 + 7) = 0;
        *(undefined1 *)(plVar11 + 8) = 0xff;
        *(undefined1 *)(plVar11 + 9) = 0xff;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        *(undefined4 *)(plVar11 + 0x11) = 0;
        plVar11[0xc] = 0;
        plVar11[0xd] = 0;
        plVar11[5] = 0;
        *(undefined4 *)(plVar11 + 0xe) = 0;
        plVar11[0x12] = 0;
        *(byte *)(plVar11 + 0x13) = *(byte *)(plVar11 + 0x13) & 0xfc | 1;
        *(long **)(param_1 + 0x90) = plVar11;
        sVar2 = FUN_034ac08c(param_1,0);
        uVar3 = *(uint *)(param_1 + 0xda);
        plVar11[5] = 0;
        *(undefined4 *)(plVar11 + 6) = 0;
        *(undefined4 *)(plVar11 + 7) = 0;
        *(short *)(plVar11 + 0xe) = sVar2;
        *(undefined1 *)(plVar11 + 8) = 0xff;
        *(undefined1 *)(plVar11 + 9) = 0xff;
        plVar11[10] = 0;
        *(byte *)((long)plVar11 + 0x72) = (byte)(uVar3 >> 10) & 1;
        *(byte *)((long)plVar11 + 0x73) = (byte)(uVar3 >> 0xb) & 1;
        if ((param_1 != 0) && (sVar2 != 0)) {
          local_28 = 0x10000;
          FUN_034a9bb0(param_1 + 0x38,plVar10,&local_28);
          FUN_034be3a4(plVar10,param_1);
        }
        uVar4 = 0xffffffff;
        lVar5 = param_1;
        do {
          lVar5 = *(long *)(lVar5 + 0x98);
          uVar4 = uVar4 + 1;
        } while (lVar5 != 0);
        uVar7 = 0x4000000000000000;
        if ((*(uint *)(param_1 + 0xda) & 0x20000) != 0) {
          uVar7 = 0x2000000000000000;
        }
        uVar1 = *(uint *)(param_1 + 0x18);
        plVar11[0x12] = 0;
        plVar11[0x10] = uVar7 | (ulong)uVar4 << 0x20 | (ulong)uVar1;
        *(byte *)(plVar11 + 0x13) = *(byte *)(plVar11 + 0x13) & 0xfe | (byte)(uVar3 >> 0xe) & 1;
        if (*(long *)(param_1 + 0xa0) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = FUN_034abe20();
        }
        if (*(long *)(param_1 + 0x98) != 0) {
          uVar4 = FUN_034abe20();
          uVar3 = uVar3 & uVar4;
        }
        goto LAB_034ac074;
      }
    }
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    uVar3 = 1;
  }
LAB_034ac074:
  return uVar3 & 1;
}


