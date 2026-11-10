/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01900620; name: FUN_01900620
 */


void FUN_01900620(undefined8 param_1,long param_2,ushort param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (param_3 == 0) {
    local_58[0] = 0x10407;
    goto LAB_019007e4;
  }
  uVar4 = FUN_007e6070();
  if ((uVar4 & 1) == 0) {
    local_58[0] = 0x1040c;
    goto LAB_019007e4;
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    local_58[0] = 0x10402;
    goto LAB_019007e4;
  }
  uVar5 = FUN_0078a12c();
  puVar6 = (undefined8 *)FUN_007bf9f0(0x40,uVar5);
  if (puVar6 == (undefined8 *)0x0) {
LAB_0190071c:
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_0078f9d4();
    puVar6[3] = 0;
    puVar6[4] = 0;
    FUN_0078f9d4();
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0;
    *(undefined8 **)(param_2 + 0x68) = puVar6;
    puVar3 = PTR_DAT_047d0860;
    uVar2 = (uint)param_3 * (*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1) * 0x5c0;
    uVar5 = FUN_0078a12c();
    puVar6 = (undefined8 *)FUN_007bf9f0((ulong)uVar2,uVar5);
    if (puVar6 == (undefined8 *)0x0 || uVar2 == 0) {
      *(undefined8 **)(param_2 + 0x60) = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        *(undefined8 *)(param_2 + 0x60) = 0;
        if (*(long *)(param_2 + 0x68) != 0) {
          FUN_007bfaa0();
          goto LAB_0190071c;
        }
        goto LAB_019007d4;
      }
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)((long)puVar6 + uVar4) = 0;
        uVar4 = uVar4 + 4;
      } while (uVar2 != uVar4);
      *(undefined8 **)(param_2 + 0x60) = puVar6;
    }
    uVar2 = (*(ushort *)(*(long *)puVar3 + 0x50) - 1) * (uint)param_3;
    if (uVar2 != 0) {
      lVar7 = *(long *)(param_2 + 0x68);
      *(undefined8 **)(lVar7 + 0x30) = puVar6;
      *(uint *)(lVar7 + 0x38) = uVar2;
      *puVar6 = 0;
      puVar6[1] = 0;
      lVar1 = lVar7 + 0x18;
      FUN_0078f9e0(lVar1,lVar1,(long)*(int *)(lVar7 + 0x2c) + (long)puVar6);
      if (uVar2 != 1) {
        lVar8 = (ulong)uVar2 - 1;
        lVar9 = 0x5c0;
        do {
          puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar9);
          *puVar6 = 0;
          puVar6[1] = 0;
          FUN_0078f9e0(lVar1,lVar1,(long)*(int *)(lVar7 + 0x2c) + (long)puVar6);
          lVar9 = lVar9 + 0x5c0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      local_58[0] = 0;
      *(ushort *)(PTR_DAT_047d0868 + 0x398) = param_3;
      goto LAB_019007e4;
    }
  }
LAB_019007d4:
  local_58[0] = 0x10401;
  *(undefined8 *)(param_2 + 0x68) = 0;
LAB_019007e4:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


