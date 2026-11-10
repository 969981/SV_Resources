/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dc2d8; name: FUN_007dc2d8
 */


undefined8 FUN_007dc2d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong local_88;
  undefined4 local_80;
  int local_78 [8];
  undefined4 local_58 [2];
  
  puVar2 = PTR_DAT_047d0a08;
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = *(long *)PTR_DAT_047d0a08 + 0x178;
  uVar7 = FUN_007e5328(lVar1);
  uVar3 = FUN_007e5330(lVar1);
  uVar4 = FUN_007e5310(lVar1);
  uVar5 = FUN_007e531c(lVar1);
  FUN_007e5304(local_78,lVar1);
  lVar8 = FUN_007d6b54(uVar10,uVar7,uVar3,uVar4,uVar5 & 1,local_78,1,0,0);
  if (lVar8 == 0) {
    local_78[0] = 0x10408;
    local_88 = local_88 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)&local_88);
    FUN_018ff39c(param_1 + 0x68,local_78);
  }
  else {
    lVar11 = *(long *)puVar2;
    uVar7 = FUN_007cddf0(lVar11);
    FUN_007e1ab4(lVar8,uVar7);
    FUN_007e1bc4(lVar8,lVar1);
    *(undefined1 *)(lVar8 + 0x358) = 0;
    if (*(char *)(lVar11 + 0x458) != '\0') {
      uVar13 = 0;
      lVar12 = lVar11 + 0x1f8;
      do {
        FUN_007e1bf8(lVar8,lVar12);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x98;
      } while (uVar13 < *(byte *)(lVar11 + 0x458));
    }
    if (*(char *)(lVar11 + 0x459) == '\0') {
      uVar9 = 1;
    }
    else {
      uVar9 = *(undefined1 *)(lVar8 + 0x358);
    }
    *(undefined1 *)(lVar8 + 0x359) = uVar9;
    *(undefined2 *)(lVar8 + 0xf0) = 0;
    lVar11 = *(long *)puVar2;
    FUN_007e5350(lVar8 + 0x90,*(undefined4 *)(lVar11 + 0x158),*(undefined1 *)(lVar11 + 0x171));
    uVar4 = FUN_007d7188(*(undefined8 *)(param_1 + 0x58));
    puVar2 = PTR_DAT_047d0860;
    uVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    FUN_007e3854(uVar7,lVar8,uVar4);
    FUN_007e0448(*(undefined8 *)PTR_DAT_047d11a0,lVar8,uVar4);
    lVar11 = *(long *)puVar2;
    uVar7 = FUN_007e5328(lVar1);
    uVar6 = FUN_007e5330(lVar1);
    uVar10 = FUN_007e5328(lVar1);
    FUN_007ecab0(local_78,lVar11 + 0x10,uVar4,uVar7,uVar6,uVar10);
    if (local_78[0] == 0) {
      FUN_007d71d0(*(undefined8 *)(param_1 + 0x58),uVar4);
      FUN_007e56ec(*(long *)(param_1 + 0x58) + 0x180);
      *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x780) = 1;
      *(undefined1 *)(lVar8 + 0x3a) = 2;
      local_88 = 0x10000000000;
      local_80 = 0;
      FUN_007f72e0(*(undefined8 *)puVar2,&local_88);
      local_88 = local_88 & 0xffffffff00000000;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_58);
      FUN_018ff39c(param_1 + 0x68,&local_88);
      puVar2 = PTR_DAT_047d0868;
      *(undefined8 *)(PTR_DAT_047d0868 + 0x3a8) = 0xffffffffffffffff;
      puVar2[0x3c0] = 0;
      uVar3 = FUN_007e5330(lVar1);
      *(undefined2 *)(puVar2 + 0x3c2) = uVar3;
      puVar2[0x3a6] = 1;
    }
    else {
      local_88 = CONCAT44(local_88._4_4_,0x10408);
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_58);
      FUN_018ff39c(param_1 + 0x68,&local_88);
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d13a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "CreateMeshJob::ProcessSendMonitoringData";
  return 0;
}


