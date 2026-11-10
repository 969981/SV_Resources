/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ef160; name: FUN_007ef160
 */


void FUN_007ef160(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  long *plVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  puVar4 = PTR_DAT_047d0860;
  if (*(int *)PTR_DAT_047d0e88 == param_5) {
    local_58[0] = 0x10407;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar7 = local_58;
  }
  else {
    *(int *)(param_2 + 0x58) = param_5;
    uVar3 = *(ushort *)(*(long *)puVar4 + 0x50);
    uVar5 = FUN_0078a12c();
    lVar12 = (ulong)uVar3 * 0x28;
    lVar6 = FUN_007bf9f0(lVar12,uVar5);
    if ((lVar6 != 0) && (uVar3 != 0)) {
      lVar8 = 0;
      puVar1 = PTR_DAT_047d1490 + 0x10;
      do {
        plVar2 = (long *)(lVar6 + lVar8);
        lVar8 = lVar8 + 0x28;
        *(undefined2 *)(plVar2 + 2) = 0;
        *(undefined4 *)((long)plVar2 + 0x14) = 0;
        plVar2[3] = 1;
        *(undefined4 *)(plVar2 + 4) = 0xffffffff;
        *(undefined1 *)((long)plVar2 + 0x24) = 0xfd;
        *(undefined2 *)((long)plVar2 + 0x26) = 0;
        *plVar2 = (long)puVar1;
        plVar2[1] = 0;
      } while (lVar12 != lVar8);
    }
    *(long *)(param_2 + 0x38) = lVar6;
    uVar3 = *(ushort *)(*(long *)puVar4 + 0x50);
    uVar13 = (ulong)uVar3;
    uVar5 = FUN_0078a12c();
    lVar6 = FUN_007bf9f0(uVar13 << 3,uVar5);
    if ((lVar6 != 0) && (uVar3 != 0)) {
      uVar9 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar11 = (undefined8 *)(lVar6 + 0x10);
        do {
          uVar10 = uVar10 + 4;
          puVar11[-2] = 0;
          puVar11[-1] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 4;
        } while ((uVar13 & 0xfffc) != uVar10);
      }
      if ((uVar3 & 3) != 0) {
        puVar11 = (undefined8 *)(lVar6 + uVar10 * 8);
        do {
          uVar9 = uVar9 - 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    *(long *)(param_2 + 0x40) = lVar6;
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    FUN_007e6e94(local_68,param_2 + 0x18,param_3);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] == 0) {
      FUN_007e6fd4(local_68,*(undefined8 *)(param_2 + 0x38),param_4);
      FUN_018ff39c(local_58,local_68);
      if (local_58[0] == 0) {
        local_68[0] = 0;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
        piVar7 = local_68;
      }
      else {
        lVar6 = *(long *)(param_2 + 0x20);
        if (lVar6 != 0) {
          FUN_007bfae0(lVar6);
          FUN_007bfaa0(lVar6);
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        *(undefined2 *)(param_2 + 0x28) = 0;
        piVar7 = local_58;
      }
    }
    else {
      piVar7 = local_58;
    }
  }
  FUN_00cbd7c0(param_1,piVar7);
  return;
}


