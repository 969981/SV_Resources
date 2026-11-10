/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f9790; name: FUN_034f9790
 */


void FUN_034f9790(long *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_3 == 0) {
    *(undefined2 *)((long)param_6 + 0x12) = 0;
    uVar2 = 0x2e;
    goto LAB_034f9878;
  }
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((long)param_6 + 0x12) = param_3;
  *(undefined4 *)(param_6 + 1) = param_5;
  lVar4 = param_1[3];
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x250) != 0)) {
    FUN_0348994c(param_1 + 8,*(long *)(lVar4 + 0x250) + 0x138,lVar4,param_6,(int)param_1[5],
                 (uint)param_3);
  }
  *(undefined4 *)(param_6 + 5) = param_4;
  *(int *)((long)param_6 + 0x1c) = (int)param_1[5];
  *(undefined4 *)((long)param_6 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
  uVar1 = (int)param_1[5] + (uint)param_3;
  *(uint *)(param_1 + 5) = uVar1;
  if (*(short *)((long)param_1 + 0x54) == 1) {
    if (uVar1 < *(uint *)((long)param_1 + 0x24)) {
LAB_034f9874:
      uVar2 = 0x2d;
      goto LAB_034f9878;
    }
    uVar3 = 1;
    pcVar5 = *(code **)(*param_1 + 0x118);
  }
  else {
    if (uVar1 <= *(uint *)(param_1 + 7)) goto LAB_034f9874;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x34);
    pcVar5 = *(code **)(*param_1 + 0x118);
    uVar3 = 0;
  }
  uVar2 = (*pcVar5)(param_1,uVar3);
LAB_034f9878:
  *(undefined4 *)((long)param_6 + 0x2c) = uVar2;
  return;
}


