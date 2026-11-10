/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01243694; name: FUN_01243694
 */


void FUN_01243694(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 auStack_128 [20];
  byte local_82;
  byte local_80;
  long *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 auStack_48 [8];
  
  FUN_01243d84(auStack_128);
  FUN_012438b4(param_1,auStack_128);
  FUN_01243d7c(auStack_128);
  while( true ) {
    uVar7 = (ulong)local_80;
    if (local_82 <= local_80) {
      return;
    }
    local_80 = local_80 + 1;
    plVar8 = (long *)auStack_128[uVar7];
    if (plVar8 == (long *)0x0) break;
    uVar7 = (**(code **)(*plVar8 + 0x200))(plVar8);
    if ((((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*plVar8 + 0x4d0))(plVar8,5), (uVar7 & 1) == 0))
       && (uVar7 = (**(code **)(*plVar8 + 0x4d0))(plVar8,4), (uVar7 & 1) == 0)) {
      iVar1 = (**(code **)(*plVar8 + 0x98))(plVar8);
      lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0xc80);
      uVar2 = FUN_0126ec0c(*(undefined8 *)(lVar9 + 0x38));
      if (iVar1 != 0) {
        uVar2 = FUN_0126ee6c(*(undefined8 *)(lVar9 + 0x38),iVar1,uVar2);
      }
      if ((((uVar2 & 0xff) == 4) &&
          (uVar7 = (**(code **)(*plVar8 + 0x300))(plVar8,5), (uVar7 & 1) == 0)) &&
         ((uVar7 = (**(code **)(*plVar8 + 0x300))(plVar8,8), (uVar7 & 1) == 0 &&
          (uVar7 = (**(code **)(*plVar8 + 0x300))(plVar8,4), (uVar7 & 1) == 0)))) {
        uVar3 = (**(code **)(*plVar8 + 0x140))(plVar8);
        uVar6 = uVar3 >> 4 & 0xfff;
        if ((uVar3 & 0xffff) < 0x10) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
      iVar1 = FUN_01245270(*(undefined8 *)(param_1 + 0x38),plVar8,uVar2,uVar6);
      if (iVar1 != 0) {
        lVar9 = FUN_01582534(param_1);
        uVar4 = FUN_0144ed30(*(undefined8 *)(lVar9 + 0x70));
        FUN_01250d88(param_1,plVar8,uVar2,iVar1,uVar4);
      }
      local_70 = 1;
      local_68 = 0;
      local_78 = plVar8;
      uVar5 = FUN_0124389c(*(undefined8 *)(param_1 + 0x78));
      FUN_01244df8(uVar5,auStack_48,&local_78);
    }
    FUN_0123de68(param_1);
    uVar5 = FUN_0123de70();
    uVar7 = FUN_012438a4(uVar5,8);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  return;
}


