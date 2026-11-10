/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b7734; name: FUN_008b7734
 */


void FUN_008b7734(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar9 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xda));
  local_78 = 0;
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xdc));
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xde));
  *(undefined4 *)(param_3 + 0x54) = uVar3;
  *(byte *)(param_3 + 0x58) = *(byte *)(param_3 + 0x58) | 0x10;
  local_80 = uVar9;
  uStack_7c = uVar10;
  FUN_008a6ea4();
  local_48 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0));
  uStack_44 = param_2;
  if (*(char *)(param_3 + 0x109) == '\x02') {
    FUN_008b9434(param_3,param_4,&local_48,*(undefined8 *)(param_3 + 0x110),&local_80,
                 *(undefined1 *)(param_3 + 0x5a));
    bVar1 = *(byte *)(param_3 + 0x10a);
  }
  else {
    if (*(char *)(param_3 + 0x109) == '\x01') {
      FUN_008b8ff4(param_3,param_4,&local_48,*(undefined8 *)(param_3 + 0x110),&local_80,
                   *(undefined1 *)(param_3 + 0x5a));
    }
    bVar1 = *(byte *)(param_3 + 0x10a);
  }
  if ((bVar1 >> 2 & 1) == 0) {
    plVar8 = *(long **)(param_3 + 0x118);
    if ((((((((*(byte *)((long)plVar8 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_3 + 0xe8) == -1))
           && (*(char *)(param_3 + 0xe9) == -1)) &&
          ((*(char *)(param_3 + 0xea) == -1 && (*(char *)(param_3 + 0xeb) == -1)))) &&
         ((*(char *)(param_3 + 0xec) == -1 &&
          ((*(char *)(param_3 + 0xed) == -1 && (*(char *)(param_3 + 0xee) == -1)))))) &&
        (*(char *)(param_3 + 0xef) == -1)) &&
       ((((*(char *)(param_3 + 0xf0) == -1 && (*(char *)(param_3 + 0xf1) == -1)) &&
         (*(char *)(param_3 + 0xf2) == -1)) &&
        (((*(char *)(param_3 + 0xf3) == -1 && (*(char *)(param_3 + 0xf4) == -1)) &&
         ((*(char *)(param_3 + 0xf5) == -1 &&
          ((*(char *)(param_3 + 0xf6) == -1 && (*(char *)(param_3 + 0xf7) == -1)))))))))) {
      bVar4 = *(char *)(param_3 + 0x5a) != -1;
    }
    else {
      bVar4 = true;
    }
    uVar2 = *(undefined1 *)(param_3 + 0x5a);
    uVar6 = FUN_008a84d0(param_3);
    uVar5 = FUN_008a84a8(param_3);
    (**(code **)(*plVar8 + 0x20))
              (plVar8,param_4,uVar2,bVar4 ^ 1U,0,param_3 + 0x70,param_3 + 0x50,param_3 + 0x48,uVar6,
               uVar5);
    if ((bVar4 ^ 1U) == 0) {
      lVar7 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
      *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_3 + 0x50);
      *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_3 + 0x54);
      *(undefined4 *)(lVar7 + 0x1a0) = uVar9;
      *(undefined4 *)(lVar7 + 0x1a4) = uVar10;
      *(undefined8 *)(lVar7 + 0x1a8) = 0;
      lVar7 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xe8));
      *(undefined4 *)(lVar7 + 0x1d0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xe9));
      *(undefined4 *)(lVar7 + 0x1d4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xea));
      *(undefined4 *)(lVar7 + 0x1d8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xeb));
      *(undefined4 *)(lVar7 + 0x1dc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xec));
      *(undefined4 *)(lVar7 + 0x1e0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xed));
      *(undefined4 *)(lVar7 + 0x1e4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xee));
      *(undefined4 *)(lVar7 + 0x1e8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xef));
      *(undefined4 *)(lVar7 + 0x1ec) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf0));
      *(undefined4 *)(lVar7 + 0x1f0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf1));
      *(undefined4 *)(lVar7 + 500) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf2));
      *(undefined4 *)(lVar7 + 0x1f8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf3));
      *(undefined4 *)(lVar7 + 0x1fc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf4));
      *(undefined4 *)(lVar7 + 0x200) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf5));
      *(undefined4 *)(lVar7 + 0x204) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf6));
      *(undefined4 *)(lVar7 + 0x208) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf7));
      *(undefined4 *)(lVar7 + 0x20c) = uVar3;
    }
    bVar1 = *(byte *)(param_3 + 0x10a);
    lVar7 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
    *(uint *)(lVar7 + 0x22c) = -(bVar1 & 1) & 0xd00;
    FUN_008b8efc(param_3,param_4,&local_48,&local_80);
  }
  return;
}


