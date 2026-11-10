/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f0330; name: FUN_007f0330
 */


void FUN_007f0330(undefined8 param_1,long *param_2,long param_3,long *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  void *__src;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  ulong local_78 [2];
  ulong local_68 [2];
  undefined4 local_58 [2];
  
  uVar7 = *(ushort *)((long)param_4 + 0xc);
  uVar15 = (ulong)param_5;
  lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
  if (*(char *)(lVar9 + 0x1f) == '\0') {
    if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
      plVar10 = (long *)(**(code **)(*param_2 + 0x40))(param_2,uVar15);
      uVar4 = *(undefined1 *)((long)param_4 + 9);
      (**(code **)(*plVar10 + 0x18))();
      *(ushort *)(plVar10 + 3) = uVar7;
      *(undefined1 *)((long)plVar10 + 0x1e) = uVar4;
      goto LAB_007f03b0;
    }
LAB_007f03d8:
    local_68[0] = local_68[0] & 0xffffffff00000000;
  }
  else {
LAB_007f03b0:
    lVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar15);
    uVar16 = (uint)uVar7;
    if ((uint)uVar7 <= (uint)*(ushort *)(lVar9 + 0x18) && *(ushort *)(lVar9 + 0x18) != uVar16) {
      *(undefined1 *)(param_2 + 9) = 1;
      goto LAB_007f03d8;
    }
    lVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar15);
    if ((int)((uVar16 - *(ushort *)(lVar9 + 0x18)) + (uint)*(ushort *)(lVar9 + 0x1c)) <
        (int)(uint)*(ushort *)(lVar9 + 0x10)) {
      if ((((char)param_4[2] == '\0') ||
          ((*(uint *)((long)param_4 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c) + 0x14) >>
            (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 1) != 0)) &&
         (cVar5 = *(char *)((long)param_4 + 9),
         lVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar15), cVar5 == *(char *)(lVar9 + 0x1e)))
      {
        lVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar15);
        *(undefined1 *)(lVar9 + 0x1f) = 1;
        uVar14 = (uint)*(ushort *)(lVar9 + 0x1a);
        uVar16 = (uVar16 - *(ushort *)(lVar9 + 0x18)) + (uint)*(ushort *)(lVar9 + 0x1c);
        iVar8 = *(int *)(lVar9 + 0x14);
        uVar7 = *(ushort *)(lVar9 + 0x10);
        uVar2 = uVar16 & 0xffff;
        if (uVar2 < *(ushort *)(lVar9 + 0x1a)) {
          lVar17 = *(long *)(lVar9 + 8);
        }
        else {
          lVar17 = *(long *)(lVar9 + 8);
          do {
            uVar1 = uVar14 + iVar8;
            uVar3 = 0;
            if (uVar7 <= uVar1) {
              uVar3 = (uint)uVar7;
            }
            *(undefined1 *)(lVar17 + (ulong)(uVar1 - uVar3) * 0x5b8) = 0;
            uVar1 = uVar14 + 1;
            uVar14 = uVar1 & 0xffff;
          } while (uVar14 <= uVar2);
          *(short *)(lVar9 + 0x1a) = (short)uVar1;
        }
        uVar16 = iVar8 + uVar16;
        uVar2 = 0;
        if (uVar7 <= uVar16) {
          uVar2 = (uint)uVar7;
        }
        uVar19 = (ulong)(uVar16 - uVar2);
        *(undefined1 *)(param_2 + 9) = 1;
        pcVar18 = (char *)(lVar17 + uVar19 * 0x5b8);
        if (*pcVar18 == '\0') {
          uVar11 = (**(code **)(*param_4 + 0x20))(param_4);
          __src = (void *)(param_3 + (uVar11 & 0xffffffff));
          uVar16 = (uint)*(ushort *)((long)param_4 + 10);
          if ((*(byte *)(param_4 + 1) >> 4 & 1) != 0) {
            FUN_007e9984(local_68,param_2[0xd],__src,*(ushort *)((long)param_4 + 10));
            if ((int)local_68[0] != 0) {
              local_78[0]._0_4_ = 0x2c03;
              local_58[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
              puVar12 = local_78;
              goto LAB_007f04c4;
            }
            __src = *(void **)(param_2[0xd] + 0x28);
            uVar16 = *(uint *)(param_2[0xd] + 0x30);
          }
          iVar8 = (**(code **)(*param_4 + 0x20))(param_4);
          if (0x5a0 < iVar8 + uVar16) {
            uVar13 = 0x10407;
            goto LAB_007f04a8;
          }
          lVar17 = lVar17 + uVar19 * 0x5b8;
          memcpy((void *)(lVar17 + 6),__src,(ulong)uVar16);
          *pcVar18 = '\x01';
          bVar6 = *(byte *)(param_4 + 1);
          *(short *)(lVar17 + 4) = (short)uVar16;
          *(byte *)(lVar17 + 1) = bVar6 >> 2 & 1;
          *(byte *)(lVar17 + 2) = bVar6 >> 4 & 1;
          *(undefined8 *)(lVar17 + 0x5a8) = *(undefined8 *)(param_2[8] + (uVar15 & 0xff) * 8);
          local_68[0] = 0;
          FUN_007935cc(local_68);
          *(ulong *)(lVar17 + 0x5b0) = local_68[0];
        }
      }
      goto LAB_007f03d8;
    }
    uVar13 = 0x4c0d;
LAB_007f04a8:
    local_68[0] = CONCAT44(local_68[0]._4_4_,uVar13);
  }
  local_78[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
  puVar12 = local_68;
LAB_007f04c4:
  FUN_00cbd7c0(param_1,puVar12);
  return;
}


