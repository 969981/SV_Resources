/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003dcbc0; name: FUN_003dcbc0
 */


undefined8 FUN_003dcbc0(undefined4 *param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x212);
  if (plVar9 == (long *)0x0) {
    param_1[10] = 3;
    goto LAB_003dcd44;
  }
  if ((ulong)plVar9[3] < 4) {
    uVar4 = 0x10f;
    uVar5 = 0x1c;
  }
  else if ((int)plVar9[1] == param_1[0x20c]) {
    lVar3 = FUN_003f3310(*(undefined8 *)(param_1 + 0x22),(long)(int)plVar9[3]);
    if (lVar3 != 0) {
      memcpy(*(void **)(*(long *)(param_1 + 0x22) + 8),
             (void *)(*(long *)(*(long *)(param_1 + 0x210) + 8) + plVar9[2]),plVar9[3]);
      **(long **)(param_1 + 0x22) = plVar9[3];
      lVar3 = *plVar9;
      *(long *)(param_1 + 0x212) = lVar3;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x214) = 0;
      }
      FUN_00452f80(plVar9,"external/openssl/ssl/statem/statem_quic.c",0x36);
      pbVar7 = *(byte **)(*(long *)(param_1 + 0x22) + 8);
      bVar2 = *pbVar7;
      uVar6 = (uint)bVar2;
      *param_2 = (uint)bVar2;
      lVar3 = *(long *)(param_1 + 0x2a);
      *(uint *)(lVar3 + 0x230) = (uint)bVar2;
      uVar8 = (ulong)pbVar7[1] << 0x10 | (ulong)pbVar7[2] << 8 | (ulong)pbVar7[3];
      *param_3 = uVar8;
      *(ulong *)(lVar3 + 0x228) = uVar8;
      *(byte **)(param_1 + 0x24) = pbVar7 + 4;
      *(ulong *)(param_1 + 0x26) = uVar8;
      uVar1 = *param_2;
      if (uVar1 == 0x14) {
        uVar4 = FUN_003cc940(param_1);
        if ((int)uVar4 == 0) goto LAB_003dcdb4;
        uVar6 = *(uint *)(*(long *)(param_1 + 0x2a) + 0x230);
LAB_003dcd70:
        if (uVar6 == 2) {
          uVar8 = *(ulong *)(param_1 + 0x26);
          if (0x25 < uVar8) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x22) + 8);
            if ((*(long *)PTR_DAT_047cd0c8 == *(long *)(lVar3 + 6) &&
                *(long *)(PTR_DAT_047cd0c8 + 8) == *(long *)(lVar3 + 0xe)) &&
                (*(long *)(PTR_DAT_047cd0c8 + 0x10) == *(long *)(lVar3 + 0x16) &&
                *(long *)(PTR_DAT_047cd0c8 + 0x18) == *(long *)(lVar3 + 0x1e))) goto LAB_003dce34;
          }
        }
        else {
          if ((uVar6 == 4) || (uVar6 == 0x18)) goto LAB_003dce34;
          uVar8 = *(ulong *)(param_1 + 0x26);
        }
        uVar4 = FUN_003acec0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),uVar8 + 4);
        if ((int)uVar4 != 0) {
LAB_003dce34:
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            (**(code **)(param_1 + 0x2e))
                      (0,*param_1,0x16,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                       *(long *)(param_1 + 0x26) + 4,param_1,*(undefined8 *)(param_1 + 0x30));
          }
          return 1;
        }
      }
      else {
        if (uVar1 == 0x18) {
          uVar4 = 0xf4;
          uVar5 = 0x49;
        }
        else {
          if (uVar1 != 0x101) goto LAB_003dcd70;
          uVar4 = 0x85;
          uVar5 = 0x42;
        }
        FUN_003c3950(param_1,10,0xbb9,uVar4,"external/openssl/ssl/statem/statem_quic.c",uVar5);
        uVar4 = 0;
      }
LAB_003dcdb4:
      *param_3 = 0;
      return uVar4;
    }
    uVar5 = 0x2b;
    uVar4 = 7;
  }
  else {
    uVar4 = 800;
    uVar5 = 0x24;
  }
  FUN_003c3950(param_1,0x50,0xbb9,uVar4,"external/openssl/ssl/statem/statem_quic.c",uVar5);
LAB_003dcd44:
  *param_3 = 0;
  *param_2 = 0;
  return 0;
}


