/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bae10; name: FUN_003bae10
 */


undefined8
FUN_003bae10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long *param_6,long param_7,int param_8,int param_9)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong local_168;
  long local_160 [8];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  uVar5 = FUN_0043b720(param_2);
  if ((int)uVar5 < 0) {
    FUN_003c3950(param_1,0x50,0x1fa,0x44,"external/openssl/ssl/statem/extensions.c",0x5f3);
LAB_003bb064:
    lVar7 = 0;
LAB_003bb08c:
    lVar8 = 0;
  }
  else {
    uVar13 = (ulong)uVar5;
    if (param_9 == 0) {
      bVar4 = false;
      pcVar14 = "res binder";
    }
    else {
      if ((*(int *)(param_1 + 0x84) == 2) && (*(int *)(*(long *)(param_1 + 0x5d0) + 0x23c) == 0)) {
        bVar4 = *(int *)(param_7 + 0x23c) != 0;
      }
      else {
        bVar4 = false;
      }
      pcVar14 = "ext binder";
    }
    lVar8 = param_1 + 0x13c;
    if (!bVar4 && (param_9 != 0 && *(int *)(param_1 + 0x38) == 0)) {
      lVar8 = param_7 + 0x10;
    }
    iVar6 = FUN_003db320(param_1,param_2,0,param_7 + 0x50,*(undefined8 *)(param_7 + 8),lVar8);
    if (iVar6 == 0) goto LAB_003bb064;
    lVar7 = FUN_0042bbc0();
    if (((lVar7 == 0) || (iVar6 = FUN_0042bc40(lVar7,param_2,0), iVar6 < 1)) ||
       (iVar6 = FUN_0042be20(lVar7,auStack_a0,0), iVar6 < 1)) {
      uVar9 = 0x44;
      uVar10 = 0x622;
      goto LAB_003bb084;
    }
    iVar6 = FUN_003daff0(param_1,param_2,lVar8,pcVar14,10,auStack_a0,uVar13,auStack_e0,uVar13,1);
    if ((iVar6 == 0) ||
       (iVar6 = FUN_003db2e0(param_1,param_2,auStack_e0,auStack_120,uVar13), iVar6 == 0))
    goto LAB_003bb08c;
    iVar6 = FUN_0042bc40(lVar7,param_2,0);
    if (iVar6 < 1) {
      uVar9 = 0x44;
      uVar10 = 0x635;
LAB_003bb084:
      FUN_003c3950(param_1,0x50,0x1fa,uVar9,"external/openssl/ssl/statem/extensions.c",uVar10);
      goto LAB_003bb08c;
    }
    if (*(int *)(param_1 + 0x5a0) == 1) {
      lVar8 = FUN_003e9560(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,local_160);
      if (lVar8 < 1) {
        uVar9 = 0x14c;
        uVar10 = 0x647;
      }
      else if (*(int *)(param_1 + 0x38) == 0) {
        iVar6 = FUN_0042bd60(lVar7,local_160[0]);
joined_r0x003bb138:
        if (0 < iVar6) goto LAB_003bb13c;
        uVar9 = 0x44;
        uVar10 = 0x661;
      }
      else {
        if (2 < lVar8 - 1U) {
          uVar11 = (ulong)*(byte *)(local_160[0] + 1) << 0x10 |
                   (ulong)*(byte *)(local_160[0] + 2) << 8 | (ulong)*(byte *)(local_160[0] + 3);
          uVar12 = (lVar8 - 4U) - uVar11;
          if ((uVar11 <= lVar8 - 4U) && (uVar3 = uVar12 - 4, 3 < uVar12)) {
            lVar1 = local_160[0] + uVar11;
            uVar12 = (ulong)*(byte *)(lVar1 + 5) << 0x10 | (ulong)*(byte *)(lVar1 + 6) << 8 |
                     (ulong)*(byte *)(lVar1 + 7);
            if (uVar12 <= uVar3) {
              iVar6 = FUN_0042bd60(lVar7,local_160[0],(lVar8 - uVar3) + uVar12);
              goto joined_r0x003bb138;
            }
          }
        }
        uVar9 = 0x44;
        uVar10 = 0x659;
      }
      goto LAB_003bb084;
    }
LAB_003bb13c:
    iVar6 = FUN_0042bd60(lVar7,param_3,param_4);
    if ((iVar6 < 1) || (iVar6 = FUN_0042be20(lVar7,auStack_a0,0), iVar6 < 1)) {
      uVar9 = 0x44;
      uVar10 = 0x669;
      goto LAB_003bb084;
    }
    lVar8 = FUN_0043dfe0(0x357,0,auStack_120,uVar13);
    if (lVar8 == 0) {
      uVar9 = 0x671;
    }
    else {
      plVar2 = local_160;
      if (param_8 != 0) {
        plVar2 = param_6;
      }
      local_168 = uVar13;
      iVar6 = FUN_0043c900(lVar7,0,param_2,0,lVar8);
      if ((((0 < iVar6) && (iVar6 = FUN_0042bd60(lVar7,auStack_a0,uVar13), 0 < iVar6)) &&
          (iVar6 = FUN_0043caf0(lVar7,plVar2,&local_168), 0 < iVar6)) && (local_168 == uVar13)) {
        if ((param_8 == 0) && (iVar6 = FUN_003f6d80(param_5,plVar2,uVar13), iVar6 != 0)) {
          FUN_003c3950(param_1,0x2f,0x1fa,0xfd,"external/openssl/ssl/statem/extensions.c",0x689);
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        goto LAB_003bb094;
      }
      uVar9 = 0x67e;
    }
    FUN_003c3950(param_1,0x50,0x1fa,0x44,"external/openssl/ssl/statem/extensions.c",uVar9);
  }
  uVar9 = 0xffffffff;
LAB_003bb094:
  FUN_00453300(auStack_e0,0x40);
  FUN_00453300(auStack_120,0x40);
  FUN_0043e1f0(lVar8);
  FUN_0042bbe0(lVar7);
  return uVar9;
}


