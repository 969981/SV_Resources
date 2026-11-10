/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079a890; name: FUN_0079a890
 */


void FUN_0079a890(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  void *__s;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_50[0] = 0x10407;
    goto LAB_0079aedc;
  }
  *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)(param_3 + 8);
  puVar1 = PTR_DAT_047d0860;
  uVar4 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  uVar10 = (ulong)uVar4;
  *(ushort *)((long)param_2 + 0x114e) = uVar4;
  uVar2 = FUN_0078a12c();
  plVar3 = (long *)FUN_007bf9f0(uVar10 << 3,uVar2);
  if ((plVar3 != (long *)0x0) && (uVar4 != 0)) {
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      plVar8 = plVar3 + 2;
      do {
        uVar7 = uVar7 + 4;
        plVar8[-2] = 0;
        plVar8[-1] = 0;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8 = plVar8 + 4;
      } while ((uVar10 & 0xfffc) != uVar7);
    }
    if ((uVar4 & 3) != 0) {
      plVar8 = plVar3 + uVar7;
      do {
        uVar5 = uVar5 - 1;
        *plVar8 = 0;
        plVar8 = plVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar10 = (ulong)*(ushort *)((long)param_2 + 0x114e);
  param_2[0x11] = (long)plVar3;
  if (*(ushort *)((long)param_2 + 0x114e) != 0) {
    uVar5 = 0;
    lVar6 = *plVar3;
    while( true ) {
      if (lVar6 == 0) {
        uVar2 = (**(code **)(*param_2 + 0x230))(param_2);
        *(undefined8 *)(param_2[0x11] + uVar5 * 8) = uVar2;
        lVar6 = *(long *)(param_2[0x11] + uVar5 * 8);
        *(undefined2 *)(lVar6 + 8) = 0xff00;
        *(undefined1 *)(lVar6 + 10) = 0;
        FUN_007965fc(lVar6 + 0x10);
        uVar10 = (ulong)*(ushort *)((long)param_2 + 0x114e);
      }
      uVar5 = uVar5 + 1;
      if (uVar10 <= uVar5) break;
      lVar6 = *(long *)(param_2[0x11] + uVar5 * 8);
    }
  }
  uVar2 = FUN_0078a12c();
  plVar3 = (long *)FUN_007bf9f0(uVar10 << 3,uVar2);
  if ((plVar3 != (long *)0x0) && ((int)uVar10 != 0)) {
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      plVar8 = plVar3 + 2;
      do {
        uVar7 = uVar7 + 4;
        plVar8[-2] = 0;
        plVar8[-1] = 0;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8 = plVar8 + 4;
      } while ((uVar10 & 0xfffc) != uVar7);
    }
    if (uVar5 != 0) {
      plVar8 = plVar3 + uVar7;
      do {
        uVar5 = uVar5 - 1;
        *plVar8 = 0;
        plVar8 = plVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar4 = *(ushort *)((long)param_2 + 0x114e);
  param_2[0x12] = (long)plVar3;
  if (uVar4 != 0) {
    uVar10 = 0;
    lVar6 = *plVar3;
    while( true ) {
      if (lVar6 == 0) {
        uVar2 = (**(code **)(*param_2 + 0x230))(param_2);
        *(undefined8 *)(param_2[0x12] + uVar10 * 8) = uVar2;
        lVar6 = *(long *)(param_2[0x12] + uVar10 * 8);
        *(undefined2 *)(lVar6 + 8) = 0xff00;
        *(undefined1 *)(lVar6 + 10) = 0;
        FUN_007965fc(lVar6 + 0x10);
        uVar4 = *(ushort *)((long)param_2 + 0x114e);
      }
      uVar10 = uVar10 + 1;
      if (uVar4 <= uVar10) break;
      lVar6 = *(long *)(param_2[0x12] + uVar10 * 8);
    }
  }
  if (param_2[0x23] == 0) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03ca50e4);
    param_2[0x23] = lVar6;
    if (param_2[0x24] == 0) goto LAB_0079aad0;
LAB_0079aa98:
    if (param_2[0x25] != 0) goto LAB_0079aaa0;
LAB_0079aaf4:
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03c7cd6c);
    param_2[0x25] = lVar6;
    lVar6 = param_2[0x4e];
  }
  else {
    if (param_2[0x24] != 0) goto LAB_0079aa98;
LAB_0079aad0:
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03c41ba8);
    param_2[0x24] = lVar6;
    if (param_2[0x25] == 0) goto LAB_0079aaf4;
LAB_0079aaa0:
    lVar6 = param_2[0x4e];
  }
  if ((lVar6 == 0) && (uVar10 = (**(code **)(*param_2 + 0x178))(param_2), (uVar10 & 1) != 0)) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03c1f146);
    param_2[0x4e] = lVar6;
  }
  if (param_2[0x4f] == 0) {
    lVar6 = (**(code **)(*param_2 + 0x1f0))(param_2,&DAT_03c10d43);
    param_2[0x4f] = lVar6;
    if (param_2[0x26] == 0) goto LAB_0079ac10;
LAB_0079ab58:
    if (param_2[0x27] != 0) goto LAB_0079ab60;
LAB_0079ac90:
    lVar6 = (**(code **)(*param_2 + 0x290))(param_2);
    param_2[0x27] = lVar6;
    if (param_2[0x28] == 0) goto LAB_0079acac;
LAB_0079ab68:
    if (param_2[0x29] != 0) goto LAB_0079ab70;
LAB_0079acc8:
    lVar6 = (**(code **)(*param_2 + 0x270))(param_2);
    param_2[0x29] = lVar6;
    if (param_2[0x2a] == 0) goto LAB_0079ace4;
LAB_0079ab78:
    if (param_2[0x2b] != 0) goto LAB_0079ab80;
LAB_0079ad00:
    lVar6 = (**(code **)(*param_2 + 0x2b0))(param_2);
    param_2[0x2b] = lVar6;
    if (param_2[0x2c] == 0) goto LAB_0079ad1c;
LAB_0079ab88:
    if (param_2[0x2d] != 0) goto LAB_0079ab90;
LAB_0079ad38:
    lVar6 = (**(code **)(*param_2 + 0x2c0))(param_2);
    param_2[0x2d] = lVar6;
    if (param_2[0x2e] == 0) goto LAB_0079ad54;
LAB_0079ab98:
    if (param_2[0x2f] != 0) goto LAB_0079aba0;
LAB_0079ad70:
    lVar6 = (**(code **)(*param_2 + 0x2e0))(param_2);
    param_2[0x2f] = lVar6;
    if (param_2[0x30] == 0) goto LAB_0079ad8c;
LAB_0079aba8:
    if (param_2[0x22c] != 0) goto LAB_0079abb0;
LAB_0079ada8:
    lVar6 = (**(code **)(*param_2 + 0x300))(param_2);
    param_2[0x22c] = lVar6;
    if (param_2[0x22b] == 0) goto LAB_0079adc4;
LAB_0079abb8:
    if (param_2[0x31] != 0) goto LAB_0079abc0;
LAB_0079ade0:
    lVar6 = (**(code **)(*param_2 + 0x310))(param_2);
    param_2[0x31] = lVar6;
    if (param_2[0x32] == 0) goto LAB_0079adfc;
LAB_0079abc8:
    if (param_2[0x37] != 0) goto LAB_0079abd0;
LAB_0079ae18:
    lVar6 = (**(code **)(*param_2 + 800))(param_2);
    param_2[0x37] = lVar6;
    if (param_2[0x43] == 0) goto LAB_0079ae34;
LAB_0079abd8:
    if (param_2[0x22e] != 0) goto LAB_0079abe0;
LAB_0079ae50:
    uVar2 = FUN_0078a12c();
    lVar6 = FUN_007bf9f0(0x20,uVar2);
    if (lVar6 != 0) {
      FUN_00796584(lVar6);
    }
    param_2[0x22e] = lVar6;
    lVar6 = param_2[0x22f];
  }
  else {
    if (param_2[0x26] != 0) goto LAB_0079ab58;
LAB_0079ac10:
    uVar10 = (**(code **)(*param_2 + 0xe8))(param_2);
    uVar2 = FUN_0078a12c();
    lVar6 = FUN_007bf9f0(uVar10 & 0xffffffff,uVar2);
    if (((int)uVar10 != 0) && (lVar6 != 0)) {
      uVar5 = uVar10 & 3;
      if ((uVar10 & 0xffffffff) - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar6 + uVar7) = 0;
          uVar7 = uVar7 + 4;
        } while ((uVar10 & 0xfffffffc) != uVar7);
      }
      if (uVar5 != 0) {
        puVar9 = (undefined1 *)(lVar6 + uVar7);
        do {
          uVar5 = uVar5 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar5 != 0);
      }
    }
    param_2[0x26] = lVar6;
    if (param_2[0x27] == 0) goto LAB_0079ac90;
