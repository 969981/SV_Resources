/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e6bb4; name: FUN_007e6bb4
 */


void FUN_007e6bb4(undefined8 param_1,long param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  uVar11 = (ulong)param_5;
  lVar3 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  plVar13 = *(long **)(lVar3 + 0x10);
  uVar4 = (**(code **)(*plVar13 + 0x48))(plVar13);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  if ((param_5 & 0xffff) < 0x19) {
    *(short *)(param_2 + 0xa6) = (short)param_5;
    *(undefined4 *)(param_2 + 0x58) = param_6;
    uVar5 = FUN_0078a12c();
    lVar3 = FUN_007bf9f0((uVar11 & 0xffff) << 1,uVar5);
    if ((lVar3 != 0) && ((param_5 & 0xffff) != 0)) {
      uVar4 = uVar11 & 3;
      if ((uVar11 & 0xffff) - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        lVar12 = lVar3 + 4;
        do {
          uVar8 = uVar8 + 4;
          *(undefined8 *)(lVar12 + -4) = 0;
          lVar12 = lVar12 + 8;
        } while ((uVar11 & 0xfffc) != uVar8);
      }
      if ((param_5 & 3) != 0) {
        puVar9 = (undefined2 *)(lVar3 + uVar8 * 2);
        do {
          uVar4 = uVar4 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar2 = *(ushort *)(param_2 + 0xa6);
    *(long *)(param_2 + 0xb0) = lVar3;
    uVar5 = FUN_0078a12c();
    lVar12 = (ulong)uVar2 * 0x28;
    lVar3 = FUN_007bf9f0(lVar12,uVar5);
    if ((lVar3 != 0) && (uVar2 != 0)) {
      lVar7 = 0;
      puVar1 = PTR_DAT_047d1490 + 0x10;
      do {
        plVar13 = (long *)(lVar3 + lVar7);
        lVar7 = lVar7 + 0x28;
        *(undefined2 *)(plVar13 + 2) = 0;
        *(undefined4 *)((long)plVar13 + 0x14) = 0;
        plVar13[3] = 1;
        *(undefined4 *)(plVar13 + 4) = 0xffffffff;
        *(undefined1 *)((long)plVar13 + 0x24) = 0xfd;
        *(undefined2 *)((long)plVar13 + 0x26) = 0;
        *plVar13 = (long)puVar1;
        plVar13[1] = 0;
      } while (lVar12 != lVar7);
    }
    uVar2 = *(ushort *)(param_2 + 0xa6);
    uVar4 = (ulong)uVar2;
    *(long *)(param_2 + 0x38) = lVar3;
    uVar5 = FUN_0078a12c();
    lVar3 = FUN_007bf9f0(uVar4 << 3,uVar5);
    if ((lVar3 != 0) && (uVar2 != 0)) {
      uVar11 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        puVar10 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar8 = uVar8 + 4;
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 4;
        } while ((uVar4 & 0xfffc) != uVar8);
      }
      if ((uVar2 & 3) != 0) {
        puVar10 = (undefined8 *)(lVar3 + uVar8 * 8);
        do {
          uVar11 = uVar11 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (uVar11 != 0);
      }
    }
    *(long *)(param_2 + 0x40) = lVar3;
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    FUN_007e6e94(local_68,param_2 + 0x18,(uint)*(ushort *)(param_2 + 0xa6) * param_3);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] == 0) {
      if (*(short *)(param_2 + 0xa6) != 0) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          FUN_007e6fd4(local_68,*(long *)(param_2 + 0x38) + lVar3,param_4);
          FUN_018ff39c(local_58,local_68);
          if (local_58[0] != 0) {
            lVar3 = *(long *)(param_2 + 0x20);
            if (lVar3 != 0) {
              FUN_007bfae0(lVar3);
              FUN_007bfaa0(lVar3);
              *(undefined8 *)(param_2 + 0x20) = 0;
            }
            *(undefined2 *)(param_2 + 0x28) = 0;
            goto LAB_007e6de0;
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x28;
        } while (uVar4 < *(ushort *)(param_2 + 0xa6));
      }
      local_68[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
      piVar6 = local_68;
    }
    else {
LAB_007e6de0:
      piVar6 = local_58;
    }
  }
  else {
    local_58[0] = 0x10407;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar6 = local_58;
  }
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


