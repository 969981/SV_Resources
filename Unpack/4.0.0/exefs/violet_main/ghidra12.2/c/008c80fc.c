/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c80fc; name: FUN_008c80fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_008c80fc(undefined1 *param_1,undefined8 param_2,long param_3,long param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 *local_18;
  
  *(long *)(param_1 + 0x78) = param_3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0x10);
  *(long *)(param_1 + 0x238) = param_4;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  if (*(char *)(*(long *)(param_4 + 0x10) + 0x75b) == '\0') {
    uVar13 = 0x3f800000;
    if (*(char *)(*(long *)(param_4 + 0x10) + 0x75c) != '\0') {
      uVar13 = 0;
    }
  }
  else {
    uVar13 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar13;
  uVar8 = _UNK_03cabe68;
  uVar7 = _DAT_03cabe60;
  uVar6 = DAT_03cab628;
  uVar5 = DAT_03cab620;
  uVar4 = _UNK_03caa5b8;
  uVar15 = _DAT_03caa5b0;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 1;
  *(undefined8 *)(param_1 + 0x348) = uVar6;
  *(undefined8 *)(param_1 + 0x340) = uVar5;
  *(undefined8 *)(param_1 + 0x358) = uVar8;
  *(undefined8 *)(param_1 + 0x350) = uVar7;
  *(undefined8 *)(param_1 + 0x368) = uVar4;
  *(undefined8 *)(param_1 + 0x360) = uVar15;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x388) = uVar6;
  *(undefined8 *)(param_1 + 0x380) = uVar5;
  *(undefined8 *)(param_1 + 0x398) = uVar8;
  *(undefined8 *)(param_1 + 0x390) = uVar7;
  *(undefined8 *)(param_1 + 0x3a8) = uVar4;
  *(undefined8 *)(param_1 + 0x3a0) = uVar15;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if ((((*(char *)(param_4 + 4) == '\0') || (*(char *)(*(long *)(param_4 + 0x10) + 0x7e4) != '\0'))
      || (*(long *)(param_4 + 0x338) == 0)) || ((*(uint *)(param_4 + 0x330) & 0xfffffffe) != 2)) {
    if (*(long *)(param_4 + 0x90) != 0) {
      *(long *)(param_1 + 0x240) = *(long *)(param_4 + 0x90);
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_4 + 0x98);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_4 + 0xa0);
      *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_4 + 0xb8);
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_4 + 200);
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_4 + 0xd8);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_4 + 0xe0);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_4 + 0xe8);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_4 + 0xf0);
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_4 + 0xf8);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_4 + 0x100);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_4 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x60) = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = *(undefined1 *)(param_4 + 4);
    *(undefined2 *)(param_1 + 2) = 0x101;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x6bc) = 0x100;
    param_1[10] = 1;
    *param_1 = uVar2;
    puVar10 = (uint *)FUN_008d9cb8();
    cVar3 = *(char *)(*(long *)(param_1 + 0xa0) + 0x757);
    if (cVar3 == '\x02') {
      uVar9 = *(int *)(*(long *)(param_1 + 0xa0) + 0x760) * -0x2023e3cb;
LAB_008c8318:
      FUN_008d9f7c(param_1 + 0xa8,uVar9);
    }
    else {
      if (cVar3 == '\x01') {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x78) + 0x34);
        goto LAB_008c8318;
      }
      if (cVar3 == '\0') {
        uVar9 = *puVar10 ^ *puVar10 << 0xb;
        uVar1 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
        puVar10[2] = uVar1;
        puVar10[3] = uVar9;
        goto LAB_008c8318;
      }
    }
    uVar11 = FUN_008c8388(param_1,param_2,param_7);
    if ((uVar11 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar15 = *(undefined8 *)(lVar12 + 0x90);
      *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(lVar12 + 0x98);
      *(undefined8 *)(param_1 + 0x3c0) = uVar15;
      *(undefined8 *)(param_1 + 0x3d8) = 0;
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      auVar14 = NEON_fmov(0x3f800000,4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar12 + 0x2c);
      *(long *)(param_1 + 0x428) = auVar14._8_8_;
      *(long *)(param_1 + 0x420) = auVar14._0_8_;
      *(long *)(param_1 + 0x438) = auVar14._8_8_;
      *(long *)(param_1 + 0x430) = auVar14._0_8_;
      local_18 = param_1;
      uVar9 = FUN_008c7e10(&local_18);
      goto LAB_008c8374;
    }
  }
  else {
    FUN_008d43e0("Lightweight child emitter and history based stripe cannot be combined.\n");
    FUN_008d43d0(param_1,0x20000);
  }
  uVar9 = 0;
  param_1[6] = 1;
LAB_008c8374:
  return uVar9 & 1;
}