LAB_0079ab60:
    if (param_2[0x28] != 0) goto LAB_0079ab68;
LAB_0079acac:
    lVar6 = (**(code **)(*param_2 + 0x260))(param_2);
    param_2[0x28] = lVar6;
    if (param_2[0x29] == 0) goto LAB_0079acc8;
LAB_0079ab70:
    if (param_2[0x2a] != 0) goto LAB_0079ab78;
LAB_0079ace4:
    lVar6 = (**(code **)(*param_2 + 0x2a0))(param_2);
    param_2[0x2a] = lVar6;
    if (param_2[0x2b] == 0) goto LAB_0079ad00;
LAB_0079ab80:
    if (param_2[0x2c] != 0) goto LAB_0079ab88;
LAB_0079ad1c:
    lVar6 = (**(code **)(*param_2 + 0x280))(param_2);
    param_2[0x2c] = lVar6;
    if (param_2[0x2d] == 0) goto LAB_0079ad38;
LAB_0079ab90:
    if (param_2[0x2e] != 0) goto LAB_0079ab98;
LAB_0079ad54:
    lVar6 = (**(code **)(*param_2 + 0x2d0))(param_2);
    param_2[0x2e] = lVar6;
    if (param_2[0x2f] == 0) goto LAB_0079ad70;
