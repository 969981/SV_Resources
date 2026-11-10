/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ffde8; name: FUN_018ffde8
 */


void FUN_018ffde8(undefined8 param_1,long param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar6 = local_50;
  FUN_018ff90c(local_40);
  puVar3 = PTR_DAT_047d0868;
  if (local_40[0] == 0) {
    *(undefined2 *)(PTR_DAT_047d0868 + 0x3a2) = param_3;
    puVar2 = PTR_DAT_047d0860;
    *(undefined2 *)(puVar3 + 0x3a4) = param_4;
    uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
    uVar10 = (ulong)uVar1;
    uVar4 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(uVar10,uVar4);
    if (uVar10 != 0 && lVar5 != 0) {
      uVar7 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar8) = 0;
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffc) != uVar8);
      }
      if ((uVar1 & 3) != 0) {
        puVar9 = (undefined1 *)(lVar5 + uVar8);
        do {
          uVar7 = uVar7 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar7 != 0);
      }
    }
    *(long *)(param_2 + 0x98) = lVar5;
    uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
    uVar10 = (ulong)uVar1;
    uVar4 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(uVar10,uVar4);
    if (uVar10 != 0 && lVar5 != 0) {
      uVar7 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar8) = 0;
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffc) != uVar8);
      }
      if ((uVar1 & 3) != 0) {
        puVar9 = (undefined1 *)(lVar5 + uVar8);
        do {
          uVar7 = uVar7 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar7 != 0);
      }
    }
    *(long *)(param_2 + 0xc0) = lVar5;
    uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
    uVar10 = (ulong)uVar1;
    uVar4 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(uVar10,uVar4);
    if (uVar10 != 0 && lVar5 != 0) {
      uVar7 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar8) = 0;
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffc) != uVar8);
      }
      if ((uVar1 & 3) != 0) {
        puVar9 = (undefined1 *)(lVar5 + uVar8);
        do {
          uVar7 = uVar7 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        } while (uVar7 != 0);
      }
    }
    *(long *)(param_2 + 200) = lVar5;
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar6 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


