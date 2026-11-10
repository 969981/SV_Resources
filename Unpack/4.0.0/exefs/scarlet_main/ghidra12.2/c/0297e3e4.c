/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e3e4; name: FUN_0297e3e4
 */


void FUN_0297e3e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_68;
  undefined1 local_64;
  
  plVar1 = (long *)*param_3;
  plVar2 = (long *)param_3[1];
  lVar13 = *(long *)(param_1 + 0x20);
  puVar11 = (undefined2 *)param_3[3];
  uVar6 = *puVar11;
  uVar7 = *(undefined2 *)(param_3 + 4);
  lVar14 = *(long *)(lVar13 + 0x20);
  uVar3 = *(undefined1 *)(param_3 + 2);
  uVar4 = *(undefined1 *)(puVar11 + 4);
  uVar5 = *(undefined1 *)((long)puVar11 + 9);
  uVar8 = (**(code **)(*plVar1 + 0x98))(plVar1);
  local_68 = (**(code **)(*plVar2 + 0x98))(plVar2);
  local_70 = uVar6;
  local_6e = uVar7;
  local_6c = uVar5;
  local_6b = uVar4;
  local_64 = uVar3;
  plVar10 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x30),uVar8);
  (**(code **)(*plVar10 + 0x788))(plVar10,&local_70);
  uVar12 = *(undefined8 *)(lVar13 + 0x18);
  uVar8 = (**(code **)(*plVar1 + 0x98))(plVar1);
  uVar9 = (**(code **)(*plVar2 + 0x98))(plVar2);
  FUN_0129aff0(uVar12,0x42,uVar8,uVar9,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


