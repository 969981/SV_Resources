/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d30d8; name: FUN_007d30d8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007d30d8(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  lVar5 = (**(code **)(*param_3 + 0xe0))(param_3);
  puVar3 = PTR_DAT_047d0860;
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(*param_3 + 0xe0))(param_3);
    uVar7 = (**(code **)(*plVar6 + 0x160))();
    if ((uVar7 & 1) != 0) {
      if (*(char *)(*(long *)puVar3 + 0x38) == '\0') {
        lVar5 = *(long *)puVar3 + 0x10;
        puVar8 = (undefined8 *)FUN_018ff6bc(lVar5,0x108);
        FUN_007dd72c();
        iVar4 = FUN_018ff788(lVar5,puVar8,0xa0000000);
        if (iVar4 == *(int *)PTR_DAT_047d0e88) {
          (**(code **)*puVar8)(puVar8);
          FUN_018ff540(lVar5,puVar8);
        }
      }
      else {
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x128) = iVar4;
      lVar5 = FUN_00f21488(*(long *)puVar3 + 0x10,iVar4,0xa0);
      *(long *)(param_2 + 0x130) = lVar5;
      *(long *)(lVar5 + 0xf0) = param_2 + 0x60;
    }
  }
  if (*(long *)(param_2 + 0xa0) == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0x78,uVar9);
    if (lVar5 != 0) {
      FUN_007dc200(lVar5,param_2);
    }
    *(long *)(param_2 + 0xa0) = lVar5;
    lVar5 = *(long *)(param_2 + 0xa8);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xa8);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xb0,uVar9);
    if (lVar5 != 0) {
      FUN_007d9f4c(lVar5,param_2);
    }
    *(long *)(param_2 + 0xa8) = lVar5;
    lVar5 = *(long *)(param_2 + 0xb0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xb0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0x78,uVar9);
    if (lVar5 != 0) {
      FUN_007db4bc(lVar5,param_2);
    }
    *(long *)(param_2 + 0xb0) = lVar5;
    lVar5 = *(long *)(param_2 + 0xb8);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xb8);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xe0,uVar9);
    if (lVar5 != 0) {
      FUN_007deae4(lVar5,param_2);
    }
    *(long *)(param_2 + 0xb8) = lVar5;
    lVar5 = *(long *)(param_2 + 0xc0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xc0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xf8,uVar9);
    if (lVar5 != 0) {
      FUN_007db914(lVar5,param_2);
    }
    *(long *)(param_2 + 0xc0) = lVar5;
    lVar5 = *(long *)(param_2 + 200);
  }
  else {
    lVar5 = *(long *)(param_2 + 200);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0x2b8,uVar9);
    if (lVar5 != 0) {
      FUN_007dc6ac(lVar5,param_2);
    }
    *(long *)(param_2 + 200) = lVar5;
    lVar5 = *(long *)(param_2 + 0xd0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xd0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xa0,uVar9);
    if (lVar5 != 0) {
      FUN_007dcf68(lVar5);
    }
    *(long *)(param_2 + 0xd0) = lVar5;
    uVar2 = *(ushort *)(*(long *)puVar3 + 0x50);
    lVar5 = *(long *)(param_2 + 0x130);
  }
  else {
    uVar2 = *(ushort *)(*(long *)puVar3 + 0x50);
    lVar5 = *(long *)(param_2 + 0x130);
  }
  uVar7 = (ulong)uVar2;
  if (lVar5 != 0) {
    FUN_007dd7d4(local_60);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x178);
  uVar13 = (uint)uVar2;
  if (puVar8 == (undefined8 *)0x0) {
    lVar5 = uVar7 * 0x2d8;
    uVar9 = FUN_0078a12c();
    puVar8 = (undefined8 *)FUN_007bf9f0(lVar5,uVar9);
    if ((uVar13 != 0) && (puVar8 != (undefined8 *)0x0)) {
      lVar16 = (long)puVar8 + 3;
      do {
        *(undefined4 *)(lVar16 + -3) = 0;
        lVar16 = lVar16 + 4;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(param_2 + 0x178) = puVar8;
  }
  puVar1 = (undefined8 *)(param_2 + 0x138);
  if ((uVar13 != 0) && (puVar8 != (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0x168) = puVar8;
    lVar5 = param_2 + 0x150;
    *(uint *)(param_2 + 0x170) = uVar13;
    *puVar8 = 0;
    puVar8[1] = 0;
    FUN_0078f9e0(lVar5,lVar5,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
    if (uVar13 != 1) {
      lVar14 = uVar7 - 1;
      lVar16 = 0x2d8;
      do {
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x168) + lVar16);
        *puVar8 = 0;
        puVar8[1] = 0;
        FUN_0078f9e0(lVar5,lVar5,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
        lVar16 = lVar16 + 0x2d8;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  if (*(undefined8 **)(param_2 + 0x140) != puVar1) {
    puVar8 = *(undefined8 **)(param_2 + 0x140);
    do {
      puVar15 = (undefined8 *)puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      FUN_0078fa04(param_2 + 0x150,param_2 + 0x150,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
      puVar8 = puVar15;
    } while (puVar15 != puVar1);
  }
  FUN_0078f9d4(puVar1);
  FUN_007e5624(local_60,param_2 + 0x180,*(undefined2 *)(*(long *)puVar3 + 0x50));
  if (*(long *)(param_2 + 0x788) == 0) {
    uVar9 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(uVar7,uVar9);
    if ((uVar13 != 0) && (lVar5 != 0)) {
      uVar10 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar11) = 0;
          uVar11 = uVar11 + 4;
        } while ((uVar7 & 0xfffc) != uVar11);
      }
      if ((uVar2 & 3) != 0) {
        puVar12 = (undefined1 *)(lVar5 + uVar11);
        do {
          uVar10 = uVar10 - 1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        } while (uVar10 != 0);
      }
    }
    *(long *)(param_2 + 0x788) = lVar5;
    if (uVar13 != 0) {
      uVar10 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar11) = 0;
          uVar11 = uVar11 + 4;
        } while ((uVar7 & 0xfffc) != uVar11);
      }
      if ((uVar2 & 3) != 0) {
        puVar12 = (undefined1 *)(lVar5 + uVar11);
        do {
          uVar10 = uVar10 - 1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        } while (uVar10 != 0);
      }
    }
  }
  *(undefined2 *)(param_2 + 0x790) = 0;
  local_60[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_60);
  return;
}


