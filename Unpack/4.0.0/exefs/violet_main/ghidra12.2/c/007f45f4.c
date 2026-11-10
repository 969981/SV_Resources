/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f45f4; name: FUN_007f45f4
 */


void FUN_007f45f4(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  uVar4 = param_4 * 0x18;
  uVar8 = (ulong)uVar4;
  uVar5 = FUN_0078a12c();
  puVar6 = (undefined8 *)FUN_007bf9f0(uVar8,uVar5);
  if ((uVar4 == 0) || (puVar6 == (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 8) = puVar6;
    if (puVar6 != (undefined8 *)0x0) goto LAB_007f465c;
LAB_007f4800:
    local_60[0] = 0x10401;
  }
  else {
    uVar7 = 0;
    do {
      *(undefined4 *)((long)puVar6 + uVar7) = 0;
      uVar7 = uVar7 + 4;
    } while (uVar8 != uVar7);
    *(undefined8 **)(param_2 + 8) = puVar6;
LAB_007f465c:
    puVar1 = (undefined8 *)(param_2 + 0x18);
    if (param_4 != 0) {
      *(undefined8 **)(param_2 + 0x48) = puVar6;
      lVar2 = param_2 + 0x30;
      *(uint *)(param_2 + 0x50) = param_4;
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_0078f9e0(lVar2,lVar2,(long)*(int *)(param_2 + 0x44) + (long)puVar6);
      if (param_4 != 1) {
        lVar9 = 0;
        lVar11 = (ulong)param_4 - 1;
        do {
          lVar3 = *(long *)(param_2 + 0x48) + lVar9;
          puVar6 = (undefined8 *)(lVar3 + 0x18);
          *puVar6 = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          FUN_0078f9e0(lVar2,lVar2,(long)*(int *)(param_2 + 0x44) + (long)puVar6);
          lVar9 = lVar9 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    if (*(undefined8 **)(param_2 + 0x20) != puVar1) {
      puVar6 = *(undefined8 **)(param_2 + 0x20);
      do {
        puVar10 = (undefined8 *)puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_0078fa04(param_2 + 0x30,param_2 + 0x30,(long)*(int *)(param_2 + 0x44) + (long)puVar6);
        puVar6 = puVar10;
      } while (puVar10 != puVar1);
    }
    FUN_0078f9d4(puVar1);
    uVar5 = FUN_0078a12c();
    puVar6 = (undefined8 *)FUN_007bf9f0(uVar8,uVar5);
    if ((uVar4 == 0) || (puVar6 == (undefined8 *)0x0)) {
      *(undefined8 **)(param_2 + 0x10) = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_007f4800;
    }
    else {
      uVar7 = 0;
      do {
        *(undefined4 *)((long)puVar6 + uVar7) = 0;
        uVar7 = uVar7 + 4;
      } while (uVar8 != uVar7);
      *(undefined8 **)(param_2 + 0x10) = puVar6;
    }
    puVar1 = (undefined8 *)(param_2 + 0x58);
    if (param_4 != 0) {
      *(undefined8 **)(param_2 + 0x88) = puVar6;
      lVar2 = param_2 + 0x70;
      *(uint *)(param_2 + 0x90) = param_4;
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_0078f9e0(lVar2,lVar2,(long)*(int *)(param_2 + 0x84) + (long)puVar6);
      if (param_4 != 1) {
        lVar9 = 0;
        lVar11 = (ulong)param_4 - 1;
        do {
          lVar3 = *(long *)(param_2 + 0x88) + lVar9;
          puVar6 = (undefined8 *)(lVar3 + 0x18);
          *puVar6 = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          FUN_0078f9e0(lVar2,lVar2,(long)*(int *)(param_2 + 0x84) + (long)puVar6);
          lVar9 = lVar9 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    if (*(undefined8 **)(param_2 + 0x60) != puVar1) {
      puVar6 = *(undefined8 **)(param_2 + 0x60);
      do {
        puVar10 = (undefined8 *)puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_0078fa04(param_2 + 0x70,param_2 + 0x70,(long)*(int *)(param_2 + 0x84) + (long)puVar6);
        puVar6 = puVar10;
      } while (puVar10 != puVar1);
    }
    FUN_0078f9d4(puVar1);
    local_60[0] = 0;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_60);
  return;
}


