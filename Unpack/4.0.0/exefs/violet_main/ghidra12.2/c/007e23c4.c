/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e23c4; name: FUN_007e23c4
 */


void FUN_007e23c4(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  uVar2 = param_3 * 0x370;
  uVar7 = (ulong)param_3;
  uVar3 = FUN_0078a12c();
  puVar4 = (undefined8 *)FUN_007bf9f0((ulong)uVar2,uVar3);
  if ((uVar2 == 0) || (puVar4 == (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0xe8) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      local_58[0] = 0x10401;
      goto LAB_007e25ac;
    }
  }
  else {
    uVar6 = 0;
    do {
      *(undefined4 *)((long)puVar4 + uVar6) = 0;
      uVar6 = uVar6 + 4;
    } while (uVar2 != uVar6);
    *(undefined8 **)(param_2 + 0xe8) = puVar4;
  }
  puVar1 = (undefined8 *)(param_2 + 0xa8);
  if (param_3 != 0) {
    *(undefined8 **)(param_2 + 0xd8) = puVar4;
    lVar5 = param_2 + 0xc0;
    *(uint *)(param_2 + 0xe0) = param_3;
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_0078f9e0(lVar5,lVar5,(long)*(int *)(param_2 + 0xd4) + (long)puVar4);
    if (param_3 != 1) {
      lVar8 = uVar7 - 1;
      lVar10 = 0x370;
      do {
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0xd8) + lVar10);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_0078f9e0(lVar5,lVar5,(long)*(int *)(param_2 + 0xd4) + (long)puVar4);
        lVar10 = lVar10 + 0x370;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  if (*(undefined8 **)(param_2 + 0xb0) != puVar1) {
    puVar4 = *(undefined8 **)(param_2 + 0xb0);
    do {
      puVar9 = (undefined8 *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_0078fa04(param_2 + 0xc0,param_2 + 0xc0,(long)*(int *)(param_2 + 0xd4) + (long)puVar4);
      puVar4 = puVar9;
    } while (puVar9 != puVar1);
  }
  FUN_0078f9d4(puVar1);
  if (param_3 != 0) {
    do {
      if (*(int *)(param_2 + 0xd0) == 0) {
        lVar5 = 0;
      }
      else {
        lVar10 = FUN_0078fac8(param_2 + 0xc0);
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar10 - *(int *)(param_2 + 0xd4);
        }
        lVar5 = lVar10 + 0x10;
        FUN_007e18ac(lVar5);
        FUN_0078f9e0(puVar1,puVar1,lVar10);
      }
      FUN_007e1a40(local_58,lVar5);
      uVar2 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  puVar4 = *(undefined8 **)(param_2 + 0xb0);
  if (puVar4 != puVar1) {
    do {
      lVar5 = FUN_0078fac8(param_2 + 0x70);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar5 - *(int *)(param_2 + 0x84);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      FUN_0078f9e0(param_2 + 0x58,param_2 + 0x58,lVar5);
      *(undefined8 **)(lVar5 + 0x10) = puVar4 + 2;
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != puVar1);
  }
  local_58[0] = 0;
LAB_007e25ac:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


