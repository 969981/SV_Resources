/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029543c0; name: FUN_029543c0
 */


void FUN_029543c0(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar4 = (**(code **)(*plVar3 + 0x1f8))();
  local_68 = param_2;
  if ((uVar4 & 1) == 0) {
    local_5c = 0;
    uStack_5b = 0;
    local_60 = 0;
    local_5a = 0x101;
    uStack_58 = 0x100;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_64 = param_2;
    uVar2 = (**(code **)(*plVar3 + 0x140))(plVar3);
    local_5c = 1;
    uVar1 = (ushort)(uVar2 >> 2) & 0x3fff;
    if ((uVar2 & 0xffff) < 4) {
      uVar1 = 1;
    }
    local_60 = CONCAT22(local_60._2_2_,uVar1);
    uStack_54 = 0x820082;
    uStack_50 = param_2;
    FUN_0293dcd0(param_1,&local_68);
  }
  else {
    local_64 = CONCAT31(local_64._1_3_,1);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_58 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    local_60 = 0x820048;
    local_5c = (undefined1)param_2;
    uStack_5b = (undefined1)((uint)param_2 >> 8);
    local_5a = (undefined2)((uint)param_2 >> 0x10);
    FUN_01907920(param_1,&local_68);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x2d0);
  if (((lVar5 != 0) && (*(byte *)(lVar5 + 10) < 2)) &&
     (*(undefined4 *)(lVar5 + 0xc) = 1, *(byte *)(lVar5 + 10) == 1)) {
    *(undefined1 *)(lVar5 + 10) = 2;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3b0);
  if (((lVar5 != 0) && (*(byte *)(lVar5 + 10) < 2)) &&
     (*(undefined4 *)(lVar5 + 0xc) = 1, *(byte *)(lVar5 + 10) == 1)) {
    *(undefined1 *)(lVar5 + 10) = 2;
  }
  return;
}


