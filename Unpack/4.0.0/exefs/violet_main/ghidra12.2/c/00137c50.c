/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00137c50; name: FUN_00137c50
 */


void FUN_00137c50(long *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  iVar1 = 0;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  if ((int)param_3 < 0x100) {
    uVar2 = (undefined4)param_1[4];
    uVar8 = param_2 << 7 | param_3 << 0x18 | iVar1 << 0x10 | 0x4e;
    lVar7 = *param_1;
    uVar3 = *(undefined8 *)(param_1[2] + 0x38);
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
  }
  else {
    lVar5 = *param_1;
    lVar4 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                         (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar5 + 0x40) = lVar4;
    lVar7 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar7 + 1;
    *(uint *)(lVar4 + (long)(int)lVar7 * 4) =
         param_2 << 7 | param_3 << 0x18 | iVar1 << 0x10 | 0x804e;
    FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
    uVar8 = param_3 >> 1 & 0x7fffff80 | 0x52;
    lVar7 = *param_1;
    uVar2 = (undefined4)param_1[4];
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    uVar3 = *(undefined8 *)(param_1[2] + 0x38);
  }
  lVar5 = FUN_0012d3b0(uVar3,uVar6,uVar2,lVar7 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar7 + 0x40) = lVar5;
  lVar4 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar4 + 1;
  *(uint *)(lVar5 + (long)(int)lVar4 * 4) = uVar8;
  FUN_00133660(param_1,lVar7,*(undefined4 *)(param_1[2] + 8));
  *(char *)((long)param_1 + 0x44) = (char)param_2 + '\x01';
  return;
}


