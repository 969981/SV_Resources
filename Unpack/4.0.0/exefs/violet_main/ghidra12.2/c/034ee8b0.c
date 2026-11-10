/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ee8b0; name: FUN_034ee8b0
 */


int FUN_034ee8b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if ((*(int *)(lVar9 + 0x2c8) != 0) && (DAT_048b0840 != 0)) {
    lVar8 = (ulong)DAT_048b0840 << 3;
    plVar7 = DAT_048b0838;
    do {
      lVar6 = *plVar7;
      lVar1 = 0;
      if (*(long *)(lVar6 + 8) != 0) {
        lVar1 = *(long *)(lVar6 + 8) + -0x18;
      }
      if ((*(int *)(lVar1 + 0x2c8) == *(int *)(lVar9 + 0x2c8)) && (*(long *)(lVar6 + 0x120) == 0)) {
        FUN_0350ca28(lVar6,lVar9,0);
        *(byte *)(lVar9 + 0x2ba) = *(byte *)(lVar9 + 0x2ba) & 0x9f | 0x18;
        return 5;
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x198);
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(lVar9 + 0x250) = 0;
    FUN_034e8708(0,lVar9,4,1);
    iVar5 = 2;
  }
  else {
    plVar7[2] = -0x3a80000000000000;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    puVar4 = PTR_DAT_047e7418;
    *(byte *)(plVar7 + 10) = *(byte *)(plVar7 + 10) & 0xf8 | 1;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = 0;
    plVar7[0xb] = (long)(puVar4 + 0xa8);
    plVar7[0xd] = (long)(PTR_DAT_047e7420 + 0x10);
    plVar7[0xe] = 0;
    memset(plVar7 + 0xf,0,0x48);
    uVar3 = *(undefined2 *)PTR_DAT_047e7208;
    *(undefined4 *)((long)plVar7 + 0xc3) = 0x1010101;
    *(undefined4 *)((long)plVar7 + 0xd3) = 0x1010101;
    puVar4 = PTR_DAT_047e7428;
    *(undefined1 *)((long)plVar7 + 0xc2) = 0;
    plVar7[0x19] = 0;
    *(undefined1 *)((long)plVar7 + 0xd2) = 0;
    *(undefined4 *)(plVar7 + 0x1b) = 0;
    plVar7[0x1e] = 0;
    plVar7[0x1f] = 0;
    *(undefined2 *)(plVar7 + 0x18) = uVar3;
    *(undefined2 *)(plVar7 + 0x1a) = uVar3;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x20] = (long)(puVar4 + 0x10);
    plVar7[0x21] = 0;
    plVar7[0x22] = 0;
    *(byte *)(plVar7 + 0x2a) = *(byte *)(plVar7 + 0x2a) & 0xfc;
    *(undefined4 *)(plVar7 + 0x26) = 0;
    *(undefined4 *)(plVar7 + 0x2d) = 0;
    plVar7[0x24] = 0;
    plVar7[0x25] = 0;
    plVar7[0x27] = 0;
    plVar7[0x28] = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0x2b00000000;
    *(undefined8 *)((long)plVar7 + 0x16c) = 0;
    *(undefined4 *)(plVar7 + 0x31) = 0;
    *(undefined8 *)((long)plVar7 + 0x18c) = 0x7f7fffff7f7fffff;
    plVar7[0x23] = 0;
    iVar5 = FUN_0350ca28(plVar7,lVar9,1);
    if (iVar5 == 1) {
      iVar5 = FUN_034ee030(plVar7);
      *(ushort *)((long)param_1 + 0xc) =
           *(ushort *)((long)param_1 + 0xc) & 0xfeff | (ushort)(iVar5 == 1) << 8;
    }
    else if (iVar5 == 0x3f) {
      plVar7[0xc] = 0;
      puVar4 = PTR_DAT_047e7400;
      plVar2 = (long *)(PTR_DAT_047e7400 + 8);
      if (*(long *)(PTR_DAT_047e7400 + 8) != 0) {
        plVar2 = (long *)(*(long *)PTR_DAT_047e7400 + 0x60);
      }
      *plVar2 = (long)plVar7;
      *(long **)puVar4 = plVar7;
      iVar5 = 1;
    }
    else {
      FUN_03483f78(plVar7,iVar5 != 3);
    }
  }
  return iVar5;
}


