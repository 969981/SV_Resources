/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155e048; name: FUN_0155e048
 */


void FUN_0155e048(long param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 == 0) {
    lVar7 = param_1;
  }
  else {
    lVar4 = *(long *)(lVar7 + 0x68);
    if ((lVar4 != 0) && (lVar6 = *(long *)(lVar4 + 0x68), lVar7 = lVar4, lVar6 != 0)) {
      for (lVar4 = *(long *)(lVar6 + 0x68); lVar7 = lVar6, lVar4 != 0;
          lVar4 = *(long *)(lVar4 + 0x68)) {
        lVar6 = lVar4;
      }
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 1000);
  uVar10 = *(undefined8 *)(param_1 + 0x3f0);
  uVar11 = *(undefined8 *)(param_1 + 0x3f8);
  plVar8 = *(long **)(param_1 + 0x400);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_70 = &local_48;
  local_48 = (long *)0x0;
  uStack_68 = uVar9;
  local_60 = uVar10;
  uStack_58 = uVar11;
  local_50 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_015169d8(lVar7,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar2 = local_48;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar2 != (long *)0x0) {
    uVar5 = plVar2[0x1a];
    uVar3 = (uint)uVar5;
    uVar1 = uVar3 | 1;
    if ((param_2 & 1) == 0) {
      uVar1 = uVar3 & 0xe;
    }
    if (((~uVar3 & 0xf) == 0) != ((uVar1 & 0xf) == 0xf)) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,(uVar1 & 0xf) == 0xf);
      uVar5 = plVar2[0x1a];
    }
    plVar2[0x1a] = uVar5 & 0xfffffffffffffffe | param_2 & 1;
  }
  return;
}


