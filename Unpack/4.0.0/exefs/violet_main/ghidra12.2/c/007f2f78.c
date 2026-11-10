/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2f78; name: FUN_007f2f78
 */


void FUN_007f2f78(undefined8 param_1,long *param_2,ushort param_3,undefined2 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((ushort)(param_3 - 1) < 0x18) {
    *(ushort *)((long)param_2 + 0x5a) = param_3;
    *(undefined2 *)PTR_DAT_047d1520 = 500;
    FUN_007935cc(param_2 + 0xd);
    *(undefined2 *)PTR_DAT_047d1528 = param_4;
    uVar3 = FUN_0078a12c();
    uVar8 = (ulong)param_3;
    puVar4 = (undefined8 *)FUN_007bf9f0(uVar8 << 6,uVar3);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      uVar7 = uVar8;
      do {
        *(undefined8 *)((long)puVar6 + 0x2c) = 0;
        uVar7 = uVar7 - 1;
        *(undefined8 *)((long)puVar6 + 0x14) = 0;
        *(undefined8 *)((long)puVar6 + 0x24) = 0;
        *(undefined8 *)((long)puVar6 + 0x1c) = 0;
        *(undefined8 *)((long)puVar6 + 0x34) = 0;
        *(undefined4 *)(puVar6 + 2) = 9;
        *(undefined4 *)((long)puVar6 + 0x3c) = 0;
        *puVar6 = 0;
        puVar6[1] = (undefined8 *)((long)puVar6 + 0x14);
        puVar6 = puVar6 + 8;
      } while (uVar7 != 0);
    }
    param_2[0xc] = (long)puVar4;
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((uVar2 >> 0x10 & 0xff) != 0 && param_3 != 0) {
      puVar5 = (uint *)param_2[0xc];
      do {
        while( true ) {
          uVar2 = puVar5[4];
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = (*puVar5 + puVar5[1]) / uVar2;
          }
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          *(undefined4 *)
           (*(long *)(puVar5 + 2) + (ulong)((*puVar5 + puVar5[1]) - uVar1 * uVar2) * 4) = 0x11;
          uVar2 = *puVar5;
          if (uVar2 != puVar5[4]) break;
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = (puVar5[1] + 1) / uVar2;
          }
          puVar5[1] = (puVar5[1] + 1) - uVar1 * uVar2;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 0x10;
          if (uVar8 == 0) goto LAB_007f30c4;
        }
        *puVar5 = uVar2 + 1;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 0x10;
      } while (uVar8 != 0);
    }
LAB_007f30c4:
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


