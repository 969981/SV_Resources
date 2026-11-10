/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295ad00; name: FUN_0295ad00
 */


void FUN_0295ad00(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [92];
  
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
  uVar7 = FUN_0293d6f0(param_1,param_2,param_3);
  if (((uVar7 & 1) != 0) && (cVar2 = FUN_02943aa0(param_1,param_3), cVar2 != '\n')) {
    uVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5);
    uVar1 = (uint)uVar3;
    if ((((uVar3 != 0) && (sVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6), sVar4 == 0)) &&
        ((lVar8 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2), lVar8 == 0
         || (uVar7 = FUN_02942a80(param_1,*(undefined2 *)(lVar8 + 0x710),uVar1), (uVar7 & 1) == 0)))
        ) && ((lVar8 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3),
              lVar8 == 0 ||
              (uVar7 = FUN_02942a80(param_1,*(undefined2 *)(lVar8 + 0x710),uVar1), (uVar7 & 1) == 0)
              ))) {
      local_b0 = 0;
      memset(auStack_9c,0,0x5c);
      local_b0 = CONCAT11(1,(undefined1)local_b0);
      local_ac = 0x1820180;
      local_b8 = param_2;
      uStack_b4 = param_3;
      uStack_a8 = param_2;
      local_a4 = uVar1;
      uStack_a0 = param_3;
      FUN_02940660(param_1,&local_b8);
    }
  }
  return;
}


