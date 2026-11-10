/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e70e4; name: FUN_034e70e4
 */


undefined8 FUN_034e70e4(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  
  DAT_048b07a8 = 0;
  DAT_048b07ac = 0;
  DAT_048b0778 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x800);
  if (DAT_048b0778 == (undefined8 *)0x0) {
    uVar6 = 0x34;
  }
  else {
    uVar7 = 0;
    DAT_048b0780 = 0x40;
    puVar5 = DAT_048b0778;
    DAT_048b0770 = DAT_048b0778;
    do {
      puVar3 = puVar5;
      *puVar3 = puVar3 + 4;
      puVar4 = PTR_DAT_047e6ce8;
      uVar7 = uVar7 + 1;
      puVar5 = puVar3 + 4;
    } while (uVar7 < DAT_048b0780);
    *puVar3 = 0;
    uVar1 = *(uint *)(puVar4 + 0x18);
    uVar7 = *(uint *)(PTR_DAT_047e6c18 + 0xa0);
    fVar8 = ((float)(uVar1 & 0xffff) * 1000.0) / (float)uVar7;
    DAT_048b07e0 = 0;
    *(uint *)PTR_DAT_047e6fa0 = uVar7;
    uVar7 = (uVar7 << 7) / 48000 + 3 & 0x3fffc;
    *(uint *)PTR_DAT_047e7318 = uVar7;
    puVar4 = PTR_DAT_047e6fc0;
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (undefined2)(((uVar7 >> 1) + (uVar1 & 0xffff)) / uVar7);
    }
    *(uint *)PTR_DAT_047e6d08 = uVar1;
    *(int *)puVar4 = (int)fVar8;
    *(int *)PTR_DAT_047e7320 = (int)(fVar8 * 0.25);
    *(undefined2 *)PTR_DAT_047e7208 = uVar2;
    nn::os::InitializeEvent(PTR_DAT_047e6fe8,0,1);
    uVar6 = FUN_034ec85c();
    if ((int)uVar6 != 2) {
      uVar6 = FUN_03513d3c(PTR_DAT_047e6970);
      return uVar6;
    }
  }
  return uVar6;
}


