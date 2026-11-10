/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e35c58; name: FUN_02e35c58
 */


void FUN_02e35c58(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  uVar7 = FUN_0154b684(param_2,param_3);
  if ((uVar7 & 1) != 0) {
    lVar12 = *(long *)(param_3 + 0x30);
    if (*(char *)(lVar12 + 0x58) != '\0') {
      uVar7 = 0;
      do {
        plVar10 = *(long **)(lVar12 + uVar7 * 8 + 0x28);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        lVar8 = FUN_0154b718(param_1,param_2,param_3,uVar5);
        cVar2 = (**(code **)(*plVar10 + 0x708))(plVar10);
        if (cVar2 != '\0') {
          uVar11 = 0;
          do {
            uVar4 = (**(code **)(*plVar10 + 0x768))(plVar10,uVar11 & 0xffffffff);
            lVar1 = lVar8 + uVar11 * 2;
            *(ushort *)(lVar1 + 0xc) = uVar4 & 0xff;
            uVar4 = (**(code **)(*plVar10 + 0x778))(plVar10,uVar11 & 0xffffffff);
            *(ushort *)(lVar1 + 0x14) = uVar4 & 0xff;
            uVar11 = uVar11 + 1;
            bVar3 = (**(code **)(*plVar10 + 0x708))(plVar10);
          } while (uVar11 < bVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(lVar12 + 0x58));
    }
    if (*(char *)(lVar12 + 0x90) != '\0') {
      uVar7 = 0;
      do {
        plVar10 = *(long **)(lVar12 + uVar7 * 8 + 0x60);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        lVar8 = FUN_0154b718(param_1,param_2,param_3,uVar5);
        cVar2 = (**(code **)(*plVar10 + 0x708))(plVar10);
        if (cVar2 != '\0') {
          uVar11 = 0;
          do {
            uVar4 = (**(code **)(*plVar10 + 0x768))(plVar10,uVar11 & 0xffffffff);
            lVar1 = lVar8 + uVar11 * 2;
            *(ushort *)(lVar1 + 0xc) = uVar4 & 0xff;
            uVar4 = (**(code **)(*plVar10 + 0x778))(plVar10,uVar11 & 0xffffffff);
            *(ushort *)(lVar1 + 0x14) = uVar4 & 0xff;
            uVar11 = uVar11 + 1;
            bVar3 = (**(code **)(*plVar10 + 0x708))(plVar10);
          } while (uVar11 < bVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(lVar12 + 0x90));
    }
    if (*(char *)(lVar12 + 200) != '\0') {
      uVar7 = 0;
      do {
        plVar10 = *(long **)(lVar12 + uVar7 * 8 + 0x98);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        lVar8 = FUN_0154b718(param_1,param_2,param_3,uVar5);
        cVar2 = (**(code **)(*plVar10 + 0x708))(plVar10);
        if (cVar2 != '\0') {
          uVar11 = 0;
          do {
            uVar4 = (**(code **)(*plVar10 + 0x768))(plVar10,uVar11 & 0xffffffff);
            lVar1 = lVar8 + uVar11 * 2;
            *(ushort *)(lVar1 + 0xc) = uVar4 & 0xff;
            uVar4 = (**(code **)(*plVar10 + 0x778))(plVar10,uVar11 & 0xffffffff);
            *(ushort *)(lVar1 + 0x14) = uVar4 & 0xff;
            uVar11 = uVar11 + 1;
            bVar3 = (**(code **)(*plVar10 + 0x708))(plVar10);
          } while (uVar11 < bVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(lVar12 + 200));
    }
    if (*(char *)(lVar12 + 0x100) != '\0') {
      uVar7 = 0;
      do {
        plVar10 = *(long **)(lVar12 + uVar7 * 8 + 0xd0);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        lVar8 = FUN_0154b718(param_1,param_2,param_3,uVar5);
        cVar2 = (**(code **)(*plVar10 + 0x708))(plVar10);
        if (cVar2 != '\0') {
          uVar11 = 0;
          do {
            uVar4 = (**(code **)(*plVar10 + 0x768))(plVar10,uVar11 & 0xffffffff);
            lVar1 = lVar8 + uVar11 * 2;
            *(ushort *)(lVar1 + 0xc) = uVar4 & 0xff;
            uVar4 = (**(code **)(*plVar10 + 0x778))(plVar10,uVar11 & 0xffffffff);
            *(ushort *)(lVar1 + 0x14) = uVar4 & 0xff;
            uVar11 = uVar11 + 1;
            bVar3 = (**(code **)(*plVar10 + 0x708))(plVar10);
          } while (uVar11 < bVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(lVar12 + 0x100));
    }
    if (*(char *)(lVar12 + 0x138) != '\0') {
      uVar7 = 0;
      do {
        plVar10 = *(long **)(lVar12 + uVar7 * 8 + 0x108);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        lVar8 = FUN_0154b718(param_1,param_2,param_3,uVar5);
        cVar2 = (**(code **)(*plVar10 + 0x708))(plVar10);
        if (cVar2 != '\0') {
          uVar11 = 0;
          do {
            uVar4 = (**(code **)(*plVar10 + 0x768))(plVar10,uVar11 & 0xffffffff);
            lVar1 = lVar8 + uVar11 * 2;
            *(ushort *)(lVar1 + 0xc) = uVar4 & 0xff;
            uVar4 = (**(code **)(*plVar10 + 0x778))(plVar10,uVar11 & 0xffffffff);
            *(ushort *)(lVar1 + 0x14) = uVar4 & 0xff;
            uVar11 = uVar11 + 1;
            bVar3 = (**(code **)(*plVar10 + 0x708))(plVar10);
          } while (uVar11 < bVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(lVar12 + 0x138));
    }
    uVar7 = FUN_0176882c(param_2);
    uVar9 = (undefined1)(0x2020001020001 >> ((uVar7 & 7) << 3));
    if (6 < (uint)uVar7) {
      uVar9 = 2;
    }
    *(undefined1 *)(param_1 + 0x150) = uVar9;
    iVar6 = FUN_0176882c(param_2);
    if (((*(short *)(param_2 + 0x8a) == 0) ||
        (uVar7 = FUN_01498af4(*(undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0x95) * 8 + 0xb8)
                             ), (uVar7 & 1) == 0)) &&
       ((*(short *)(param_2 + 0x8c) == 0 || (*(char *)(param_2 + 0x94) != '\x02')))) {
      cVar2 = (iVar6 - 3U < 2) << 1;
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0x151) = cVar2;
  }
  return;
}


