/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cbb40; name: FUN_007cbb40
 */


void FUN_007cbb40(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  *(uint *)(param_2 + 0xa0) = (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  if (param_3 == 0) {
    local_50[0] = 0x10407;
    goto LAB_007cbcec;
  }
  uVar3 = FUN_007e6070();
  if ((uVar3 & 1) == 0) {
    local_50[0] = 0x1040c;
    goto LAB_007cbcec;
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    local_50[0] = 0x10402;
    goto LAB_007cbcec;
  }
  uVar4 = FUN_0078a12c();
  puVar5 = (undefined8 *)FUN_007bf9f0(0x40,uVar4);
  if (puVar5 == (undefined8 *)0x0) {
LAB_007cbcd8:
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else {
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar7 = puVar5 + 3;
    *puVar7 = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    FUN_0078f9d4();
    *puVar7 = 0;
    puVar5[4] = 0;
    FUN_0078f9d4(puVar7);
    puVar5[6] = 0;
    uVar2 = param_3 * 0x5c0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    *(undefined8 **)(param_2 + 0x68) = puVar5;
    uVar4 = FUN_0078a12c();
    puVar5 = (undefined8 *)FUN_007bf9f0((ulong)uVar2,uVar4);
    if ((uVar2 == 0) || (puVar5 == (undefined8 *)0x0)) {
      *(undefined8 **)(param_2 + 0x60) = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)(param_2 + 0x60) = 0;
        if (*(long *)(param_2 + 0x68) != 0) {
          FUN_007bfaa0();
          goto LAB_007cbcd8;
        }
        goto LAB_007cbcdc;
      }
    }
    else {
      uVar3 = 0;
      do {
        *(undefined4 *)((long)puVar5 + uVar3) = 0;
        uVar3 = uVar3 + 4;
      } while (uVar2 != uVar3);
      *(undefined8 **)(param_2 + 0x60) = puVar5;
    }
    lVar8 = *(long *)(param_2 + 0x68);
    *(undefined8 **)(lVar8 + 0x30) = puVar5;
    *(uint *)(lVar8 + 0x38) = param_3;
    *puVar5 = 0;
    puVar5[1] = 0;
    lVar1 = lVar8 + 0x18;
    FUN_0078f9e0(lVar1,lVar1,(long)*(int *)(lVar8 + 0x2c) + (long)puVar5);
    if (param_3 != 1) {
      lVar6 = (ulong)param_3 - 1;
      lVar9 = 0x5c0;
      do {
        puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar9);
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_0078f9e0(lVar1,lVar1,(long)*(int *)(lVar8 + 0x2c) + (long)puVar5);
        lVar9 = lVar9 + 0x5c0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      local_50[0] = 0;
      goto LAB_007cbcec;
    }
  }
LAB_007cbcdc:
  local_50[0] = 0x10401;
  *(undefined8 *)(param_2 + 0x68) = 0;
LAB_007cbcec:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


