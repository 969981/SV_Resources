/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d840c; name: FUN_007d840c
 */


uint FUN_007d840c(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ushort uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  char local_74 [4];
  ulong local_70;
  ulong local_68;
  
  puVar4 = PTR_DAT_047d0a08;
  puVar3 = PTR_DAT_047d0860;
  lVar14 = *(long *)(param_1 + 0x140);
  if (lVar14 == param_1 + 0x138) {
    uVar13 = 0;
  }
  else {
    uVar10 = *(undefined8 *)PTR_DAT_047d11a0;
    uVar13 = 0;
    bVar5 = false;
    do {
      if (*(long *)(param_1 + 0x130) != 0) {
        FUN_007de84c(*(long *)(param_1 + 0x130),lVar14 + 0x20);
      }
      uVar11 = *(ulong *)(lVar14 + 0x48);
      if (uVar11 == 0) {
        lVar8 = *(long *)puVar4;
        uVar11 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xc0));
        if (((uVar11 & 1) != 0) &&
           (lVar12 = *(long *)(lVar14 + 0x10), lVar8 = FUN_007e5328(lVar8 + 0x1b8), lVar12 == lVar8)
           ) break;
        plVar6 = *(long **)(*(long *)puVar4 + 0x18);
        uVar11 = (**(code **)(*plVar6 + 0x128))(plVar6,lVar14 + 0x20);
        if ((uVar11 & 1) == 0) {
          uVar13 = 1;
        }
        else {
          local_74[0] = '\0';
          uVar11 = FUN_007d6b54(param_1,*(undefined8 *)(lVar14 + 0x10),
                                *(undefined2 *)(lVar14 + 0x18),*(undefined1 *)(lVar14 + 0x1a),
                                *(undefined1 *)(lVar14 + 0x1b),lVar14 + 0x20,0,1,local_74);
          if (uVar11 == 0) {
            return 0;
          }
          FUN_007e1ab4(uVar11,lVar14 + 0x50);
          *(undefined1 *)(uVar11 + 0x3a) = 2;
          uVar9 = *(ushort *)(lVar14 + 0x1c);
          *(ushort *)(uVar11 + 0xf0) = uVar9;
          *(undefined1 *)(uVar11 + 0x358) = 0;
          if (*(char *)(lVar14 + 0x70) != '\0') {
            uVar15 = 0;
            lVar8 = lVar14 + 0x78;
            do {
              FUN_007e1bf8(uVar11,lVar8);
              uVar15 = uVar15 + 1;
              lVar8 = lVar8 + 0x98;
            } while (uVar15 < *(byte *)(lVar14 + 0x70));
            uVar9 = *(ushort *)(lVar14 + 0x1c);
          }
          *(undefined1 *)(uVar11 + 0x359) = *(undefined1 *)(lVar14 + 0x71);
          if (*(ushort *)(param_1 + 0x790) <= uVar9) {
            *(ushort *)(param_1 + 0x790) = uVar9 + 1;
          }
          uVar7 = FUN_01f7c4e8(*(undefined8 *)puVar3);
          FUN_007e3854(uVar7,uVar11,*(undefined1 *)(lVar14 + 0x40));
          lVar8 = *(long *)puVar3;
          if ((ushort)*(byte *)(lVar14 + 0x40) < *(ushort *)(lVar8 + 0x50)) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)*(byte *)(lVar14 + 0x40)) = 1;
          }
          local_68 = local_68 & 0xffffffff00000000;
          local_70 = 0x10000000000;
          FUN_007f72e0(lVar8,&local_70);
          uVar15 = FUN_007d6714(param_1 + 0x868,*(undefined8 *)(uVar11 + 0x30),
                                *(undefined2 *)(uVar11 + 0x38));
          if ((uVar15 & 1) == 0) {
            if (*(code **)(param_1 + 0x778) != (code *)0x0) {
              local_70 = local_70 & 0xffffffff00000000;
              local_68 = uVar11;
              (**(code **)(param_1 + 0x778))(&local_70);
            }
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x850);
            uVar15 = (ulong)uVar1;
            if ((int)uVar1 < 0x17) {
              if (0 < (int)uVar1) {
                plVar6 = (long *)(param_1 + 0x798);
                do {
                  if (*plVar6 == *(long *)(uVar11 + 0x30)) goto LAB_007d86d0;
                  uVar15 = uVar15 - 1;
                  plVar6 = plVar6 + 1;
                } while (uVar15 != 0);
              }
              *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x798) = *(long *)(uVar11 + 0x30);
              *(uint *)(param_1 + 0x850) = uVar1 + 1;
            }
LAB_007d86d0:
            FUN_007d5030(param_1);
          }
          if (*(char *)(uVar11 + 0x78) != '\0') {
            *(undefined1 *)(uVar11 + 0x3a) = 3;
          }
          *(undefined1 *)(param_1 + 0x792) = 1;
          bVar5 = local_74[0] != '\0' || bVar5;
LAB_007d8798:
          FUN_007e05c4(uVar10,uVar11,*(undefined1 *)(lVar14 + 0x40));
        }
      }
      else if (*(char *)(uVar11 + 0x78) == '\0') {
        FUN_007e1ab4(uVar11,lVar14 + 0x50);
        *(undefined1 *)(uVar11 + 0x3a) = 2;
        uVar9 = *(ushort *)(lVar14 + 0x1c);
        *(ushort *)(uVar11 + 0xf0) = uVar9;
        *(undefined1 *)(uVar11 + 0x358) = 0;
        if (*(char *)(lVar14 + 0x70) != '\0') {
          uVar15 = 0;
          lVar8 = lVar14 + 0x78;
          do {
            FUN_007e1bf8(uVar11,lVar8);
            uVar15 = uVar15 + 1;
            lVar8 = lVar8 + 0x98;
          } while (uVar15 < *(byte *)(lVar14 + 0x70));
          uVar9 = *(ushort *)(lVar14 + 0x1c);
        }
        *(undefined1 *)(uVar11 + 0x359) = *(undefined1 *)(lVar14 + 0x71);
        if (*(ushort *)(param_1 + 0x790) <= uVar9) {
          *(ushort *)(param_1 + 0x790) = uVar9 + 1;
        }
        bVar2 = *(byte *)(uVar11 + 0x28);
        if (bVar2 != *(byte *)(lVar14 + 0x40)) {
          if ((bVar2 != 0xfd) && ((uint)bVar2 < (uint)*(ushort *)(*(long *)puVar3 + 0x50))) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)(uint)bVar2) = 0;
          }
          FUN_007e03a0(uVar10,uVar11);
          uVar7 = FUN_01f7c4e8(*(undefined8 *)puVar3);
          FUN_007e3854(uVar7,uVar11,*(undefined1 *)(lVar14 + 0x40));
          lVar8 = *(long *)puVar3;
          if ((ushort)*(byte *)(lVar14 + 0x40) < *(ushort *)(lVar8 + 0x50)) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)*(byte *)(lVar14 + 0x40)) = 1;
          }
          local_68 = local_68 & 0xffffffff00000000;
          local_70 = 0x10000000000;
          FUN_007f72e0(lVar8,&local_70);
          goto LAB_007d8798;
        }
        local_70 = 0x20000000000;
        local_68 = local_68 & 0xffffffff00000000;
        FUN_007f72e0(*(undefined8 *)puVar3,&local_70);
      }
      lVar14 = *(long *)(lVar14 + 8);
    } while (lVar14 != param_1 + 0x138);
    if ((*(long *)(param_1 + 0x130) != 0) && (bVar5)) {
      FUN_007ddf88();
    }
  }
  return uVar13 ^ 1;
}


