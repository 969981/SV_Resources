/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a6254; name: FUN_017a6254
 */


void FUN_017a6254(long param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((param_2 != (long *)0x0) && (pbVar1 = (byte *)(param_1 + 0x25c8), *pbVar1 < 0x19)) {
    plVar7 = param_2 + 8;
    uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (uVar3 < 0x159) {
      param_1 = param_1 + 0x48;
      lVar5 = param_1 + (ulong)*pbVar1 * 0x180;
      *(undefined1 *)(lVar5 + 0x160) = 1;
      uVar4 = *param_3;
      uVar2 = param_3[1];
      uVar6 = param_3[2];
      *(undefined2 *)(lVar5 + 0x17c) = *(undefined2 *)(param_3 + 3);
      *(undefined8 *)(lVar5 + 0x16c) = uVar2;
      *(undefined8 *)(lVar5 + 0x174) = uVar6;
      *(undefined8 *)(lVar5 + 0x164) = uVar4;
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2);
      *(undefined8 *)(param_1 + (ulong)*pbVar1 * 0x180) = uVar4;
      (**(code **)param_2[8])(plVar7,param_1 + (ulong)*pbVar1 * 0x180 + 8);
      *pbVar1 = *pbVar1 + 1;
    }
  }
  return;
}