LAB_0079aba0:
    if (param_2[0x30] != 0) goto LAB_0079aba8;
LAB_0079ad8c:
    lVar6 = (**(code **)(*param_2 + 0x250))(param_2);
    param_2[0x30] = lVar6;
    if (param_2[0x22c] == 0) goto LAB_0079ada8;
LAB_0079abb0:
    if (param_2[0x22b] != 0) goto LAB_0079abb8;
LAB_0079adc4:
    lVar6 = (**(code **)(*param_2 + 0x2f0))(param_2);
    param_2[0x22b] = lVar6;
    if (param_2[0x31] == 0) goto LAB_0079ade0;
LAB_0079abc0:
    if (param_2[0x32] != 0) goto LAB_0079abc8;
LAB_0079adfc:
    lVar6 = (**(code **)(*param_2 + 0x310))(param_2);
    param_2[0x32] = lVar6;
    if (param_2[0x37] == 0) goto LAB_0079ae18;
LAB_0079abd0:
    if (param_2[0x43] != 0) goto LAB_0079abd8;
LAB_0079ae34:
    lVar6 = (**(code **)(*param_2 + 0x240))(param_2);
    param_2[0x43] = lVar6;
    if (param_2[0x22e] == 0) goto LAB_0079ae50;
LAB_0079abe0:
    lVar6 = param_2[0x22f];
  }
  if (lVar6 == 0) {
    uVar2 = FUN_0078a12c();
    lVar6 = FUN_007bf9f0(0x20,uVar2);
    if (lVar6 != 0) {
      FUN_00796584(lVar6);
    }
    param_2[0x22f] = lVar6;
  }
  FUN_007f74c0(*(undefined8 *)puVar1);
  *(undefined1 *)(param_2 + 0x46) = 0;
  FUN_0079af14(param_2);
  __s = (void *)param_2[0x26];
  uVar10 = (**(code **)(*param_2 + 0xe8))(param_2);
  memset(__s,0,uVar10 & 0xffffffff);
  local_50[0] = 0;
LAB_0079aedc:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


