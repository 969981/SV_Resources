/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b7364; name: FUN_008b7364
 */


void FUN_008b7364(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 extraout_b0;
  byte bVar7;
  undefined1 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar8 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xda));
  uVar9 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xdc));
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xde));
  uVar11 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xe0));
  local_80 = uVar8;
  uStack_7c = uVar9;
  local_78 = uVar10;
  uStack_74 = uVar11;
  FUN_008a6ea4();
  local_88 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0));
  cVar2 = *(char *)(param_3 + 0x109);
  uStack_84 = param_2;
  if (cVar2 == '\b') {
    FUN_008b8a34(param_3,param_4,&local_88,*(undefined8 *)(param_3 + 0x110),&local_80,
                 *(undefined1 *)(param_3 + 0x5a));
    bVar7 = *(byte *)(param_3 + 0x10a);
  }
  else {
    if (cVar2 == '\x04') {
      FUN_008b8594(param_3,param_4,&local_88,*(undefined8 *)(param_3 + 0x110),&local_80,
                   *(undefined1 *)(param_3 + 0x5a));
    }
    else if (cVar2 == '\x01') {
      FUN_008b7f6c(param_3,param_4,&local_88,*(undefined8 *)(param_3 + 0x110),&local_80,
                   *(undefined1 *)(param_3 + 0x5a));
      bVar7 = *(byte *)(param_3 + 0x10a);
      goto joined_r0x008b7598;
    }
    bVar7 = *(byte *)(param_3 + 0x10a);
  }
joined_r0x008b7598:
  if ((bVar7 >> 2 & 1) == 0) {
    plVar6 = *(long **)(param_3 + 0x118);
    if ((((((((*(byte *)((long)plVar6 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_3 + 0xe8) == -1))
           && (*(char *)(param_3 + 0xe9) == -1)) &&
          ((*(char *)(param_3 + 0xea) == -1 && (*(char *)(param_3 + 0xeb) == -1)))) &&
         ((*(char *)(param_3 + 0xec) == -1 &&
          ((*(char *)(param_3 + 0xed) == -1 && (*(char *)(param_3 + 0xee) == -1)))))) &&
        (*(char *)(param_3 + 0xef) == -1)) &&
       (((((*(char *)(param_3 + 0xf0) == -1 && (*(char *)(param_3 + 0xf1) == -1)) &&
          (*(char *)(param_3 + 0xf2) == -1)) &&
         (((*(char *)(param_3 + 0xf3) == -1 && (*(char *)(param_3 + 0xf4) == -1)) &&
          ((*(char *)(param_3 + 0xf5) == -1 &&
           ((*(char *)(param_3 + 0xf6) == -1 && (*(char *)(param_3 + 0xf7) == -1)))))))) &&
        (*(char *)(param_3 + 0x5a) == -1)))) {
      uVar4 = FUN_008a84d0(param_3);
      uVar3 = FUN_008a84a8(param_3);
      (**(code **)(*plVar6 + 0x20))
                (plVar6,param_4,0xff,1,1,param_3 + 0x70,param_3 + 0x50,param_3 + 0x48,uVar4,uVar3);
      uVar8 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(param_3 + 0x5a);
      uVar4 = FUN_008a84d0(param_3);
      uVar3 = FUN_008a84a8(param_3);
      (**(code **)(*plVar6 + 0x20))
                (plVar6,param_4,uVar1,0,1,param_3 + 0x70,param_3 + 0x50,param_3 + 0x48,uVar4,uVar3);
      bVar7 = *(byte *)(param_3 + 0x10a);
      lVar5 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
      if ((bVar7 & 1) == 0) {
        bVar7 = *(byte *)(param_3 + 0xe8);
        uVar8 = 0;
      }
      else {
        *(undefined4 *)(lVar5 + 0x1b0) = *(undefined4 *)(param_3 + 0x50);
        *(undefined4 *)(lVar5 + 0x1b4) = *(undefined4 *)(param_3 + 0x54);
        *(undefined4 *)(lVar5 + 0x1a0) = uVar8;
        *(undefined4 *)(lVar5 + 0x1a4) = uVar9;
        *(undefined4 *)(lVar5 + 0x1a8) = uVar10;
        *(undefined4 *)(lVar5 + 0x1ac) = uVar11;
        lVar5 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
        bVar7 = *(byte *)(param_3 + 0xe8);
        uVar8 = 0xd00;
      }
      uVar9 = NEON_ucvtf((uint)bVar7);
      *(undefined4 *)(lVar5 + 0x1d0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xe9));
      *(undefined4 *)(lVar5 + 0x1d4) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xea));
      *(undefined4 *)(lVar5 + 0x1d8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xeb));
      *(undefined4 *)(lVar5 + 0x1dc) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xec));
      *(undefined4 *)(lVar5 + 0x1e0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xed));
      *(undefined4 *)(lVar5 + 0x1e4) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xee));
      *(undefined4 *)(lVar5 + 0x1e8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xef));
      *(undefined4 *)(lVar5 + 0x1ec) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf0));
      *(undefined4 *)(lVar5 + 0x1f0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf1));
      *(undefined4 *)(lVar5 + 500) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf2));
      *(undefined4 *)(lVar5 + 0x1f8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf3));
      *(undefined4 *)(lVar5 + 0x1fc) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf4));
      *(undefined4 *)(lVar5 + 0x200) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf5));
      *(undefined4 *)(lVar5 + 0x204) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf6));
      *(undefined4 *)(lVar5 + 0x208) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf7));
      *(undefined4 *)(lVar5 + 0x20c) = uVar9;
    }
    lVar5 = FUN_008a2d6c(*(undefined8 *)(param_3 + 0x118),param_4);
    *(undefined4 *)(lVar5 + 0x22c) = uVar8;
    FUN_008b8efc(param_3,param_4,&local_88,&local_80);
  }
  return;
}


