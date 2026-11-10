/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cbb38; name: FUN_034cbb38
 */


void FUN_034cbb38(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined1 auStack_14 [4];
  
  bVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((bVar2 & 1) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  *(byte *)((long)param_2 + 0x1c) = bVar2 & 1;
  bVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((bVar2 & 1) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  }
  *(byte *)((long)param_2 + 0x1d) = bVar2 & 1;
  bVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((bVar2 & 1) != 0) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  *(byte *)((long)param_2 + 0x1e) = bVar2 & 1;
  if ((param_2[1] != 0) && (iVar1 = *(int *)(param_2[1] + 0xdc), iVar1 != 0)) {
    lVar3 = FUN_034ccae0(param_1 + 0x20,iVar1,auStack_14);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    }
    *(int *)(param_2 + 3) = iVar1;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    *(long **)(param_1 + 0xa0) = param_2;
    param_2[2] = 0;
  }
  else {
    param_2[2] = *(long *)(param_1 + 0xa0);
    *(long **)(param_1 + 0xa0) = param_2;
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined2 *)(param_1 + 199) = 0x101;
  return;
}


